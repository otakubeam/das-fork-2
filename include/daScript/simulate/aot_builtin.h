#pragma once

namespace das {
    void builtin_throw ( char * text, Context * context );
    void builtin_print ( char * text, Context * context );
    vec4f builtin_breakpoint ( Context & context, SimNode_CallBase * call, vec4f * );
    void builtin_stackwalk ( Context * context);
    void builtin_terminate ( Context * context );
    int builtin_table_size ( const Table & arr );
    int builtin_table_capacity ( const Table & arr );
    void builtin_table_clear ( Table & arr, Context * context );
    vec4f _builtin_hash ( Context & context, SimNode_CallBase * call, vec4f * args );
    uint32_t heap_bytes_allocated ( Context * context );
    uint32_t heap_high_watermark ( Context * context );
    int32_t heap_depth ( Context * context );
    uint32_t string_heap_bytes_allocated ( Context * context );
    uint32_t string_heap_high_watermark ( Context * context );
    int32_t string_heap_depth ( Context * context );
    void builtin_table_lock ( const Table & arr, Context * context );
    void builtin_table_unlock ( const Table & arr, Context * context );
    int builtin_array_size ( const Array & arr );
    int builtin_array_capacity ( const Array & arr );
    void builtin_array_resize ( Array & pArray, int newSize, int stride, Context * context );
    void builtin_array_reserve ( Array & pArray, int newSize, int stride, Context * context );
    int builtin_array_push ( Array & pArray, int index, int stride, Context * context );
    int builtin_array_push_zero ( Array & pArray, int index, int stride, Context * context );
    void builtin_array_erase ( Array & pArray, int index, int stride, Context * context ) ;
    void builtin_array_clear ( Array & pArray, Context * context );
    void builtin_array_lock ( const Array & arr, Context * context );
    void builtin_array_unlock ( const Array & arr, Context * context );
    void builtin_array_free ( Array & dim, int szt, Context * __context__ );
    void builtin_table_free ( Table & tab, int szk, int szv, Context * __context__ );

    bool builtin_iterator_first ( const Sequence & it, void * data, Context * context );
    bool builtin_iterator_next  ( const Sequence & it, void * data, Context * context );
    void builtin_iterator_close ( const Sequence & it, void * data, Context * context );
    void builtin_iterator_delete ( const Sequence & it, Context * context );

    void builtin_make_good_array_iterator ( Sequence & result, const Array & arr, int stride, Context * context );
    void builtin_make_fixed_array_iterator ( Sequence & result, void * data, int size, int stride, Context * context );
    void builtin_make_range_iterator ( Sequence & result, range rng, Context * context );
    void builtin_make_lambda_iterator ( Sequence & result, const Lambda lambda, Context * context );
    void builtin_make_nil_iterator ( Sequence & result, Context * context );
    vec4f builtin_make_enum_iterator ( Context & context, SimNode_CallBase * call, vec4f * );

    void resetProfiler( Context * context );
    void dumpProfileInfo( Context * context );

    template <typename TT>
    __forceinline void builtin_sort ( TT * data, int32_t length ) {
        sort ( data, data + length );
    }

    void builtin_sort_string ( void * data, int32_t length );
    void builtin_sort_any_cblock ( void * anyData, int32_t elementSize, int32_t length, const Block & cmp, Context * context );

    template <typename TT>
    void builtin_sort_cblock ( TT * data, int32_t length, const TBlock<bool,TT,TT> & cmp, Context * context ) {
        vec4f bargs[2];
        context->invokeEx(cmp, bargs, nullptr, [&](SimNode * code) {
            sort ( data, data+length, [&](TT x, TT y) -> bool {
                bargs[0] = cast<TT>::from(x);
                bargs[1] = cast<TT>::from(y);
                return code->evalBool(*context);
            });
        });
    }
}
