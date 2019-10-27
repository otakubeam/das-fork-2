#include "daScript/misc/platform.h"

#ifdef _MSC_VER
#pragma warning(disable:4505)
#endif

#include "daScript/ast/ast.h"
#include "daScript/simulate/simulate_fusion.h"
#include "daScript/simulate/sim_policy.h"
#include "daScript/simulate/simulate_visit_op.h"

namespace das {

    SimNode * SimNode_Op1Fusion::visit(SimVisitor & vis) {
        V_BEGIN();
        string name = op;
        name += getSimSourceName(subexpr.type);
        if ( baseType!=Type::none && baseType!=Type::anyArgument ) {
            vis.op(name.c_str(), getTypeBaseSize(baseType), das_to_string(baseType));
        } else {
            vis.op(name.c_str());
        }
        subexpr.visit(vis);
        V_END();
    }

    SimNode * SimNode_Op2Fusion::visit(SimVisitor & vis) {
        V_BEGIN();
        string name = op;
        name += getSimSourceName(l.type);
        name += getSimSourceName(r.type);
        if ( baseType!=Type::none && baseType!=Type::anyArgument ) {
            vis.op(name.c_str(), getTypeBaseSize(baseType), das_to_string(baseType));
        } else {
            vis.op(name.c_str());
        }
        l.visit(vis);
        r.visit(vis);
        V_END();
    }

    SimNode * FusionPointOp1::fuseOp1(const SimNodeInfoLookup & info, SimNode * node, SimNode * node_x, Context * context) {
        SimNode_Op1Fusion * result = (SimNode_Op1Fusion *) match(info,node,node_x,context);
        if (result) {
            set(result, node);
            result->subexpr = static_cast<SimNode_SourceBase *>(node_x)->subexpr;
            return result;
        } else {
            return node;
        }
    }

    SimNode * FusionPointOp2::fuseOp2(const SimNodeInfoLookup & info, SimNode * node, SimNode * node_l, SimNode * node_r, Context * context) {
        anyLeft = anyRight = false;
        SimNode_Op2Fusion * result = (SimNode_Op2Fusion *) match(info,node,node_l,node_r,context);
        if ( result ) { 
            set(result,node); 
            if ( !anyLeft && node_l->rtti_isSourceBase() ) {
                result->l = static_cast<SimNode_SourceBase *>(node_l)->subexpr;
            } else {
                result->l.setSimNode(node_l);
            }
            if ( !anyRight && node_r->rtti_isSourceBase() ) {
                result->r = static_cast<SimNode_SourceBase *>(node_r)->subexpr;
            } else {
                result->r.setSimNode(node_r);
            }
            return result; 
        } else { 
            return node; 
        } 
    }

    const char * getSimSourceName(SimSourceType st) {
        switch ( st ) {
        case SimSourceType::sSimNode:                          return "Any";
        case SimSourceType::sConstValue:                       return "Const";
        case SimSourceType::sCMResOff:                         return "Cmro";
        case SimSourceType::sBlockCMResOff:                    return "Bcmro";
        case SimSourceType::sLocal:                            return "Loc";
        case SimSourceType::sLocalRefOff:                      return "Locro";
        case SimSourceType::sArgument:                         return "Arg";
        case SimSourceType::sArgumentRef:                      return "Argr";
        case SimSourceType::sArgumentRefOff:                   return "Argro";
        case SimSourceType::sBlockArgument:                    return "Barg";
        case SimSourceType::sBlockArgumentRef:                 return "Bargr";
        case SimSourceType::sThisBlockArgument:                return "Tbarg";
        case SimSourceType::sThisBlockArgumentRef:             return "Tbargr";
        case SimSourceType::sGlobal:                           return "Glob";
        };
        return "???";
    }

    string fuseName ( const string & name, const string & typeName ) {
        return typeName.empty() ? name : (name + "<" + typeName + ">");
    }

    unique_ptr<FusionEngine> g_fusionEngine;

    void resetFusionEngine() {
        g_fusionEngine.reset();
    }

    void createFusionEngine() {
        if ( !g_fusionEngine ) {
            g_fusionEngine = make_unique<FusionEngine>();
#if DAS_FUSION
            // misc (note, misc before everything)
            createFusionEngine_misc_copy_reference();
            // op1
            createFusionEngine_op1();
            createFusionEngine_return();
            createFusionEngine_ptrfdr();
            createFusionEngine_if();
            // scalar
            createFusionEngine_op2();
            createFusionEngine_op2_set();
            createFusionEngine_op2_bool();
            createFusionEngine_op2_bin();
            // vector
            createFusionEngine_op2_vec();
            createFusionEngine_op2_set_vec();
            createFusionEngine_op2_bool_vec();
            createFusionEngine_op2_bin_vec();
            createFusionEngine_op2_scalar_vec();
            // at
            createFusionEngine_at();
            createFusionEngine_at_array();
            createFusionEngine_tableindex();
            // call
            createFusionEngine_call2();
#endif
        }
    }

    struct SimNodeCollector : SimVisitor {
        virtual void preVisit ( SimNode * node ) override {
            SimVisitor::preVisit(node);
            thisNode = node;
        }
        virtual void op ( const char * name, size_t typeSize, const string & typeName ) override {
            SimNodeInfo ni;
            ni.name = name;
            ni.typeName = typeName;
            ni.typeSize = typeSize;
            info[thisNode] = ni;

        }
        map<SimNode *,SimNodeInfo>  info;
        SimNode * thisNode = nullptr;
    };

    struct SimFusion : SimVisitor {
        SimFusion ( Context * ctx, TextWriter & wr,  map<SimNode *,SimNodeInfo> && ni )
            : context(ctx), ss(wr), info(ni) {
                createFusionEngine();
        }
        void fuse() {
            fused = true;
        }
        virtual SimNode * visit ( SimNode * node ) override {
            auto & ni = info[node];
            auto & nv = (*g_fusionEngine)[fuseName(ni.name, ni.typeName)];
            for ( const auto & fe : nv ) {
                auto newNode = fe->fuse(info, node, context);
                if ( newNode != node ) {
                    fuse();
                    return newNode;
                }
            }
            return SimVisitor::visit(node);
        }
        Context * context = nullptr;
        TextWriter & ss;
        bool fused = false;
        map<SimNode *,SimNodeInfo> & info;
    };

    void Program::fusion ( Context & context, TextWriter & logs ) {
        // log all functions
        if ( options.getBoolOption("fusion",true) ) {
            bool anyFusion = true;
            while ( anyFusion) {
                anyFusion = false;
                for ( int g=0; g!=context.totalVariables; ++g ) {
                    GlobalVariable * var = context.globalVariables + g;
                    if ( var->init ) {
                        SimNodeCollector collector;
                        var->init->visit(collector);
                        SimFusion fuse(&context, logs, move(collector.info));
                        var->init = var->init->visit(fuse);
                        anyFusion |= fuse.fused;
                    }
                }
                for ( int i=0; i!=context.totalFunctions; ++i ) {
                    SimFunction * fn = context.getFunction(i);
                    SimNodeCollector collector;
                    fn->code->visit(collector);
                    SimFusion fuse(&context, logs, move(collector.info));
                    fn->code = fn->code->visit(fuse);
                    anyFusion |= fuse.fused;
                }
            }
        }
    }
}

