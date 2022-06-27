/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         DAS_YYSTYPE
#define YYLTYPE         DAS_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         das_yyparse
#define yylex           das_yylex
#define yyerror         das_yyerror
#define yydebug         das_yydebug
#define yynerrs         das_yynerrs

/* First part of user prologue.  */

    #include "daScript/misc/platform.h"
    #include "daScript/simulate/debug_info.h"
    #include "daScript/ast/compilation_errors.h"

    #ifdef _MSC_VER
    #pragma warning(disable:4262)
    #pragma warning(disable:4127)
    #pragma warning(disable:4702)
    #endif

    using namespace das;

    union DAS_YYSTYPE;
    struct DAS_YYLTYPE;

    #define YY_NO_UNISTD_H
    #include "lex.yy.h"

    void das_yyerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error );
    void das_yyfatalerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error, CompilationError cerr );
    int yylex ( DAS_YYSTYPE *lvalp, DAS_YYLTYPE *llocp, yyscan_t scanner );
    void yybegin ( const char * str );

    void das_yybegin_reader ( yyscan_t yyscanner );
    void das_yyend_reader ( yyscan_t yyscanner );

    #undef yyextra
    #define yyextra (*((das::DasParserState **)(scanner)))


# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "ds_parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LEXER_ERROR = 3,                /* "lexer error"  */
  YYSYMBOL_DAS_STRUCT = 4,                 /* "struct"  */
  YYSYMBOL_DAS_CLASS = 5,                  /* "class"  */
  YYSYMBOL_DAS_LET = 6,                    /* "let"  */
  YYSYMBOL_DAS_DEF = 7,                    /* "def"  */
  YYSYMBOL_DAS_WHILE = 8,                  /* "while"  */
  YYSYMBOL_DAS_IF = 9,                     /* "if"  */
  YYSYMBOL_DAS_STATIC_IF = 10,             /* "static_if"  */
  YYSYMBOL_DAS_ELSE = 11,                  /* "else"  */
  YYSYMBOL_DAS_FOR = 12,                   /* "for"  */
  YYSYMBOL_DAS_CATCH = 13,                 /* "recover"  */
  YYSYMBOL_DAS_TRUE = 14,                  /* "true"  */
  YYSYMBOL_DAS_FALSE = 15,                 /* "false"  */
  YYSYMBOL_DAS_NEWT = 16,                  /* "new"  */
  YYSYMBOL_DAS_TYPEINFO = 17,              /* "typeinfo"  */
  YYSYMBOL_DAS_TYPE = 18,                  /* "type"  */
  YYSYMBOL_DAS_IN = 19,                    /* "in"  */
  YYSYMBOL_DAS_IS = 20,                    /* "is"  */
  YYSYMBOL_DAS_AS = 21,                    /* "as"  */
  YYSYMBOL_DAS_ELIF = 22,                  /* "elif"  */
  YYSYMBOL_DAS_STATIC_ELIF = 23,           /* "static_elif"  */
  YYSYMBOL_DAS_ARRAY = 24,                 /* "array"  */
  YYSYMBOL_DAS_RETURN = 25,                /* "return"  */
  YYSYMBOL_DAS_NULL = 26,                  /* "null"  */
  YYSYMBOL_DAS_BREAK = 27,                 /* "break"  */
  YYSYMBOL_DAS_TRY = 28,                   /* "try"  */
  YYSYMBOL_DAS_OPTIONS = 29,               /* "options"  */
  YYSYMBOL_DAS_TABLE = 30,                 /* "table"  */
  YYSYMBOL_DAS_EXPECT = 31,                /* "expect"  */
  YYSYMBOL_DAS_CONST = 32,                 /* "const"  */
  YYSYMBOL_DAS_REQUIRE = 33,               /* "require"  */
  YYSYMBOL_DAS_OPERATOR = 34,              /* "operator"  */
  YYSYMBOL_DAS_ENUM = 35,                  /* "enum"  */
  YYSYMBOL_DAS_FINALLY = 36,               /* "finally"  */
  YYSYMBOL_DAS_DELETE = 37,                /* "delete"  */
  YYSYMBOL_DAS_DEREF = 38,                 /* "deref"  */
  YYSYMBOL_DAS_TYPEDEF = 39,               /* "typedef"  */
  YYSYMBOL_DAS_WITH = 40,                  /* "with"  */
  YYSYMBOL_DAS_AKA = 41,                   /* "aka"  */
  YYSYMBOL_DAS_ASSUME = 42,                /* "assume"  */
  YYSYMBOL_DAS_CAST = 43,                  /* "cast"  */
  YYSYMBOL_DAS_OVERRIDE = 44,              /* "override"  */
  YYSYMBOL_DAS_ABSTRACT = 45,              /* "abstract"  */
  YYSYMBOL_DAS_UPCAST = 46,                /* "upcast"  */
  YYSYMBOL_DAS_ITERATOR = 47,              /* "iterator"  */
  YYSYMBOL_DAS_VAR = 48,                   /* "var"  */
  YYSYMBOL_DAS_ADDR = 49,                  /* "addr"  */
  YYSYMBOL_DAS_CONTINUE = 50,              /* "continue"  */
  YYSYMBOL_DAS_WHERE = 51,                 /* "where"  */
  YYSYMBOL_DAS_PASS = 52,                  /* "pass"  */
  YYSYMBOL_DAS_REINTERPRET = 53,           /* "reinterpret"  */
  YYSYMBOL_DAS_MODULE = 54,                /* "module"  */
  YYSYMBOL_DAS_PUBLIC = 55,                /* "public"  */
  YYSYMBOL_DAS_LABEL = 56,                 /* "label"  */
  YYSYMBOL_DAS_GOTO = 57,                  /* "goto"  */
  YYSYMBOL_DAS_IMPLICIT = 58,              /* "implicit"  */
  YYSYMBOL_DAS_EXPLICIT = 59,              /* "explicit"  */
  YYSYMBOL_DAS_SHARED = 60,                /* "shared"  */
  YYSYMBOL_DAS_PRIVATE = 61,               /* "private"  */
  YYSYMBOL_DAS_SMART_PTR = 62,             /* "smart_ptr"  */
  YYSYMBOL_DAS_UNSAFE = 63,                /* "unsafe"  */
  YYSYMBOL_DAS_TBOOL = 64,                 /* "bool"  */
  YYSYMBOL_DAS_TVOID = 65,                 /* "void"  */
  YYSYMBOL_DAS_TSTRING = 66,               /* "string"  */
  YYSYMBOL_DAS_TAUTO = 67,                 /* "auto"  */
  YYSYMBOL_DAS_TINT = 68,                  /* "int"  */
  YYSYMBOL_DAS_TINT2 = 69,                 /* "int2"  */
  YYSYMBOL_DAS_TINT3 = 70,                 /* "int3"  */
  YYSYMBOL_DAS_TINT4 = 71,                 /* "int4"  */
  YYSYMBOL_DAS_TUINT = 72,                 /* "uint"  */
  YYSYMBOL_DAS_TBITFIELD = 73,             /* "bitfield"  */
  YYSYMBOL_DAS_TUINT2 = 74,                /* "uint2"  */
  YYSYMBOL_DAS_TUINT3 = 75,                /* "uint3"  */
  YYSYMBOL_DAS_TUINT4 = 76,                /* "uint4"  */
  YYSYMBOL_DAS_TFLOAT = 77,                /* "float"  */
  YYSYMBOL_DAS_TFLOAT2 = 78,               /* "float2"  */
  YYSYMBOL_DAS_TFLOAT3 = 79,               /* "float3"  */
  YYSYMBOL_DAS_TFLOAT4 = 80,               /* "float4"  */
  YYSYMBOL_DAS_TRANGE = 81,                /* "range"  */
  YYSYMBOL_DAS_TURANGE = 82,               /* "urange"  */
  YYSYMBOL_DAS_TBLOCK = 83,                /* "block"  */
  YYSYMBOL_DAS_TINT64 = 84,                /* "int64"  */
  YYSYMBOL_DAS_TUINT64 = 85,               /* "uint64"  */
  YYSYMBOL_DAS_TDOUBLE = 86,               /* "double"  */
  YYSYMBOL_DAS_TFUNCTION = 87,             /* "function"  */
  YYSYMBOL_DAS_TLAMBDA = 88,               /* "lambda"  */
  YYSYMBOL_DAS_TINT8 = 89,                 /* "int8"  */
  YYSYMBOL_DAS_TUINT8 = 90,                /* "uint8"  */
  YYSYMBOL_DAS_TINT16 = 91,                /* "int16"  */
  YYSYMBOL_DAS_TUINT16 = 92,               /* "uint16"  */
  YYSYMBOL_DAS_TTUPLE = 93,                /* "tuple"  */
  YYSYMBOL_DAS_TVARIANT = 94,              /* "variant"  */
  YYSYMBOL_DAS_GENERATOR = 95,             /* "generator"  */
  YYSYMBOL_DAS_YIELD = 96,                 /* "yield"  */
  YYSYMBOL_DAS_SEALED = 97,                /* "sealed"  */
  YYSYMBOL_ADDEQU = 98,                    /* "+="  */
  YYSYMBOL_SUBEQU = 99,                    /* "-="  */
  YYSYMBOL_DIVEQU = 100,                   /* "/="  */
  YYSYMBOL_MULEQU = 101,                   /* "*="  */
  YYSYMBOL_MODEQU = 102,                   /* "%="  */
  YYSYMBOL_ANDEQU = 103,                   /* "&="  */
  YYSYMBOL_OREQU = 104,                    /* "|="  */
  YYSYMBOL_XOREQU = 105,                   /* "^="  */
  YYSYMBOL_SHL = 106,                      /* "<<"  */
  YYSYMBOL_SHR = 107,                      /* ">>"  */
  YYSYMBOL_ADDADD = 108,                   /* "++"  */
  YYSYMBOL_SUBSUB = 109,                   /* "--"  */
  YYSYMBOL_LEEQU = 110,                    /* "<="  */
  YYSYMBOL_SHLEQU = 111,                   /* "<<="  */
  YYSYMBOL_SHREQU = 112,                   /* ">>="  */
  YYSYMBOL_GREQU = 113,                    /* ">="  */
  YYSYMBOL_EQUEQU = 114,                   /* "=="  */
  YYSYMBOL_NOTEQU = 115,                   /* "!="  */
  YYSYMBOL_RARROW = 116,                   /* "->"  */
  YYSYMBOL_LARROW = 117,                   /* "<-"  */
  YYSYMBOL_QQ = 118,                       /* "??"  */
  YYSYMBOL_QDOT = 119,                     /* "?."  */
  YYSYMBOL_QBRA = 120,                     /* "?["  */
  YYSYMBOL_LPIPE = 121,                    /* "<|"  */
  YYSYMBOL_LBPIPE = 122,                   /* " <|"  */
  YYSYMBOL_LAPIPE = 123,                   /* "@ <|"  */
  YYSYMBOL_LFPIPE = 124,                   /* "@@ <|"  */
  YYSYMBOL_RPIPE = 125,                    /* "|>"  */
  YYSYMBOL_CLONEEQU = 126,                 /* ":="  */
  YYSYMBOL_ROTL = 127,                     /* "<<<"  */
  YYSYMBOL_ROTR = 128,                     /* ">>>"  */
  YYSYMBOL_ROTLEQU = 129,                  /* "<<<="  */
  YYSYMBOL_ROTREQU = 130,                  /* ">>>="  */
  YYSYMBOL_MAPTO = 131,                    /* "=>"  */
  YYSYMBOL_COLCOL = 132,                   /* "::"  */
  YYSYMBOL_ANDAND = 133,                   /* "&&"  */
  YYSYMBOL_OROR = 134,                     /* "||"  */
  YYSYMBOL_XORXOR = 135,                   /* "^^"  */
  YYSYMBOL_ANDANDEQU = 136,                /* "&&="  */
  YYSYMBOL_OROREQU = 137,                  /* "||="  */
  YYSYMBOL_XORXOREQU = 138,                /* "^^="  */
  YYSYMBOL_DOTDOT = 139,                   /* ".."  */
  YYSYMBOL_MTAG_E = 140,                   /* "$$"  */
  YYSYMBOL_MTAG_I = 141,                   /* "$i"  */
  YYSYMBOL_MTAG_V = 142,                   /* "$v"  */
  YYSYMBOL_MTAG_B = 143,                   /* "$b"  */
  YYSYMBOL_MTAG_A = 144,                   /* "$a"  */
  YYSYMBOL_MTAG_T = 145,                   /* "$t"  */
  YYSYMBOL_BRABRAB = 146,                  /* "[["  */
  YYSYMBOL_BRACBRB = 147,                  /* "[{"  */
  YYSYMBOL_CBRCBRB = 148,                  /* "{{"  */
  YYSYMBOL_INTEGER = 149,                  /* "integer constant"  */
  YYSYMBOL_LONG_INTEGER = 150,             /* "long integer constant"  */
  YYSYMBOL_UNSIGNED_INTEGER = 151,         /* "unsigned integer constant"  */
  YYSYMBOL_UNSIGNED_LONG_INTEGER = 152,    /* "unsigned long integer constant"  */
  YYSYMBOL_FLOAT = 153,                    /* "floating point constant"  */
  YYSYMBOL_DOUBLE = 154,                   /* "double constant"  */
  YYSYMBOL_NAME = 155,                     /* "name"  */
  YYSYMBOL_BEGIN_STRING = 156,             /* "start of the string"  */
  YYSYMBOL_STRING_CHARACTER = 157,         /* STRING_CHARACTER  */
  YYSYMBOL_STRING_CHARACTER_ESC = 158,     /* STRING_CHARACTER_ESC  */
  YYSYMBOL_END_STRING = 159,               /* "end of the string"  */
  YYSYMBOL_BEGIN_STRING_EXPR = 160,        /* "{"  */
  YYSYMBOL_END_STRING_EXPR = 161,          /* "}"  */
  YYSYMBOL_END_OF_READ = 162,              /* "end of failed eader macro"  */
  YYSYMBOL_163_ = 163,                     /* ','  */
  YYSYMBOL_164_ = 164,                     /* '='  */
  YYSYMBOL_165_ = 165,                     /* '?'  */
  YYSYMBOL_166_ = 166,                     /* ':'  */
  YYSYMBOL_167_ = 167,                     /* '|'  */
  YYSYMBOL_168_ = 168,                     /* '^'  */
  YYSYMBOL_169_ = 169,                     /* '&'  */
  YYSYMBOL_170_ = 170,                     /* '<'  */
  YYSYMBOL_171_ = 171,                     /* '>'  */
  YYSYMBOL_172_ = 172,                     /* '-'  */
  YYSYMBOL_173_ = 173,                     /* '+'  */
  YYSYMBOL_174_ = 174,                     /* '*'  */
  YYSYMBOL_175_ = 175,                     /* '/'  */
  YYSYMBOL_176_ = 176,                     /* '%'  */
  YYSYMBOL_UNARY_MINUS = 177,              /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 178,               /* UNARY_PLUS  */
  YYSYMBOL_179_ = 179,                     /* '~'  */
  YYSYMBOL_180_ = 180,                     /* '!'  */
  YYSYMBOL_PRE_INC = 181,                  /* PRE_INC  */
  YYSYMBOL_PRE_DEC = 182,                  /* PRE_DEC  */
  YYSYMBOL_POST_INC = 183,                 /* POST_INC  */
  YYSYMBOL_POST_DEC = 184,                 /* POST_DEC  */
  YYSYMBOL_DEREF = 185,                    /* DEREF  */
  YYSYMBOL_186_ = 186,                     /* '.'  */
  YYSYMBOL_187_ = 187,                     /* '['  */
  YYSYMBOL_188_ = 188,                     /* ']'  */
  YYSYMBOL_189_ = 189,                     /* '('  */
  YYSYMBOL_190_ = 190,                     /* ')'  */
  YYSYMBOL_191_ = 191,                     /* '$'  */
  YYSYMBOL_192_ = 192,                     /* '@'  */
  YYSYMBOL_193_ = 193,                     /* ';'  */
  YYSYMBOL_194_ = 194,                     /* '{'  */
  YYSYMBOL_195_ = 195,                     /* '}'  */
  YYSYMBOL_196_ = 196,                     /* '#'  */
  YYSYMBOL_YYACCEPT = 197,                 /* $accept  */
  YYSYMBOL_program = 198,                  /* program  */
  YYSYMBOL_optional_public_or_private_module = 199, /* optional_public_or_private_module  */
  YYSYMBOL_module_name = 200,              /* module_name  */
  YYSYMBOL_module_declaration = 201,       /* module_declaration  */
  YYSYMBOL_character_sequence = 202,       /* character_sequence  */
  YYSYMBOL_string_constant = 203,          /* string_constant  */
  YYSYMBOL_string_builder_body = 204,      /* string_builder_body  */
  YYSYMBOL_string_builder = 205,           /* string_builder  */
  YYSYMBOL_reader_character_sequence = 206, /* reader_character_sequence  */
  YYSYMBOL_expr_reader = 207,              /* expr_reader  */
  YYSYMBOL_208_1 = 208,                    /* $@1  */
  YYSYMBOL_options_declaration = 209,      /* options_declaration  */
  YYSYMBOL_require_declaration = 210,      /* require_declaration  */
  YYSYMBOL_require_module_name = 211,      /* require_module_name  */
  YYSYMBOL_require_module = 212,           /* require_module  */
  YYSYMBOL_is_public_module = 213,         /* is_public_module  */
  YYSYMBOL_expect_declaration = 214,       /* expect_declaration  */
  YYSYMBOL_expect_list = 215,              /* expect_list  */
  YYSYMBOL_expect_error = 216,             /* expect_error  */
  YYSYMBOL_expression_label = 217,         /* expression_label  */
  YYSYMBOL_expression_goto = 218,          /* expression_goto  */
  YYSYMBOL_elif_or_static_elif = 219,      /* elif_or_static_elif  */
  YYSYMBOL_expression_else = 220,          /* expression_else  */
  YYSYMBOL_if_or_static_if = 221,          /* if_or_static_if  */
  YYSYMBOL_expression_if_then_else = 222,  /* expression_if_then_else  */
  YYSYMBOL_expression_for_loop = 223,      /* expression_for_loop  */
  YYSYMBOL_expression_unsafe = 224,        /* expression_unsafe  */
  YYSYMBOL_expression_while_loop = 225,    /* expression_while_loop  */
  YYSYMBOL_expression_with = 226,          /* expression_with  */
  YYSYMBOL_expression_with_alias = 227,    /* expression_with_alias  */
  YYSYMBOL_228_2 = 228,                    /* $@2  */
  YYSYMBOL_annotation_argument_value = 229, /* annotation_argument_value  */
  YYSYMBOL_annotation_argument_value_list = 230, /* annotation_argument_value_list  */
  YYSYMBOL_annotation_argument_name = 231, /* annotation_argument_name  */
  YYSYMBOL_annotation_argument = 232,      /* annotation_argument  */
  YYSYMBOL_annotation_argument_list = 233, /* annotation_argument_list  */
  YYSYMBOL_annotation_declaration_name = 234, /* annotation_declaration_name  */
  YYSYMBOL_annotation_declaration = 235,   /* annotation_declaration  */
  YYSYMBOL_annotation_list = 236,          /* annotation_list  */
  YYSYMBOL_optional_annotation_list = 237, /* optional_annotation_list  */
  YYSYMBOL_optional_function_argument_list = 238, /* optional_function_argument_list  */
  YYSYMBOL_optional_function_type = 239,   /* optional_function_type  */
  YYSYMBOL_function_name = 240,            /* function_name  */
  YYSYMBOL_global_function_declaration = 241, /* global_function_declaration  */
  YYSYMBOL_optional_public_or_private_function = 242, /* optional_public_or_private_function  */
  YYSYMBOL_function_declaration_header = 243, /* function_declaration_header  */
  YYSYMBOL_function_declaration = 244,     /* function_declaration  */
  YYSYMBOL_245_3 = 245,                    /* $@3  */
  YYSYMBOL_expression_block = 246,         /* expression_block  */
  YYSYMBOL_expression_any = 247,           /* expression_any  */
  YYSYMBOL_expressions = 248,              /* expressions  */
  YYSYMBOL_expr_pipe = 249,                /* expr_pipe  */
  YYSYMBOL_name_in_namespace = 250,        /* name_in_namespace  */
  YYSYMBOL_expression_delete = 251,        /* expression_delete  */
  YYSYMBOL_expr_new = 252,                 /* expr_new  */
  YYSYMBOL_expression_break = 253,         /* expression_break  */
  YYSYMBOL_expression_continue = 254,      /* expression_continue  */
  YYSYMBOL_expression_return = 255,        /* expression_return  */
  YYSYMBOL_expression_yield = 256,         /* expression_yield  */
  YYSYMBOL_expression_try_catch = 257,     /* expression_try_catch  */
  YYSYMBOL_kwd_let = 258,                  /* kwd_let  */
  YYSYMBOL_expression_let = 259,           /* expression_let  */
  YYSYMBOL_expr_cast = 260,                /* expr_cast  */
  YYSYMBOL_261_4 = 261,                    /* $@4  */
  YYSYMBOL_262_5 = 262,                    /* $@5  */
  YYSYMBOL_263_6 = 263,                    /* $@6  */
  YYSYMBOL_264_7 = 264,                    /* $@7  */
  YYSYMBOL_265_8 = 265,                    /* $@8  */
  YYSYMBOL_266_9 = 266,                    /* $@9  */
  YYSYMBOL_expr_type_decl = 267,           /* expr_type_decl  */
  YYSYMBOL_268_10 = 268,                   /* $@10  */
  YYSYMBOL_269_11 = 269,                   /* $@11  */
  YYSYMBOL_expr_type_info = 270,           /* expr_type_info  */
  YYSYMBOL_expr_list = 271,                /* expr_list  */
  YYSYMBOL_block_or_simple_block = 272,    /* block_or_simple_block  */
  YYSYMBOL_block_or_lambda = 273,          /* block_or_lambda  */
  YYSYMBOL_capture_entry = 274,            /* capture_entry  */
  YYSYMBOL_capture_list = 275,             /* capture_list  */
  YYSYMBOL_optional_capture_list = 276,    /* optional_capture_list  */
  YYSYMBOL_expr_block = 277,               /* expr_block  */
  YYSYMBOL_expr_numeric_const = 278,       /* expr_numeric_const  */
  YYSYMBOL_expr_assign = 279,              /* expr_assign  */
  YYSYMBOL_expr_assign_pipe = 280,         /* expr_assign_pipe  */
  YYSYMBOL_expr_named_call = 281,          /* expr_named_call  */
  YYSYMBOL_expr_method_call = 282,         /* expr_method_call  */
  YYSYMBOL_func_addr_expr = 283,           /* func_addr_expr  */
  YYSYMBOL_284_12 = 284,                   /* $@12  */
  YYSYMBOL_285_13 = 285,                   /* $@13  */
  YYSYMBOL_286_14 = 286,                   /* $@14  */
  YYSYMBOL_287_15 = 287,                   /* $@15  */
  YYSYMBOL_expr_field = 288,               /* expr_field  */
  YYSYMBOL_289_16 = 289,                   /* $@16  */
  YYSYMBOL_290_17 = 290,                   /* $@17  */
  YYSYMBOL_expr = 291,                     /* expr  */
  YYSYMBOL_292_18 = 292,                   /* $@18  */
  YYSYMBOL_293_19 = 293,                   /* $@19  */
  YYSYMBOL_294_20 = 294,                   /* $@20  */
  YYSYMBOL_295_21 = 295,                   /* $@21  */
  YYSYMBOL_296_22 = 296,                   /* $@22  */
  YYSYMBOL_297_23 = 297,                   /* $@23  */
  YYSYMBOL_expr_mtag = 298,                /* expr_mtag  */
  YYSYMBOL_optional_field_annotation = 299, /* optional_field_annotation  */
  YYSYMBOL_optional_override = 300,        /* optional_override  */
  YYSYMBOL_optional_constant = 301,        /* optional_constant  */
  YYSYMBOL_optional_public_or_private_member_variable = 302, /* optional_public_or_private_member_variable  */
  YYSYMBOL_structure_variable_declaration = 303, /* structure_variable_declaration  */
  YYSYMBOL_struct_variable_declaration_list = 304, /* struct_variable_declaration_list  */
  YYSYMBOL_305_24 = 305,                   /* $@24  */
  YYSYMBOL_306_25 = 306,                   /* $@25  */
  YYSYMBOL_307_26 = 307,                   /* $@26  */
  YYSYMBOL_function_argument_declaration = 308, /* function_argument_declaration  */
  YYSYMBOL_function_argument_list = 309,   /* function_argument_list  */
  YYSYMBOL_tuple_type = 310,               /* tuple_type  */
  YYSYMBOL_tuple_type_list = 311,          /* tuple_type_list  */
  YYSYMBOL_variant_type = 312,             /* variant_type  */
  YYSYMBOL_variant_type_list = 313,        /* variant_type_list  */
  YYSYMBOL_copy_or_move = 314,             /* copy_or_move  */
  YYSYMBOL_variable_declaration = 315,     /* variable_declaration  */
  YYSYMBOL_copy_or_move_or_clone = 316,    /* copy_or_move_or_clone  */
  YYSYMBOL_optional_ref = 317,             /* optional_ref  */
  YYSYMBOL_let_variable_declaration = 318, /* let_variable_declaration  */
  YYSYMBOL_global_variable_declaration_list = 319, /* global_variable_declaration_list  */
  YYSYMBOL_320_27 = 320,                   /* $@27  */
  YYSYMBOL_optional_shared = 321,          /* optional_shared  */
  YYSYMBOL_optional_public_or_private_variable = 322, /* optional_public_or_private_variable  */
  YYSYMBOL_global_let = 323,               /* global_let  */
  YYSYMBOL_324_28 = 324,                   /* $@28  */
  YYSYMBOL_enum_list = 325,                /* enum_list  */
  YYSYMBOL_single_alias = 326,             /* single_alias  */
  YYSYMBOL_327_29 = 327,                   /* $@29  */
  YYSYMBOL_alias_list = 328,               /* alias_list  */
  YYSYMBOL_alias_declaration = 329,        /* alias_declaration  */
  YYSYMBOL_optional_public_or_private_enum = 330, /* optional_public_or_private_enum  */
  YYSYMBOL_enum_name = 331,                /* enum_name  */
  YYSYMBOL_enum_declaration = 332,         /* enum_declaration  */
  YYSYMBOL_optional_structure_parent = 333, /* optional_structure_parent  */
  YYSYMBOL_optional_sealed = 334,          /* optional_sealed  */
  YYSYMBOL_structure_name = 335,           /* structure_name  */
  YYSYMBOL_class_or_struct = 336,          /* class_or_struct  */
  YYSYMBOL_optional_public_or_private_structure = 337, /* optional_public_or_private_structure  */
  YYSYMBOL_structure_declaration = 338,    /* structure_declaration  */
  YYSYMBOL_339_30 = 339,                   /* $@30  */
  YYSYMBOL_340_31 = 340,                   /* $@31  */
  YYSYMBOL_variable_name_with_pos_list = 341, /* variable_name_with_pos_list  */
  YYSYMBOL_basic_type_declaration = 342,   /* basic_type_declaration  */
  YYSYMBOL_enum_basic_type_declaration = 343, /* enum_basic_type_declaration  */
  YYSYMBOL_structure_type_declaration = 344, /* structure_type_declaration  */
  YYSYMBOL_auto_type_declaration = 345,    /* auto_type_declaration  */
  YYSYMBOL_bitfield_bits = 346,            /* bitfield_bits  */
  YYSYMBOL_bitfield_type_declaration = 347, /* bitfield_type_declaration  */
  YYSYMBOL_348_32 = 348,                   /* $@32  */
  YYSYMBOL_349_33 = 349,                   /* $@33  */
  YYSYMBOL_table_type_pair = 350,          /* table_type_pair  */
  YYSYMBOL_type_declaration = 351,         /* type_declaration  */
  YYSYMBOL_352_34 = 352,                   /* $@34  */
  YYSYMBOL_353_35 = 353,                   /* $@35  */
  YYSYMBOL_354_36 = 354,                   /* $@36  */
  YYSYMBOL_355_37 = 355,                   /* $@37  */
  YYSYMBOL_356_38 = 356,                   /* $@38  */
  YYSYMBOL_357_39 = 357,                   /* $@39  */
  YYSYMBOL_358_40 = 358,                   /* $@40  */
  YYSYMBOL_359_41 = 359,                   /* $@41  */
  YYSYMBOL_360_42 = 360,                   /* $@42  */
  YYSYMBOL_361_43 = 361,                   /* $@43  */
  YYSYMBOL_362_44 = 362,                   /* $@44  */
  YYSYMBOL_363_45 = 363,                   /* $@45  */
  YYSYMBOL_364_46 = 364,                   /* $@46  */
  YYSYMBOL_365_47 = 365,                   /* $@47  */
  YYSYMBOL_366_48 = 366,                   /* $@48  */
  YYSYMBOL_367_49 = 367,                   /* $@49  */
  YYSYMBOL_368_50 = 368,                   /* $@50  */
  YYSYMBOL_369_51 = 369,                   /* $@51  */
  YYSYMBOL_370_52 = 370,                   /* $@52  */
  YYSYMBOL_371_53 = 371,                   /* $@53  */
  YYSYMBOL_372_54 = 372,                   /* $@54  */
  YYSYMBOL_373_55 = 373,                   /* $@55  */
  YYSYMBOL_374_56 = 374,                   /* $@56  */
  YYSYMBOL_375_57 = 375,                   /* $@57  */
  YYSYMBOL_variant_alias_declaration = 376, /* variant_alias_declaration  */
  YYSYMBOL_377_58 = 377,                   /* $@58  */
  YYSYMBOL_378_59 = 378,                   /* $@59  */
  YYSYMBOL_bitfield_alias_declaration = 379, /* bitfield_alias_declaration  */
  YYSYMBOL_380_60 = 380,                   /* $@60  */
  YYSYMBOL_make_decl = 381,                /* make_decl  */
  YYSYMBOL_make_struct_fields = 382,       /* make_struct_fields  */
  YYSYMBOL_make_struct_dim = 383,          /* make_struct_dim  */
  YYSYMBOL_optional_block = 384,           /* optional_block  */
  YYSYMBOL_make_struct_decl = 385,         /* make_struct_decl  */
  YYSYMBOL_make_tuple = 386,               /* make_tuple  */
  YYSYMBOL_make_map_tuple = 387,           /* make_map_tuple  */
  YYSYMBOL_make_any_tuple = 388,           /* make_any_tuple  */
  YYSYMBOL_make_dim = 389,                 /* make_dim  */
  YYSYMBOL_make_dim_decl = 390,            /* make_dim_decl  */
  YYSYMBOL_make_table = 391,               /* make_table  */
  YYSYMBOL_make_table_decl = 392,          /* make_table_decl  */
  YYSYMBOL_array_comprehension_where = 393, /* array_comprehension_where  */
  YYSYMBOL_array_comprehension = 394       /* array_comprehension  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL \
             && defined DAS_YYSTYPE_IS_TRIVIAL && DAS_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8883

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  197
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  198
/* YYNRULES -- Number of rules.  */
#define YYNRULES  609
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1064

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   424


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   180,     2,   196,   191,   176,   169,     2,
     189,   190,   174,   173,   163,   172,   186,   175,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   166,   193,
     170,   164,   171,   165,   192,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   187,     2,   188,   168,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   194,   167,   195,   179,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   177,   178,
     181,   182,   183,   184,   185
};

#if DAS_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   467,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   483,   484,   485,   489,   490,
     494,   512,   513,   514,   515,   519,   523,   528,   537,   545,
     561,   566,   574,   574,   604,   625,   629,   632,   636,   642,
     651,   654,   660,   661,   665,   669,   670,   674,   677,   683,
     689,   692,   698,   699,   703,   704,   705,   714,   715,   719,
     728,   734,   742,   752,   761,   761,   768,   769,   770,   771,
     772,   773,   777,   782,   790,   791,   792,   796,   797,   798,
     799,   800,   801,   802,   803,   809,   812,   818,   819,   820,
     824,   832,   845,   849,   856,   857,   861,   862,   863,   867,
     870,   877,   881,   882,   883,   884,   885,   886,   887,   888,
     889,   890,   891,   892,   893,   894,   895,   896,   897,   898,
     899,   900,   901,   902,   903,   904,   905,   906,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   932,   933,   937,   959,   960,   961,   965,
     971,   971,   988,   992,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1026,  1031,  1037,  1043,  1077,  1080,
    1086,  1087,  1098,  1102,  1108,  1111,  1114,  1118,  1124,  1128,
    1132,  1135,  1138,  1143,  1146,  1154,  1157,  1162,  1165,  1173,
    1179,  1180,  1184,  1190,  1190,  1190,  1193,  1193,  1193,  1198,
    1198,  1198,  1206,  1206,  1206,  1212,  1222,  1233,  1248,  1251,
    1257,  1258,  1265,  1276,  1277,  1278,  1282,  1283,  1284,  1285,
    1289,  1294,  1302,  1303,  1307,  1312,  1319,  1320,  1321,  1322,
    1323,  1324,  1328,  1329,  1330,  1331,  1332,  1333,  1334,  1335,
    1336,  1337,  1338,  1339,  1340,  1341,  1342,  1343,  1344,  1345,
    1346,  1350,  1351,  1352,  1353,  1357,  1368,  1373,  1383,  1387,
    1387,  1387,  1394,  1394,  1394,  1408,  1412,  1416,  1416,  1416,
    1423,  1424,  1425,  1426,  1427,  1428,  1429,  1430,  1431,  1432,
    1433,  1434,  1435,  1436,  1437,  1438,  1439,  1440,  1441,  1442,
    1443,  1444,  1445,  1446,  1447,  1448,  1449,  1450,  1451,  1452,
    1453,  1454,  1455,  1456,  1457,  1458,  1464,  1465,  1466,  1467,
    1468,  1469,  1470,  1471,  1472,  1473,  1474,  1475,  1476,  1480,
    1484,  1487,  1490,  1491,  1492,  1493,  1496,  1499,  1500,  1503,
    1503,  1503,  1506,  1511,  1515,  1519,  1519,  1519,  1524,  1527,
    1531,  1531,  1531,  1536,  1539,  1540,  1541,  1542,  1543,  1544,
    1545,  1546,  1547,  1548,  1549,  1557,  1558,  1559,  1560,  1561,
    1565,  1566,  1570,  1571,  1572,  1576,  1577,  1581,  1582,  1583,
    1587,  1597,  1600,  1600,  1619,  1618,  1633,  1632,  1645,  1654,
    1659,  1667,  1668,  1672,  1675,  1684,  1685,  1689,  1698,  1699,
    1704,  1705,  1709,  1715,  1721,  1724,  1728,  1734,  1743,  1744,
    1745,  1749,  1750,  1754,  1757,  1762,  1767,  1775,  1786,  1789,
    1789,  1809,  1810,  1814,  1815,  1816,  1820,  1823,  1823,  1842,
    1845,  1854,  1867,  1867,  1888,  1889,  1893,  1894,  1898,  1899,
    1900,  1904,  1914,  1921,  1931,  1932,  1936,  1937,  1941,  1947,
    1948,  1952,  1953,  1954,  1958,  1963,  1958,  1973,  1980,  1989,
    1995,  2006,  2007,  2008,  2009,  2010,  2011,  2012,  2013,  2014,
    2015,  2016,  2017,  2018,  2019,  2020,  2021,  2022,  2023,  2024,
    2025,  2026,  2027,  2028,  2029,  2030,  2034,  2035,  2036,  2037,
    2038,  2039,  2043,  2054,  2058,  2065,  2077,  2084,  2093,  2093,
    2093,  2106,  2110,  2117,  2118,  2119,  2120,  2121,  2135,  2141,
    2145,  2149,  2154,  2159,  2164,  2169,  2173,  2177,  2182,  2186,
    2191,  2191,  2191,  2197,  2204,  2204,  2204,  2209,  2209,  2209,
    2215,  2215,  2215,  2220,  2224,  2224,  2224,  2229,  2229,  2229,
    2238,  2242,  2242,  2242,  2247,  2247,  2247,  2256,  2260,  2260,
    2260,  2265,  2265,  2265,  2274,  2274,  2274,  2280,  2280,  2280,
    2289,  2289,  2289,  2313,  2313,  2333,  2334,  2335,  2336,  2340,
    2347,  2354,  2360,  2369,  2374,  2381,  2382,  2386,  2392,  2399,
    2407,  2414,  2422,  2434,  2437,  2451,  2457,  2463,  2464,  2468,
    2473,  2480,  2485,  2495,  2500,  2507,  2519,  2520,  2524,  2527
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"lexer error\"",
  "\"struct\"", "\"class\"", "\"let\"", "\"def\"", "\"while\"", "\"if\"",
  "\"static_if\"", "\"else\"", "\"for\"", "\"recover\"", "\"true\"",
  "\"false\"", "\"new\"", "\"typeinfo\"", "\"type\"", "\"in\"", "\"is\"",
  "\"as\"", "\"elif\"", "\"static_elif\"", "\"array\"", "\"return\"",
  "\"null\"", "\"break\"", "\"try\"", "\"options\"", "\"table\"",
  "\"expect\"", "\"const\"", "\"require\"", "\"operator\"", "\"enum\"",
  "\"finally\"", "\"delete\"", "\"deref\"", "\"typedef\"", "\"with\"",
  "\"aka\"", "\"assume\"", "\"cast\"", "\"override\"", "\"abstract\"",
  "\"upcast\"", "\"iterator\"", "\"var\"", "\"addr\"", "\"continue\"",
  "\"where\"", "\"pass\"", "\"reinterpret\"", "\"module\"", "\"public\"",
  "\"label\"", "\"goto\"", "\"implicit\"", "\"explicit\"", "\"shared\"",
  "\"private\"", "\"smart_ptr\"", "\"unsafe\"", "\"bool\"", "\"void\"",
  "\"string\"", "\"auto\"", "\"int\"", "\"int2\"", "\"int3\"", "\"int4\"",
  "\"uint\"", "\"bitfield\"", "\"uint2\"", "\"uint3\"", "\"uint4\"",
  "\"float\"", "\"float2\"", "\"float3\"", "\"float4\"", "\"range\"",
  "\"urange\"", "\"block\"", "\"int64\"", "\"uint64\"", "\"double\"",
  "\"function\"", "\"lambda\"", "\"int8\"", "\"uint8\"", "\"int16\"",
  "\"uint16\"", "\"tuple\"", "\"variant\"", "\"generator\"", "\"yield\"",
  "\"sealed\"", "\"+=\"", "\"-=\"", "\"/=\"", "\"*=\"", "\"%=\"", "\"&=\"",
  "\"|=\"", "\"^=\"", "\"<<\"", "\">>\"", "\"++\"", "\"--\"", "\"<=\"",
  "\"<<=\"", "\">>=\"", "\">=\"", "\"==\"", "\"!=\"", "\"->\"", "\"<-\"",
  "\"??\"", "\"?.\"", "\"?[\"", "\"<|\"", "\" <|\"", "\"@ <|\"",
  "\"@@ <|\"", "\"|>\"", "\":=\"", "\"<<<\"", "\">>>\"", "\"<<<=\"",
  "\">>>=\"", "\"=>\"", "\"::\"", "\"&&\"", "\"||\"", "\"^^\"", "\"&&=\"",
  "\"||=\"", "\"^^=\"", "\"..\"", "\"$$\"", "\"$i\"", "\"$v\"", "\"$b\"",
  "\"$a\"", "\"$t\"", "\"[[\"", "\"[{\"", "\"{{\"", "\"integer constant\"",
  "\"long integer constant\"", "\"unsigned integer constant\"",
  "\"unsigned long integer constant\"", "\"floating point constant\"",
  "\"double constant\"", "\"name\"", "\"start of the string\"",
  "STRING_CHARACTER", "STRING_CHARACTER_ESC", "\"end of the string\"",
  "\"{\"", "\"}\"", "\"end of failed eader macro\"", "','", "'='", "'?'",
  "':'", "'|'", "'^'", "'&'", "'<'", "'>'", "'-'", "'+'", "'*'", "'/'",
  "'%'", "UNARY_MINUS", "UNARY_PLUS", "'~'", "'!'", "PRE_INC", "PRE_DEC",
  "POST_INC", "POST_DEC", "DEREF", "'.'", "'['", "']'", "'('", "')'",
  "'$'", "'@'", "';'", "'{'", "'}'", "'#'", "$accept", "program",
  "optional_public_or_private_module", "module_name", "module_declaration",
  "character_sequence", "string_constant", "string_builder_body",
  "string_builder", "reader_character_sequence", "expr_reader", "$@1",
  "options_declaration", "require_declaration", "require_module_name",
  "require_module", "is_public_module", "expect_declaration",
  "expect_list", "expect_error", "expression_label", "expression_goto",
  "elif_or_static_elif", "expression_else", "if_or_static_if",
  "expression_if_then_else", "expression_for_loop", "expression_unsafe",
  "expression_while_loop", "expression_with", "expression_with_alias",
  "$@2", "annotation_argument_value", "annotation_argument_value_list",
  "annotation_argument_name", "annotation_argument",
  "annotation_argument_list", "annotation_declaration_name",
  "annotation_declaration", "annotation_list", "optional_annotation_list",
  "optional_function_argument_list", "optional_function_type",
  "function_name", "global_function_declaration",
  "optional_public_or_private_function", "function_declaration_header",
  "function_declaration", "$@3", "expression_block", "expression_any",
  "expressions", "expr_pipe", "name_in_namespace", "expression_delete",
  "expr_new", "expression_break", "expression_continue",
  "expression_return", "expression_yield", "expression_try_catch",
  "kwd_let", "expression_let", "expr_cast", "$@4", "$@5", "$@6", "$@7",
  "$@8", "$@9", "expr_type_decl", "$@10", "$@11", "expr_type_info",
  "expr_list", "block_or_simple_block", "block_or_lambda", "capture_entry",
  "capture_list", "optional_capture_list", "expr_block",
  "expr_numeric_const", "expr_assign", "expr_assign_pipe",
  "expr_named_call", "expr_method_call", "func_addr_expr", "$@12", "$@13",
  "$@14", "$@15", "expr_field", "$@16", "$@17", "expr", "$@18", "$@19",
  "$@20", "$@21", "$@22", "$@23", "expr_mtag", "optional_field_annotation",
  "optional_override", "optional_constant",
  "optional_public_or_private_member_variable",
  "structure_variable_declaration", "struct_variable_declaration_list",
  "$@24", "$@25", "$@26", "function_argument_declaration",
  "function_argument_list", "tuple_type", "tuple_type_list",
  "variant_type", "variant_type_list", "copy_or_move",
  "variable_declaration", "copy_or_move_or_clone", "optional_ref",
  "let_variable_declaration", "global_variable_declaration_list", "$@27",
  "optional_shared", "optional_public_or_private_variable", "global_let",
  "$@28", "enum_list", "single_alias", "$@29", "alias_list",
  "alias_declaration", "optional_public_or_private_enum", "enum_name",
  "enum_declaration", "optional_structure_parent", "optional_sealed",
  "structure_name", "class_or_struct",
  "optional_public_or_private_structure", "structure_declaration", "$@30",
  "$@31", "variable_name_with_pos_list", "basic_type_declaration",
  "enum_basic_type_declaration", "structure_type_declaration",
  "auto_type_declaration", "bitfield_bits", "bitfield_type_declaration",
  "$@32", "$@33", "table_type_pair", "type_declaration", "$@34", "$@35",
  "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44",
  "$@45", "$@46", "$@47", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53",
  "$@54", "$@55", "$@56", "$@57", "variant_alias_declaration", "$@58",
  "$@59", "bitfield_alias_declaration", "$@60", "make_decl",
  "make_struct_fields", "make_struct_dim", "optional_block",
  "make_struct_decl", "make_tuple", "make_map_tuple", "make_any_tuple",
  "make_dim", "make_dim_decl", "make_table", "make_table_decl",
  "array_comprehension_where", "array_comprehension", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,    44,    61,    63,    58,   124,    94,    38,
      60,    62,    45,    43,    42,    47,    37,   418,   419,   126,
      33,   420,   421,   422,   423,   424,    46,    91,    93,    40,
      41,    36,    64,    59,   123,   125,    35
};
#endif

#define YYPACT_NINF (-742)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-562)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -742,    33,  -742,  -742,    13,    79,    54,   -55,  -742,   -53,
    -742,  -742,     4,  -742,  -742,  -742,  -742,  -742,   259,  -742,
     107,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
     -68,  -742,    49,   115,   120,  -742,  -742,    54,     0,  -742,
    -742,   123,  -742,  -742,  -742,   107,   166,   172,  -742,  -742,
     183,   225,   189,  -742,   -16,  -742,  -742,  -742,    88,   164,
     219,  -742,   221,    35,    13,   230,    79,   209,   237,  -742,
     244,   252,  -742,   246,   222,  -101,   265,   223,  -742,  -742,
     261,    13,     4,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
     264,  -742,  -742,  -742,  -742,  -742,   226,  -742,  -742,  -742,
    -742,  -742,   231,   102,  -742,  -742,  -742,  -742,   366,  -742,
    -742,  8636,  -742,  -742,   229,  -742,  -742,  -742,   268,   233,
    -742,  -110,  -742,    10,  -742,    41,   327,  -742,   279,  -742,
    -742,   204,  -742,  -742,  -742,  -742,  -742,  -742,  -742,    52,
    -742,   258,   260,   262,   263,  -742,  -742,  -742,   242,  -742,
    -742,  -742,  -742,  -742,   267,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -742,  -742,   273,  -742,  -742,  -742,   274,   275,
    -742,  -742,  -742,  -742,   276,   277,   269,  -742,  -742,  -742,
    -742,  -742,  2921,  -742,  -742,   243,   280,  -742,  7390,   416,
     417,  -742,   270,   278,   257,  -742,  -742,   299,  -742,   281,
      13,   305,  -742,  -742,  -742,   102,  -742,  -742,  -742,  -742,
    -742,   306,  -742,    99,   144,   151,  -742,  -742,  4955,  -742,
    -742,  -742,  -742,   430,  -742,  -742,    63,  3210,  -742,   -92,
     297,  -742,   271,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -742,  -742,  -742,  -742,   282,  -742,  -742,  -742,
    -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,   452,
    -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -742,   286,  -742,  -742,   -75,   309,  -742,  -742,
    -742,  -742,  -742,  -742,  -742,  -742,   283,   -66,   312,   287,
    -742,   279,    68,   442,  -742,   214,  -742,  8636,  8636,  8636,
    8636,   295,   268,  8636,   270,  8636,   270,  8636,   270,  8728,
     280,  -742,  -742,  8544,   301,   316,  -742,   304,   317,   318,
     307,   325,   308,  -742,   328,  4955,  4955,   310,   311,   313,
     319,   320,  8360,  8452,  4955,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  4955,  4955,  4955,   130,  4955,  4955,  4955,  -742,
     315,  -742,  -742,  -742,     8,  -742,  -742,  -742,  -742,   314,
    -742,  -742,  -742,  -742,  -742,  -742,  1112,  -742,   322,  -742,
    -742,  -742,  -742,  -742,  -742,  -742,  -742,   324,  -742,  -742,
    6745,  -742,  -742,  8636,   -63,  -742,  -742,  -742,  -742,   -13,
    -742,   -42,  8636,  -742,  1449,  -742,   -27,  -742,   130,  -742,
    -742,   305,   329,   361,   363,  8636,  -742,   -40,   689,   348,
     705,   873,  1147,  -742,    98,  1577,   309,  1743,   309,  1913,
     309,    30,  -742,   119,  2921,   157,  2080,  -742,   130,  -742,
    4955,  -742,  -742,  4955,  -742,  4955,  8636,    62,    62,  4955,
    4955,  4955,  4955,  4955,   305,  1814,   305,  1981,  7465,  -742,
     -35,   211,    62,    62,   -46,  -742,    62,    62,  5562,   -20,
    -742,  2611,   374,  5634,  5816,  4955,  4955,  -742,  -742,  4955,
    4955,  4955,  4955,   367,  4955,   369,  4955,  4955,  4955,  4955,
    4955,  4955,  4955,  4955,  4955,  3354,  4955,  4955,  4955,  4955,
    4955,  4955,  4955,  4955,  4955,  4955,    74,  4955,  -742,  3498,
    -742,  -742,  2921,  -742,  -742,   305,  -742,   -41,  -742,   279,
    2921,  -742,  4955,  -742,  -742,   305,  2315,  -742,   278,  4955,
    4955,   370,  -742,   333,   378,  3665,  -104,  2467,   206,   206,
    -742,   496,   346,   347,  4955,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -742,   352,   357,   359,  -742,  -742,  -742,   305,
    -742,   -82,  -742,  7287,   -22,  4955,  -742,  -742,    18,  -742,
    -742,  -742,   513,   397,  -742,  -742,  -742,  2778,  -742,  -742,
    8636,  -742,  -742,  -742,   402,  -742,   387,  -742,   389,  -742,
     392,  8636,  -742,  8728,  -742,   280,  3809,  3976,  8636,  5653,
    8636,  8636,  5744,  8636,  5835,  2147,  5926,  6017,  6108,  6199,
    6290,    11,   206,   -57,  2148,  4143,  7465,   404,   -24,   382,
     408,  -742,  -742,    28,    17,  4310,   -24,   159,  4955,  4955,
     377,  -742,  4955,   247,   418,  -742,   153,  -742,   419,  -742,
      64,  7704,   -59,   270,   403,  -742,  -742,   406,  -742,  -742,
     293,   293,   266,   266,   428,   428,   388,    36,  -742,  6828,
     -73,   -73,   293,   293,  8046,  7936,  8018,  7779,  5998,  7547,
     907,  8155,  8230,   266,   266,   544,   544,    36,    36,    36,
     423,  4955,  -742,   425,  4955,   581,  6919,  -742,    78,  -742,
    -742,  -742,  8636,  -742,  2778,  -742,   522,    29,  2778,  -742,
    -742,   463,  1250,   574,  7704,   522,   431,  -742,   426,   445,
    7704,  -742,  2778,  -742,  5052,   405,  -742,  -742,   411,  -742,
    -742,   522,  -742,  -742,  -742,  -742,   206,  -742,  4955,  4955,
    4955,  4955,  4955,  4955,  4955,  4955,  4955,  4955,  2922,  4955,
    4955,  4955,  4955,  4955,  4955,  3066,  -742,   663,     4,  -742,
     589,   279,   451,   430,  -742,  2778,  -742,  5154,  -742,  -742,
    2921,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
    2921,  -742,  -742,  -742,  -742,    81,   453,  6381,  2247,  -742,
    2416,  2610,  -742,  2710,  -742,   374,  -742,  -742,  -742,  -742,
    -742,  4955,  -742,  4955,  4955,    -9,   454,   419,   422,   424,
    4955,   429,  4955,  4955,   419,   412,   432,  7704,  -742,  -742,
    7622,  -742,   456,  8636,   270,   -38,   104,  4955,  -742,   461,
     464,   466,   468,  -742,   112,   309,  -742,  -742,  4477,  -742,
     448,  -742,  -742,  4955,  -742,  7002,  -742,  7093,  -742,  -742,
    -742,  2777,  -742,  7184,  -742,  4955,  -742,  5256,  4955,  4955,
    -742,   278,  -742,  -742,  -742,  -742,  -742,  5358,  -742,  -742,
    -742,   344,  -742,  7704,  7704,  7704,  7704,  7704,  7704,  7704,
    7704,  7704,  7704,  4955,  4955,  7704,  7704,  7704,  7704,  7704,
    7704,  7704,  4955,  4955,  7704,  -742,   114,   298,     1,   434,
    -742,  -742,  5460,  -742,  -742,  -742,  -742,  -742,   163,  -742,
    -742,  -742,  -742,  -742,   435,   -85,  7704,  7704,   -24,   437,
     -33,   404,   446,  -742,  7704,  -742,  -742,   -72,   -24,   457,
    -742,  -742,  -742,  2856,   309,   443,  7704,  -742,  -742,  -742,
    -742,   -59,   458,   -93,  8636,  8636,  -742,    89,  -742,  7861,
    -742,  -742,  -742,   430,  4955,   -29,  -742,  -742,  4955,  -742,
    1644,   278,  -742,  -742,  4955,  -742,  8121,  7704,  8121,  7704,
     455,  -742,  -742,     7,  -742,  -742,   298,  -742,  -742,  4955,
     484,  -742,  4955,  4955,  4955,  4644,  4955,   470,   478,  4955,
    4955,  -742,  4955,   449,  -742,  -742,   480,  -742,  -742,  -742,
    4811,  -742,  -742,  3000,  3144,  -742,  8636,  7704,   278,  7704,
    -742,  -742,   522,  -742,  -742,   622,   305,  6472,   497,   266,
     266,   266,  -742,  6563,   991,   479,  -742,  7704,  7704,   991,
     482,   130,  -742,  4955,  7779,  -742,  -742,  3288,  -742,   344,
      10,  -742,  -742,  -742,  -742,  4955,  -742,   620,   485,  -742,
     477,  -742,  -742,   130,  7861,  -742,  -742,  -742,  -742,   481,
      10,  6654,  4955,   487,   488,  -742,  -742,  -742,   278,  -742,
    7704,  -742,  -742,  -742
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    94,     1,   210,     0,     0,     0,     0,   211,     0,
     573,   570,     0,    14,     3,    10,     9,     8,     0,     7,
     431,     6,    11,     5,     4,    12,    13,    75,    76,    74,
      83,    85,    34,    47,    44,    45,    36,     0,    42,    35,
     442,     0,   447,    19,    18,   431,     0,     0,    88,    89,
       0,   190,    90,    92,     0,    87,   460,   459,   156,   448,
     461,   432,   433,     0,     0,     0,     0,    37,     0,    43,
       0,     0,    40,     0,     0,     0,    15,     0,   571,   192,
       0,     0,     0,    95,   158,   157,   160,   155,   450,   449,
       0,   463,   462,   464,   435,   434,   437,    81,    82,    79,
      80,    78,     0,     0,    77,    86,    48,    46,    42,    39,
      38,     0,   444,   446,     0,    16,    17,    20,     0,     0,
     191,     0,    93,     0,   451,     0,   456,   428,   380,    21,
      22,     0,    70,    71,    68,    69,    67,    66,    72,     0,
      41,     0,     0,     0,     0,   471,   491,   472,   503,   473,
     477,   478,   479,   480,   495,   484,   485,   486,   487,   488,
     489,   490,   492,   493,   543,   476,   483,   494,   550,   557,
     474,   481,   475,   482,     0,     0,     0,   502,   513,   516,
     514,   515,   443,   445,   506,     0,     0,    91,     0,     0,
       0,   101,    96,     0,     0,   439,   457,     0,   465,   429,
       0,     0,    23,    24,    25,     0,    84,   534,   537,   540,
     530,     0,   508,   544,   551,   558,   564,   567,     0,   521,
     526,   520,   533,     0,   529,   523,     0,     0,   525,     0,
       0,   408,     0,   152,   153,   150,   104,   105,   107,   106,
     108,   109,   110,   111,   137,   138,   135,   136,   128,   139,
     140,   129,   126,   127,   151,   148,     0,   149,   141,   142,
     143,   144,   115,   116,   117,   112,   113,   114,   125,     0,
     131,   132,   130,   123,   124,   119,   118,   120,   121,   122,
     103,   102,   147,     0,   133,   134,   380,    99,   184,   161,
     496,   499,   497,   500,   498,   501,     0,     0,   454,     0,
     436,   380,     0,   467,   438,   421,    73,     0,     0,     0,
       0,     0,     0,     0,    96,     0,    96,     0,    96,     0,
       0,   296,   297,     0,     0,     0,   290,     0,     0,     0,
       0,     0,     0,   495,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   246,   248,   247,   249,   250,
     251,    26,     0,     0,     0,     0,     0,     0,     0,   233,
     234,   294,   293,   244,   291,   367,   366,   365,   364,    94,
     370,   292,   369,   368,   337,   298,     0,   299,     0,   295,
     575,   576,   577,   578,   528,   522,   524,     0,   527,   518,
       0,   507,   574,     0,     0,   146,   154,   145,    97,     0,
     401,     0,     0,   159,     0,   439,     0,   452,     0,   458,
     391,     0,     0,     0,     0,     0,   422,     0,     0,     0,
     511,     0,     0,   504,     0,     0,    99,     0,    99,     0,
      99,   190,   405,     0,   403,     0,   194,   197,     0,   222,
       0,   213,   216,     0,   219,     0,     0,   326,   327,     0,
       0,     0,     0,     0,     0,   585,     0,     0,   596,   603,
       0,     0,   303,   302,   342,    32,   301,   300,     0,   235,
     373,     0,   242,     0,     0,     0,     0,   328,   329,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   287,     0,   505,     0,
     519,   517,   407,   572,   409,     0,   399,   412,    98,   380,
     100,   186,     0,    57,    58,     0,     0,   198,     0,     0,
       0,     0,   199,     0,     0,     0,     0,     0,     0,     0,
     164,   162,     0,     0,     0,   179,   174,   171,   170,   172,
     173,   185,   165,     0,     0,     0,   177,   178,   180,     0,
     169,     0,   166,   252,     0,     0,   440,   455,   392,   430,
     381,   468,   469,     0,   419,   420,   418,     0,   535,   538,
       0,   541,   531,   509,     0,   545,     0,   552,     0,   559,
       0,     0,   565,     0,   568,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   190,     0,     0,   593,   583,   585,     0,
     597,   598,   599,     0,     0,     0,   585,     0,     0,     0,
       0,    29,     0,    27,     0,   330,   279,   278,     0,   338,
       0,   228,     0,    96,     0,   353,   352,     0,   354,   358,
     304,   305,   317,   318,   315,   316,     0,   347,   335,     0,
     371,   372,   306,   307,   322,   323,   324,   325,     0,     0,
     320,   321,   319,   313,   314,   309,   308,   310,   311,   312,
       0,     0,   285,     0,     0,     0,     0,   340,     0,   400,
     411,   410,     0,   413,     0,   402,     0,     0,     0,   200,
     203,     0,   252,     0,   193,     0,     0,   183,     0,     0,
      51,    61,     0,   207,   252,   234,   188,   189,     0,   181,
     182,     0,   168,   175,   176,   212,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   453,     0,     0,   466,
       0,   380,     0,   418,   423,     0,   427,   252,   536,   539,
     512,   542,   532,   510,   546,   548,   553,   555,   560,   562,
     404,   566,   406,   569,   195,     0,     0,     0,     0,   343,
       0,     0,   344,     0,   374,   242,   375,   376,   377,   378,
     379,     0,   586,     0,     0,   585,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   595,   604,   605,
       0,    30,    33,     0,    96,     0,     0,     0,   339,     0,
       0,     0,     0,   240,     0,    99,   349,   355,     0,   333,
       0,   359,   363,     0,   336,     0,   286,     0,   288,   331,
     341,   414,   417,   416,    62,     0,   204,   252,     0,     0,
     201,     0,    63,    64,    49,    50,   208,   252,   205,   235,
     184,    54,   187,   262,   263,   265,   264,   266,   256,   257,
     258,   267,   268,     0,     0,   254,   255,   269,   270,   259,
     260,   261,     0,     0,   253,   441,     0,   387,   382,     0,
     470,   425,   252,   426,   549,   556,   563,   196,     0,   225,
     223,   214,   217,   220,     0,     0,   580,   579,   585,     0,
       0,   584,     0,   588,   594,   601,   600,     0,   585,     0,
     602,    28,    31,     0,    99,     0,   229,   238,   239,   237,
     236,     0,     0,     0,     0,     0,   276,     0,   360,   348,
     334,   332,   289,   410,     0,     0,   202,   209,     0,   206,
       0,     0,    52,    53,     0,    59,   273,   274,   271,   272,
      95,   388,   389,   382,   383,   384,   387,   393,   424,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   587,     0,     0,   591,   280,     0,   275,   241,   243,
       0,   230,   245,     0,     0,   277,     0,   415,     0,    65,
     163,    55,     0,   398,   394,   385,     0,     0,     0,   215,
     218,   221,   345,     0,   606,     0,   589,   582,   581,   606,
       0,     0,   283,     0,   231,   350,   356,     0,    60,    54,
       0,   386,   396,   390,   226,     0,   346,     0,     0,   590,
       0,   592,   281,     0,   232,   351,   357,   361,    56,     0,
       0,     0,     0,     0,     0,   284,   362,   395,     0,   227,
     607,   608,   609,   397
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -742,  -742,  -742,  -742,  -742,   217,   616,  -742,  -742,  -742,
    -742,  -742,  -742,  -742,   644,  -742,   577,  -742,  -742,   633,
    -742,  -742,  -742,  -347,  -742,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,   483,  -742,  -742,   636,   -47,  -742,   619,   -45,
    -350,  -308,  -419,  -742,  -742,  -742,  -741,  -742,  -742,  -192,
    -742,  -158,  -509,   -12,  -742,  -742,  -742,  -742,  -742,  -742,
    -742,   704,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -742,  -742,  -487,  -742,  -742,  -225,  -742,   -78,
    -515,  -742,  -399,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -742,  -742,   459,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -125,  -253,  -742,  -255,  -742,  -742,  -742,  -742,
    -742,   193,  -742,   121,  -742,  -378,   393,  -502,  -503,   142,
    -742,  -382,  -742,  -742,   672,  -742,  -742,  -742,   321,   161,
    -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -742,  -742,  -395,  -109,  -742,  -742,  -742,   410,
    -742,  -742,  -742,  -742,   -70,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -742,  -742,   400,  -618,  -444,  -600,  -742,  -742,
    -330,   -77,   272,  -742,  -742,  -742,  -295,  -742
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,   117,    45,    14,   131,   137,   461,   361,   812,
     362,   634,    15,    16,    38,    39,    72,    17,    34,    35,
     542,   543,   954,   955,   544,   545,   546,   547,   548,   549,
     550,   948,   138,   139,    30,    31,    32,    52,    53,    54,
      18,   287,   403,   192,    19,    86,   193,    87,   123,   363,
     551,   404,   552,   364,   553,   365,   554,   555,   556,   557,
     558,   559,   560,   366,   600,   972,   601,   973,   603,   974,
     367,   598,   971,   368,   640,   992,   369,   823,   824,   643,
     370,   371,   701,   562,   372,   373,   374,   813,  1021,   814,
    1043,   375,   685,   942,   641,   934,  1045,   935,  1046,   996,
    1056,   377,   399,   966,  1032,   963,   889,   568,   751,  1030,
    1050,   400,   401,   432,   433,   231,   232,   794,   516,   577,
     417,   304,   199,   301,    62,    96,    21,   128,   297,    42,
      73,    75,    22,    90,   125,    23,   409,   197,   198,    60,
      93,    24,   126,   299,   305,   378,   296,   179,   180,   185,
     181,   312,   763,   419,   434,   310,   762,   307,   758,   308,
     759,   309,   761,   313,   764,   314,   894,   315,   766,   316,
     895,   317,   768,   318,   896,   319,   771,   320,   773,    25,
      47,   119,    26,    46,   379,   617,   618,   619,   380,   620,
     621,   622,   623,   381,   460,   382,  1038,   383
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,   289,   178,   201,   517,   561,   426,   586,   428,   588,
     430,   590,   689,   626,   459,   694,   514,   700,   798,   472,
     816,    68,   688,   716,   717,   -94,   805,   612,   713,   569,
     791,    27,    28,     2,   121,   515,   803,    48,   990,     3,
     726,   182,   612,   483,   188,   964,   485,   486,   845,    97,
      98,   964,  1004,    64,    40,    69,   473,   474,   819,   611,
     690,   624,     4,   391,     5,    49,     6,   820,   756,   793,
      55,   200,     7,   485,   486,    80,   690,   574,   817,   690,
     187,     8,   473,   474,   690,   445,   575,     9,   793,   406,
     288,   817,   230,   979,   113,   385,    63,   792,   965,   177,
      40,   288,    43,   392,   965,   821,    10,   691,   976,   775,
     822,   727,    50,   506,   507,   398,   132,   133,   189,   190,
     517,   982,   414,   691,   576,   692,   691,    11,   693,   407,
     697,   691,   513,   406,   817,    51,    50,   565,    44,    41,
     506,   507,   303,    84,   477,   478,   815,    82,   518,    85,
     636,   519,   483,   302,   484,   485,   486,   487,   629,    51,
     630,   488,    80,   470,   998,   191,   566,    61,    29,   797,
     477,   478,    83,   746,   414,    70,   411,   725,   483,   911,
     414,   485,   486,   487,    99,   842,    71,   488,   100,   846,
     101,   102,   414,   680,   681,   909,   591,   471,   178,   178,
     178,   178,    74,   856,   178,   748,   178,   194,   178,    36,
     178,   862,    64,   749,   178,   205,   801,   514,   750,    88,
      12,   802,   506,   507,   103,    89,    13,   817,    33,   682,
      37,    64,   386,   178,   178,   195,   114,   418,   420,   421,
     422,   817,   206,   425,   817,   427,   891,   429,   506,   507,
     387,   134,   817,   436,   818,   135,   412,   136,   102,   388,
     683,   684,    50,    56,    57,  -547,    58,   796,   840,   583,
    -547,   897,   455,   457,    91,   931,    94,    82,    40,   995,
      92,    65,    95,    66,   178,    51,   473,   474,  -547,  1049,
     592,   584,   925,   178,    59,   177,   177,   177,   177,   808,
     932,   177,   960,   177,   905,   177,   178,   177,   977,  1058,
    -554,   177,   593,   473,   474,  -554,   917,  -561,   983,  -282,
     115,    77,  -561,   512,  -282,   290,   116,    78,   594,   291,
     177,   177,   520,  -554,   969,   825,   703,   178,    79,   944,
    -561,   937,  -282,   465,   711,   573,   292,   293,   294,   295,
     595,   908,   802,   961,   806,   951,   970,    80,   945,   962,
     918,   202,   203,   204,   646,   649,   952,   953,   129,   130,
     631,   632,   475,   476,   477,   478,   605,   414,    81,   106,
     415,   177,   483,   416,   484,   485,   486,   487,   129,   130,
     177,   488,   108,   489,   490,    71,   567,   359,   715,   109,
     288,   477,   478,   177,   202,   203,   933,   110,   980,   483,
     111,   484,   485,   486,   487,   112,   120,   118,   488,   124,
     127,    69,   183,   184,   196,   200,   597,   186,   207,   219,
     208,   211,   209,   210,   177,   230,   229,   212,   501,   502,
     503,   504,   505,   213,   214,   215,   216,   217,   473,   474,
     284,   285,   506,   507,   298,   220,   221,   637,   218,   286,
     303,   311,   384,   393,   394,   501,   502,   503,   504,   505,
     395,   178,   288,   396,   397,   402,   300,   405,   408,   506,
     507,   410,   178,   413,   178,   423,   439,   441,   442,   178,
     438,   178,   178,   440,   178,   444,   443,   445,   446,   449,
     450,    12,   451,  1033,   844,   986,   924,   469,   452,   453,
     760,   509,   510,   852,   574,   222,   571,   570,   572,   579,
     642,   770,   656,   575,   658,   706,   707,   708,   778,   861,
     780,   781,   718,   783,   475,   476,   477,   478,   479,   719,
     720,   480,   473,   474,   483,   722,   484,   485,   486,   487,
     723,   561,   724,   488,   752,   489,   490,   391,   765,   832,
     767,   753,   224,   769,   473,   474,   225,   796,   177,   226,
     799,   800,   809,   826,   815,   811,   827,   828,   834,   177,
     836,   177,   838,   178,   227,   726,   177,   851,   177,   177,
     754,   177,   854,   228,   855,   853,   887,   859,   499,   500,
     501,   502,   503,   504,   505,   860,   890,   919,   898,   910,
     912,   517,   913,   922,   506,   507,   927,   915,   938,   928,
     920,   929,   841,   930,   975,   978,   888,   967,   475,   476,
     477,   478,   479,   987,   981,   480,   481,   482,   483,  1008,
     484,   485,   486,   487,  1020,   984,   989,   488,  1003,   489,
     490,  1022,   477,   478,  1031,   491,   492,   493,  1015,   947,
     483,   494,   484,   485,   486,   487,  1016,  1039,  1035,   488,
    1041,  1052,  1054,  1053,  1057,  1061,  1062,   376,   633,   104,
     177,    67,  1048,   473,   474,   140,   390,   495,   306,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   107,
     105,   122,   950,   886,   178,    20,   988,   904,   506,   507,
    1005,  1006,   695,   435,   772,   755,   288,    76,   503,   504,
     505,   219,   424,   437,  1040,   916,   564,     0,     0,   627,
     506,   507,     0,     0,     0,     0,    55,   219,     0,     0,
       0,   991,     0,   923,     0,     0,     0,   220,   221,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1001,
       0,     0,     0,   220,   221,     0,     0,     0,     0,   475,
     476,   477,   478,   479,     0,     0,   480,   481,   482,   483,
       0,   484,   485,   486,   487,     0,     0,     0,   488,     0,
     489,   490,     0,     0,   447,   448,   491,   492,   493,     0,
       0,   177,   494,   458,     0,     0,  1028,   222,     0,     0,
    1029,   462,   463,   464,     0,   466,   467,   468,     0,     0,
       0,     0,     0,   222,     0,   178,   178,     0,   495,     0,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   506,
     507,     0,     0,   223,   224,     0,   885,     0,   225,     0,
     578,   226,     0,   563,   993,   994,  1063,     0,     0,   223,
     224,     0,     0,     0,   225,     0,   227,   226,     0,     0,
       0,     0,     0,     0,     0,   228,     0,   178,     0,     0,
       0,     0,   227,     0,     0,     0,     0,     0,   580,   599,
       0,   228,   602,     0,   604,   219,     0,     0,   606,   607,
     608,   609,   610,     0,   616,     0,   616,     0,     0,     0,
       0,     0,   177,   177,     0,     0,  1027,   473,   474,     0,
       0,   220,   221,     0,   650,   651,     0,     0,   652,   653,
     654,   655,     0,   657,     0,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,     0,   686,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   696,     0,     0,   177,   702,     0,     0,   704,   705,
       0,   222,     0,     0,   710,     0,   714,     0,     0,     0,
       0,     0,     0,   721,     0,     0,     0,     0,     0,  1042,
       0,   473,   474,   475,   476,   477,   478,   479,     0,     0,
     480,   481,   482,   483,   747,   484,   485,   486,   487,     0,
       0,  1055,   488,     0,   489,   490,   757,   223,   224,     0,
       0,     0,   225,     0,   581,   226,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   777,     0,     0,     0,
     227,     0,     0,     0,     0,     0,     0,     0,     0,   228,
       0,     0,     0,   462,   468,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   468,     0,     0,   807,   458,     0,
       0,   810,     0,   506,   507,     0,     0,   475,   476,   477,
     478,   479,     0,     0,   480,   481,   482,   483,     0,   484,
     485,   486,   487,     0,     0,     0,   488,     0,   489,   490,
       0,     0,     0,     0,   491,   492,   493,     0,     0,     0,
     494,     0,   473,   474,     0,     0,     0,     0,     0,     0,
     835,     0,     0,   837,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   843,     0,     0,   495,   847,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,     0,     0,
       0,   857,     0,     0,     0,     0,     0,   506,   507,   219,
       0,     0,     0,     0,  1037,     0,     0,   863,   864,   865,
     866,   867,   868,   869,   870,   871,   872,   875,   876,   877,
     878,   879,   880,   881,   884,   220,   221,     0,     0,     0,
       0,     0,     0,     0,   892,     0,     0,     0,   475,   476,
     477,   478,   479,     0,     0,   480,   481,   482,   483,     0,
     484,   485,   486,   487,     0,     0,     0,   488,     0,   489,
     490,     0,     0,     0,     0,   491,   492,   493,     0,     0,
       0,   494,   906,   907,     0,     0,     0,     0,     0,   914,
       0,   616,     0,     0,     0,   222,     0,     0,     0,     0,
     473,   474,     0,     0,     0,     0,   926,   495,     0,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,     0,
       0,     0,   939,     0,     0,     0,     0,     0,   506,   507,
       0,     0,   508,     0,     0,     0,     0,   875,   884,     0,
       0,   223,   224,     0,     0,     0,   225,     0,   582,   226,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   956,   957,   227,     0,     0,     0,     0,     0,
       0,   958,   959,   228,     0,     0,     0,     0,   728,   729,
     730,   731,   732,   733,   734,   735,   475,   476,   477,   478,
     479,   736,   737,   480,   481,   482,   483,   848,   484,   485,
     486,   487,     0,     0,     0,   488,   739,   489,   490,   740,
     741,     0,     0,   491,   492,   493,   742,   743,   744,   494,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   997,     0,     0,     0,   999,     0,   563,
       0,     0,     0,  1002,   849,   495,     0,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,     0,  1007,     0,
       0,  1009,  1010,  1011,  1013,  1014,   506,   507,  1017,  1018,
       0,  1019,     0,   850,     0,     0,     0,     0,     0,  1024,
     521,     0,     0,     0,     0,     3,     0,   522,   523,   524,
       0,   525,     0,   321,   322,   323,   324,   325,     0,     0,
       0,     0,     0,     0,   526,   326,   527,   528,     0,     0,
       0,     0,  1044,     0,     0,     0,   529,   327,     0,   530,
       0,   531,   328,     0,  1051,   329,     0,     8,   330,   532,
       0,   533,   331,     0,     0,   534,   535,     0,     0,     0,
       0,  1060,   536,   145,   146,   147,     0,   149,   150,   151,
     152,   153,   333,   155,   156,   157,   158,   159,   160,   161,
     162,   163,     0,   165,   166,   167,     0,     0,   170,   171,
     172,   173,     0,     0,   334,   537,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,   336,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   538,   539,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,   337,
     338,   339,   340,   341,     0,   342,   343,   344,   345,   346,
     347,   348,   349,   350,    51,   351,     0,     0,     0,   219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   352,   353,   354,     0,   355,     0,     0,   356,   357,
       0,     0,     0,     0,     0,   220,   221,     0,   358,     0,
     359,   360,   540,   288,   541,   521,     0,     0,     0,     0,
       3,     0,   522,   523,   524,     0,   525,     0,   321,   322,
     323,   324,   325,     0,     0,     0,     0,     0,     0,   526,
     326,   527,   528,     0,     0,     0,     0,     0,     0,     0,
       0,   529,   327,     0,   530,     0,   531,   328,     0,     0,
     329,     0,     8,   330,   532,   222,   533,   331,     0,     0,
     534,   535,     0,     0,     0,     0,     0,   536,   145,   146,
     147,     0,   149,   150,   151,   152,   153,   333,   155,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   165,   166,
     167,     0,     0,   170,   171,   172,   173,     0,     0,   334,
     537,   223,   224,     0,     0,     0,   225,     0,   585,   226,
       0,     0,   335,   336,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   227,     0,     0,   538,   539,     0,
       0,     0,     0,   228,     0,   219,    50,     0,     0,     0,
       0,     0,     0,     0,   337,   338,   339,   340,   341,     0,
     342,   343,   344,   345,   346,   347,   348,   349,   350,    51,
     351,   220,   221,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,   353,   354,     0,
     355,     0,     0,   356,   357,     0,     0,     0,   321,   322,
     323,   324,   325,   358,     0,   359,   360,   540,   288,  1000,
     326,     0,     0,     0,     0,     0,   219,     0,     0,     0,
       0,     0,   327,     0,     0,     0,     0,   328,     0,     0,
     329,   222,     0,   330,     0,   612,     0,   331,     0,     0,
       0,     0,   220,   221,     0,     0,     0,   332,   145,   146,
     147,     0,   149,   150,   151,   152,   153,   333,   155,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   165,   166,
     167,     0,     0,   170,   171,   172,   173,   223,   224,   334,
       0,     0,   225,     0,   587,   226,     0,     0,     0,     0,
       0,     0,   335,   336,     0,     0,     0,     0,     0,     0,
     227,     0,   222,     0,     0,     0,     0,     0,     0,   228,
       0,     0,     0,     0,     0,   219,    50,     0,     0,     0,
       0,     0,     0,     0,   337,   338,   339,   340,   341,     0,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   613,
     351,   220,   221,     0,     0,     0,     0,     0,   223,   224,
       0,     0,     0,   225,     0,     0,   614,   353,   354,     0,
     355,     0,     0,   356,   357,   321,   322,   323,   324,   325,
       0,   227,     0,   615,     0,   359,   360,   326,   288,     0,
     228,     0,     0,   219,     0,     0,     0,     0,     0,   327,
       0,     0,     0,     0,   328,     0,     0,   329,     0,     0,
     330,   222,     0,     0,   331,     0,     0,     0,     0,   220,
     221,     0,     0,     0,   332,   145,   146,   147,     0,   149,
     150,   151,   152,   153,   333,   155,   156,   157,   158,   159,
     160,   161,   162,   163,     0,   165,   166,   167,     0,     0,
     170,   171,   172,   173,     0,     0,   334,   223,   224,     0,
       0,     0,   225,     0,   589,   226,     0,     0,     0,   335,
     336,     0,     0,     0,     0,     0,     0,     0,     0,   222,
     227,     0,     0,     0,     0,     0,     0,     0,     0,   228,
       0,     0,   219,    50,     0,     0,     0,     0,     0,     0,
       0,   337,   338,   339,   340,   341,     0,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   613,   351,   220,   221,
       0,     0,     0,     0,     0,   223,   224,     0,     0,     0,
     225,     0,     0,   614,   353,   354,     0,   355,     0,     0,
     356,   357,   321,   322,   323,   324,   325,     0,   227,     0,
     625,     0,   359,   360,   326,   288,     0,   228,     0,   219,
     385,     0,     0,     0,     0,     0,   327,     0,     0,     0,
       0,   328,     0,     0,   329,     0,     0,   330,   222,     0,
       0,   331,     0,     0,     0,   220,   221,     0,     0,     0,
       0,   332,   145,   146,   147,     0,   149,   150,   151,   152,
     153,   333,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   165,   166,   167,     0,     0,   170,   171,   172,
     173,     0,     0,   334,   223,   224,     0,     0,     0,   225,
       0,     0,   226,     0,     0,     0,   335,   336,     0,     0,
       0,     0,     0,     0,     0,   222,     0,   227,     0,   596,
       0,     0,     0,     0,     0,     0,   228,     0,     0,   219,
      50,     0,     0,     0,     0,     0,     0,     0,   337,   338,
     339,   340,   341,     0,   342,   343,   344,   345,   346,   347,
     348,   349,   350,    51,   351,   220,   221,     0,     0,     0,
       0,   223,   224,     0,     0,     0,   225,   386,   785,   226,
     352,   353,   354,     0,   355,     0,     0,   356,   357,   321,
     322,   323,   324,   325,   227,   387,     0,   358,     0,   359,
     360,   326,   288,   228,   388,     0,     0,     0,     0,     0,
       0,     0,     0,   327,     0,     0,     0,     0,   328,     0,
       0,   329,     0,     0,   330,   222,     0,     0,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   332,   145,
     146,   147,     0,   149,   150,   151,   152,   153,   333,   155,
     156,   157,   158,   159,   160,   161,   162,   163,     0,   165,
     166,   167,     0,     0,   170,   171,   172,   173,     0,     0,
     334,   223,   224,     0,     0,     0,   225,     0,   900,   226,
       0,     0,     0,   335,   336,     0,     0,     0,     0,     0,
       0,     0,   698,     0,   227,     0,     0,     0,   538,   539,
       0,     0,     0,   228,     0,     0,     0,    50,   219,     0,
       0,     0,     0,     0,     0,   337,   338,   339,   340,   341,
       0,   342,   343,   344,   345,   346,   347,   348,   349,   350,
      51,   351,     0,     0,   220,   221,     0,     0,     0,     0,
       0,   321,   322,   323,   324,   325,     0,   352,   353,   354,
       0,   355,     0,   326,   356,   357,     0,     0,     0,     0,
       0,     0,     0,     0,   358,   327,   359,   360,   699,   288,
     328,     0,     0,   329,     0,     0,   330,     0,     0,     0,
     331,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     332,   145,   146,   147,   222,   149,   150,   151,   152,   153,
     333,   155,   156,   157,   158,   159,   160,   161,   162,   163,
       0,   165,   166,   167,     0,     0,   170,   171,   172,   173,
       0,     0,   334,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   335,   336,     0,     0,     0,
     223,   224,     0,     0,   712,   225,     0,   901,   226,     0,
     538,   539,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,   227,     0,     0,     0,   337,   338,   339,
     340,   341,   228,   342,   343,   344,   345,   346,   347,   348,
     349,   350,    51,   351,     0,   321,   322,   323,   324,   325,
       0,     0,     0,     0,     0,     0,     0,   326,     0,   352,
     353,   354,   219,   355,     0,     0,   356,   357,     0,   327,
       0,     0,     0,     0,   328,     0,   358,   329,   359,   360,
     330,   288,     0,     0,   331,     0,     0,     0,   220,   221,
       0,     0,     0,     0,   332,   145,   146,   147,     0,   149,
     150,   151,   152,   153,   333,   155,   156,   157,   158,   159,
     160,   161,   162,   163,     0,   165,   166,   167,     0,     0,
     170,   171,   172,   173,     0,     0,   334,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   335,
     336,     0,     0,     0,     0,     0,     0,     0,   222,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   219,    50,     0,     0,     0,     0,     0,     0,
       0,   337,   338,   339,   340,   341,     0,   342,   343,   344,
     345,   346,   347,   348,   349,   350,    51,   351,   220,   221,
       0,     0,     0,     0,   223,   224,     0,     0,     0,   225,
       0,   902,   226,   352,   353,   354,     0,   355,     0,     0,
     356,   357,   321,   322,   323,   324,   325,   227,   638,     0,
     358,   639,   359,   360,   326,   288,   228,     0,     0,   219,
       0,     0,     0,     0,     0,     0,   327,     0,     0,     0,
       0,   328,     0,     0,   329,     0,     0,   330,   222,     0,
       0,   331,     0,     0,     0,   220,   221,     0,     0,     0,
       0,   332,   145,   146,   147,     0,   149,   150,   151,   152,
     153,   333,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   165,   166,   167,     0,     0,   170,   171,   172,
     173,     0,     0,   334,   223,   224,     0,     0,     0,   225,
       0,   903,   226,     0,     0,     0,   335,   336,   219,     0,
       0,     0,     0,     0,   690,   222,     0,   227,     0,     0,
       0,   538,   539,     0,     0,     0,   228,     0,     0,     0,
      50,     0,     0,     0,   220,   221,     0,     0,   337,   338,
     339,   340,   341,     0,   342,   343,   344,   345,   346,   347,
     348,   349,   350,    51,   351,     0,   321,   322,   323,   324,
     325,   943,   224,     0,     0,     0,   225,     0,   326,   226,
     352,   353,   354,   219,   355,     0,     0,   356,   357,     0,
     327,     0,     0,     0,   227,   328,     0,   358,   329,   359,
     360,   330,   288,   228,   222,   331,     0,     0,     0,   220,
     221,     0,     0,     0,     0,   332,   145,   146,   147,     0,
     149,   150,   151,   152,   153,   333,   155,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   165,   166,   167,     0,
       0,   170,   171,   172,   173,     0,     0,   334,     0,     0,
     223,   224,     0,     0,     0,   225,     0,   985,   226,     0,
     335,   336,   219,     0,     0,     0,     0,     0,     0,   222,
       0,     0,     0,   227,     0,   873,   874,     0,     0,     0,
       0,     0,   228,     0,    50,     0,     0,     0,   220,   221,
       0,     0,   337,   338,   339,   340,   341,     0,   342,   343,
     344,   345,   346,   347,   348,   349,   350,    51,   351,     0,
     321,   322,   323,   324,   325,   223,   224,     0,     0,     0,
     225,     0,   326,   226,   352,   353,   354,     0,   355,     0,
       0,   356,   357,     0,   327,     0,     0,     0,   227,   328,
       0,   358,   329,   359,   360,   330,   288,   228,   222,   331,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   332,
     145,   146,   147,     0,   149,   150,   151,   152,   153,   333,
     155,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     165,   166,   167,     0,     0,   170,   171,   172,   173,     0,
       0,   334,     0,     0,   223,   224,     0,     0,     0,   225,
       0,  1025,   226,     0,   335,   336,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,     0,   882,
     883,     0,     0,     0,     0,     0,   228,     0,    50,     0,
       0,     0,   220,   221,     0,     0,   337,   338,   339,   340,
     341,     0,   342,   343,   344,   345,   346,   347,   348,   349,
     350,    51,   351,     0,   321,   322,   323,   324,   325,     0,
       0,     0,     0,     0,     0,     0,   326,     0,   352,   353,
     354,     0,   355,     0,     0,   356,   357,     0,   327,     0,
       0,     0,     0,   328,     0,   358,   329,   359,   360,   330,
     288,     0,   222,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   332,   145,   146,   147,     0,   149,   150,
     151,   152,   153,   333,   155,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   165,   166,   167,     0,     0,   170,
     171,   172,   173,     0,     0,   334,     0,     0,   223,   224,
       0,     0,     0,   225,     0,  1026,   226,     0,   335,   336,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   227,     0,     0,     0,     0,     0,     0,     0,     0,
     228,     0,    50,     0,     0,     0,   220,   221,     0,     0,
     337,   338,   339,   340,   341,     0,   342,   343,   344,   345,
     346,   347,   348,   349,   350,    51,   351,     0,   321,   322,
     323,   324,   325,     0,     0,   668,     0,     0,     0,     0,
     326,     0,   352,   353,   354,     0,   355,     0,     0,   356,
     357,     0,   327,     0,     0,     0,     0,   328,   389,   358,
     329,   359,   360,   330,   288,     0,   222,   331,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   332,   145,   146,
     147,     0,   149,   150,   151,   152,   153,   333,   155,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   165,   166,
     167,     0,     0,   170,   171,   172,   173,     0,     0,   334,
       0,     0,   223,   224,     0,     0,     0,   225,     0,  1047,
     226,     0,   335,   336,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,     0,
       0,     0,     0,     0,   228,     0,    50,     0,     0,     0,
       0,     0,     0,     0,   337,   338,   339,   340,   341,     0,
     342,   343,   344,   345,   346,   347,   348,   349,   350,    51,
     351,     0,   321,   322,   323,   324,   325,     0,     0,     0,
       0,     0,     0,     0,   326,     0,   352,   353,   354,     0,
     355,     0,     0,   356,   357,     0,   327,     0,     0,     0,
       0,   328,     0,   358,   329,   359,   360,   330,   288,     0,
       0,   331,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   332,   145,   146,   147,     0,   149,   150,   151,   152,
     153,   333,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   165,   166,   167,     0,     0,   170,   171,   172,
     173,     0,     0,   334,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   335,   336,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,   337,   338,
     339,   340,   341,     0,   342,   343,   344,   345,   346,   347,
     348,   349,   350,    51,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     352,   353,   354,     0,   355,     0,     0,   356,   357,   321,
     322,   323,   324,   325,     0,     0,     0,   358,   687,   359,
     360,   326,   288,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   327,     0,     0,     0,     0,   328,     0,
       0,   329,     0,     0,   330,     0,     0,     0,   331,     0,
       0,   709,     0,     0,     0,     0,     0,     0,   332,   145,
     146,   147,     0,   149,   150,   151,   152,   153,   333,   155,
     156,   157,   158,   159,   160,   161,   162,   163,     0,   165,
     166,   167,     0,     0,   170,   171,   172,   173,     0,     0,
     334,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   335,   336,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,   337,   338,   339,   340,   341,
       0,   342,   343,   344,   345,   346,   347,   348,   349,   350,
      51,   351,     0,   321,   322,   323,   324,   325,     0,     0,
       0,     0,     0,     0,     0,   326,     0,   352,   353,   354,
       0,   355,     0,     0,   356,   357,     0,   327,     0,     0,
       0,     0,   328,     0,   358,   329,   359,   360,   330,   288,
       0,     0,   331,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   332,   145,   146,   147,     0,   149,   150,   151,
     152,   153,   333,   155,   156,   157,   158,   159,   160,   161,
     162,   163,     0,   165,   166,   167,     0,     0,   170,   171,
     172,   173,     0,     0,   334,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,   336,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,   337,
     338,   339,   340,   341,     0,   342,   343,   344,   345,   346,
     347,   348,   349,   350,    51,   351,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   352,   353,   354,     0,   355,     0,     0,   356,   357,
     321,   322,   323,   324,   325,     0,     0,     0,   358,   774,
     359,   360,   326,   288,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   327,     0,     0,     0,     0,   328,
       0,     0,   329,     0,     0,   330,     0,     0,     0,   331,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   332,
     145,   146,   147,     0,   149,   150,   151,   152,   153,   333,
     155,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     165,   166,   167,     0,     0,   170,   171,   172,   173,     0,
       0,   334,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   335,   336,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,   337,   338,   339,   340,
     341,     0,   342,   343,   344,   345,   346,   347,   348,   349,
     350,    51,   351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   776,     0,   352,   353,
     354,     0,   355,     0,     0,   356,   357,   321,   322,   323,
     324,   325,     0,     0,     0,   358,     0,   359,   360,   326,
     288,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   327,     0,     0,     0,     0,   328,     0,     0,   329,
       0,     0,   330,     0,     0,     0,   331,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   332,   145,   146,   147,
       0,   149,   150,   151,   152,   153,   333,   155,   156,   157,
     158,   159,   160,   161,   162,   163,     0,   165,   166,   167,
       0,     0,   170,   171,   172,   173,     0,     0,   334,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   335,   336,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,   337,   338,   339,   340,   341,     0,   342,
     343,   344,   345,   346,   347,   348,   349,   350,    51,   351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   352,   353,   354,     0,   355,
       0,     0,   356,   357,   321,   322,   323,   324,   325,     0,
       0,     0,   358,   795,   359,   360,   326,   288,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   327,     0,
       0,     0,     0,   328,     0,     0,   329,     0,     0,   330,
       0,     0,     0,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   332,   145,   146,   147,     0,   149,   150,
     151,   152,   153,   333,   155,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   165,   166,   167,     0,     0,   170,
     171,   172,   173,     0,     0,   334,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   335,   336,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
     337,   338,   339,   340,   341,     0,   342,   343,   344,   345,
     346,   347,   348,   349,   350,    51,   351,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,   353,   354,     0,   355,     0,     0,   356,
     357,   321,   322,   323,   324,   325,     0,     0,     0,   358,
     804,   359,   360,   326,   288,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   327,     0,     0,     0,     0,
     328,     0,     0,   329,     0,     0,   330,     0,     0,     0,
     331,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     332,   145,   146,   147,     0,   149,   150,   151,   152,   153,
     333,   155,   156,   157,   158,   159,   160,   161,   162,   163,
       0,   165,   166,   167,     0,     0,   170,   171,   172,   173,
       0,     0,   334,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   335,   336,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,     0,     0,   337,   338,   339,
     340,   341,     0,   342,   343,   344,   345,   346,   347,   348,
     349,   350,    51,   351,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
     353,   354,     0,   355,     0,     0,   356,   357,   321,   322,
     323,   324,   325,     0,     0,     0,   358,   936,   359,   360,
     326,   288,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   327,     0,     0,     0,     0,   328,     0,     0,
     329,     0,     0,   330,     0,     0,     0,   331,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   332,   145,   146,
     147,     0,   149,   150,   151,   152,   153,   333,   155,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   165,   166,
     167,     0,     0,   170,   171,   172,   173,     0,     0,   334,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   335,   336,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     0,     0,     0,   337,   338,   339,   340,   341,     0,
     342,   343,   344,   345,   346,   347,   348,   349,   350,    51,
     351,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,   353,   354,     0,
     355,     0,     0,   356,   357,   321,   322,   323,   324,   325,
       0,     0,     0,   358,  1012,   359,   360,   326,   288,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   327,
       0,     0,     0,     0,   328,     0,     0,   329,     0,     0,
     330,     0,     0,     0,   331,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   332,   145,   146,   147,     0,   149,
     150,   151,   152,   153,   333,   155,   156,   157,   158,   159,
     160,   161,   162,   163,     0,   165,   166,   167,     0,     0,
     170,   171,   172,   173,     0,     0,   334,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   335,
     336,     0,     0,     0,     0,     0,     0,     0,  1023,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,   337,   338,   339,   340,   341,     0,   342,   343,   344,
     345,   346,   347,   348,   349,   350,    51,   351,     0,   321,
     322,   323,   324,   325,     0,     0,     0,     0,     0,     0,
       0,   326,     0,   352,   353,   354,     0,   355,     0,     0,
     356,   357,     0,   327,     0,     0,     0,     0,   328,     0,
     358,   329,   359,   360,   330,   288,     0,     0,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   332,   145,
     146,   147,     0,   149,   150,   151,   152,   153,   333,   155,
     156,   157,   158,   159,   160,   161,   162,   163,     0,   165,
     166,   167,     0,     0,   170,   171,   172,   173,     0,     0,
     334,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   335,   336,     0,     0,     0,     0,     0,
       0,     0,   473,   474,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,   337,   338,   339,   340,   341,
       0,   342,   343,   344,   345,   346,   347,   348,   349,   350,
      51,   351,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   352,   353,   354,
       0,   355,     0,     0,   356,   357,     0,     0,     0,     0,
       0,     0,     0,     0,   358,     0,   359,   360,     0,   288,
     728,   729,   730,   731,   732,   733,   734,   735,   475,   476,
     477,   478,   479,   736,   737,   480,   481,   482,   483,   848,
     484,   485,   486,   487,   473,   474,     0,   488,   739,   489,
     490,   740,   741,     0,     0,   491,   492,   493,   742,   743,
     744,   494,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   849,   495,     0,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   506,   507,
       0,     0,     0,     0,     0,   858,     0,     0,     0,     0,
       0,     0,   728,   729,   730,   731,   732,   733,   734,   735,
     475,   476,   477,   478,   479,   736,   737,   480,   481,   482,
     483,   848,   484,   485,   486,   487,   473,   474,     0,   488,
     739,   489,   490,   740,   741,     0,     0,   491,   492,   493,
     742,   743,   744,   494,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   849,   495,
       0,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     506,   507,     0,     0,     0,     0,     0,   893,     0,     0,
       0,     0,     0,     0,   728,   729,   730,   731,   732,   733,
     734,   735,   475,   476,   477,   478,   479,   736,   737,   480,
     481,   482,   483,   848,   484,   485,   486,   487,   473,   474,
       0,   488,   739,   489,   490,   740,   741,     0,     0,   491,
     492,   493,   742,   743,   744,   494,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     849,   495,     0,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   506,   507,     0,     0,     0,     0,     0,   946,
       0,     0,     0,     0,     0,     0,   728,   729,   730,   731,
     732,   733,   734,   735,   475,   476,   477,   478,   479,   736,
     737,   480,   481,   482,   483,   848,   484,   485,   486,   487,
     473,   474,     0,   488,   739,   489,   490,   740,   741,     0,
       0,   491,   492,   493,   742,   743,   744,   494,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   849,   495,     0,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   506,   507,     0,     0,     0,     0,
       0,   949,     0,     0,     0,     0,     0,     0,   728,   729,
     730,   731,   732,   733,   734,   735,   475,   476,   477,   478,
     479,   736,   737,   480,   481,   482,   483,   848,   484,   485,
     486,   487,   473,   474,     0,   488,   739,   489,   490,   740,
     741,     0,     0,   491,   492,   493,   742,   743,   744,   494,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   849,   495,     0,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   506,   507,     0,     0,
       0,     0,   644,   968,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   475,   476,
     477,   478,   479,   473,   474,   480,   481,   482,   483,     0,
     484,   485,   486,   487,     0,     0,     0,   488,     0,   489,
     490,     0,     0,     0,     0,   491,   492,   493,   145,   146,
     147,   494,   149,   150,   151,   152,   153,   333,   155,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   165,   166,
     167,     0,     0,   170,   171,   172,   173,   495,     0,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   506,   507,
       0,     0,   635,     0,     0,     0,     0,     0,     0,   475,
     476,   477,   478,   479,   473,   474,   480,   481,   482,   483,
       0,   484,   485,   486,   487,     0,     0,     0,   488,     0,
     489,   490,     0,     0,     0,     0,   491,   492,   493,   645,
       0,     0,   494,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   495,     0,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
       0,     0,     0,     0,   647,     0,     0,     0,     0,   506,
     507,     0,     0,   779,     0,     0,     0,     0,     0,     0,
     475,   476,   477,   478,   479,   473,   474,   480,   481,   482,
     483,     0,   484,   485,   486,   487,     0,     0,     0,   488,
       0,   489,   490,     0,     0,     0,     0,   491,   492,   493,
     145,   146,   147,   494,   149,   150,   151,   152,   153,   333,
     155,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     165,   166,   167,     0,     0,   170,   171,   172,   173,   495,
       0,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     506,   507,     0,     0,   782,     0,     0,     0,     0,     0,
       0,   475,   476,   477,   478,   479,   473,   474,   480,   481,
     482,   483,     0,   484,   485,   486,   487,     0,     0,     0,
     488,     0,   489,   490,     0,     0,     0,     0,   491,   492,
     493,   648,     0,     0,   494,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     495,     0,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,     0,     0,     0,     0,   830,     0,     0,     0,
       0,   506,   507,     0,     0,   784,     0,     0,     0,     0,
       0,     0,   475,   476,   477,   478,   479,   473,   474,   480,
     481,   482,   483,     0,   484,   485,   486,   487,     0,     0,
       0,   488,     0,   489,   490,     0,     0,     0,     0,   491,
     492,   493,   145,   146,   147,   494,   149,   150,   151,   152,
     153,   333,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   165,   166,   167,     0,     0,   170,   171,   172,
     173,   495,     0,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   506,   507,     0,     0,   786,     0,     0,     0,
       0,     0,     0,   475,   476,   477,   478,   479,   473,   474,
     480,   481,   482,   483,     0,   484,   485,   486,   487,     0,
       0,     0,   488,     0,   489,   490,     0,     0,     0,     0,
     491,   492,   493,   831,     0,     0,   494,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   495,     0,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   506,   507,     0,     0,   787,     0,     0,
       0,     0,     0,     0,   475,   476,   477,   478,   479,   473,
     474,   480,   481,   482,   483,     0,   484,   485,   486,   487,
       0,     0,     0,   488,     0,   489,   490,     0,     0,     0,
       0,   491,   492,   493,     0,     0,     0,   494,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   495,     0,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   506,   507,     0,     0,   788,     0,
       0,     0,     0,     0,     0,   475,   476,   477,   478,   479,
     473,   474,   480,   481,   482,   483,     0,   484,   485,   486,
     487,     0,     0,     0,   488,     0,   489,   490,     0,     0,
       0,     0,   491,   492,   493,     0,     0,     0,   494,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   495,     0,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   506,   507,     0,     0,   789,
       0,     0,     0,     0,     0,     0,   475,   476,   477,   478,
     479,   473,   474,   480,   481,   482,   483,     0,   484,   485,
     486,   487,     0,     0,     0,   488,     0,   489,   490,     0,
       0,     0,     0,   491,   492,   493,     0,     0,     0,   494,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   495,     0,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   506,   507,     0,     0,
     790,     0,     0,     0,     0,     0,     0,   475,   476,   477,
     478,   479,   473,   474,   480,   481,   482,   483,     0,   484,
     485,   486,   487,     0,     0,     0,   488,     0,   489,   490,
       0,     0,     0,     0,   491,   492,   493,     0,     0,     0,
     494,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   495,     0,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   506,   507,     0,
       0,   899,     0,     0,     0,     0,     0,     0,   475,   476,
     477,   478,   479,   473,   474,   480,   481,   482,   483,     0,
     484,   485,   486,   487,     0,     0,     0,   488,     0,   489,
     490,     0,     0,     0,     0,   491,   492,   493,     0,     0,
       0,   494,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   495,     0,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   506,   507,
       0,     0,  1034,     0,     0,     0,     0,     0,     0,   475,
     476,   477,   478,   479,   473,   474,   480,   481,   482,   483,
       0,   484,   485,   486,   487,     0,     0,     0,   488,     0,
     489,   490,     0,     0,     0,     0,   491,   492,   493,     0,
       0,     0,   494,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   495,     0,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   506,
     507,     0,     0,  1036,     0,     0,     0,     0,     0,     0,
     475,   476,   477,   478,   479,   473,   474,   480,   481,   482,
     483,     0,   484,   485,   486,   487,     0,     0,     0,   488,
       0,   489,   490,     0,     0,     0,     0,   491,   492,   493,
       0,     0,     0,   494,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   495,
       0,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     506,   507,     0,     0,  1059,     0,     0,     0,   473,   474,
       0,   475,   476,   477,   478,   479,     0,     0,   480,   481,
     482,   483,     0,   484,   485,   486,   487,     0,     0,     0,
     488,     0,   489,   490,     0,     0,     0,     0,   491,   492,
     493,     0,     0,     0,   494,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     495,     0,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   506,   507,   511,   475,   476,   477,   478,   479,   473,
     474,   480,   481,   482,   483,     0,   484,   485,   486,   487,
       0,     0,     0,   488,     0,   489,   490,     0,     0,     0,
       0,   491,   492,   493,     0,     0,     0,   494,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   495,     0,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   506,   507,   829,     0,     0,     0,
       0,     0,   473,   474,     0,   475,   476,   477,   478,   479,
       0,     0,   480,   481,   482,   483,     0,   484,   485,   486,
     487,     0,     0,     0,   488,     0,   489,   490,     0,     0,
       0,     0,   491,   492,   493,     0,     0,     0,   494,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   495,     0,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   506,   507,   839,   475,   476,
     477,   478,   479,   473,   474,   480,   481,   482,   483,     0,
     484,   485,   486,   487,     0,     0,     0,   488,     0,   489,
     490,     0,     0,     0,     0,   491,   492,   493,     0,     0,
       0,   494,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   495,     0,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   506,   507,
     940,     0,     0,     0,     0,     0,     0,     0,     0,   475,
     476,   477,   478,   479,   473,   474,   480,   481,   482,   483,
       0,   484,   485,   486,   487,     0,     0,     0,   488,     0,
     489,   490,     0,     0,     0,     0,   491,   492,   493,     0,
       0,     0,   494,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   495,     0,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   506,
     507,   941,   728,   729,   730,   731,   732,   733,   734,   735,
     475,   476,   477,   478,   479,   736,   737,   480,   481,   482,
     483,   848,   484,   485,   486,   487,  -252,   473,   474,   488,
     739,   489,   490,   740,   741,     0,     0,   491,   492,   493,
     742,   743,   744,   494,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   849,   495,
       0,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     506,   507,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   728,   729,   730,   731,   732,
     733,   734,   735,   475,   476,   477,   478,   479,   736,   737,
     480,   481,   482,   483,   738,   484,   485,   486,   487,     0,
     233,   234,   488,   739,   489,   490,   740,   741,     0,     0,
     491,   492,   493,   742,   743,   744,   494,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   745,   495,     0,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   506,   507,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   473,   474,     0,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,     0,     0,   254,   255,
     256,     0,     0,     0,     0,     0,   257,   258,   259,   260,
     261,     0,     0,   262,   263,   264,   265,   266,   267,   268,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   269,     0,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   473,   474,   280,
     281,   475,   476,   477,   478,   479,   282,   283,   480,   481,
     482,   483,     0,   484,   485,   486,   487,     0,     0,     0,
     488,     0,   489,   490,     0,     0,   628,     0,   491,   492,
     493,     0,     0,     0,   494,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     495,     0,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   473,   474,     0,     0,     0,     0,     0,     0,
       0,   506,   507,   475,   476,   477,   478,   479,     0,     0,
     480,   481,   482,   483,     0,   484,   485,   486,   487,     0,
       0,     0,   488,     0,   489,   490,     0,     0,     0,     0,
     491,   492,   493,     0,     0,     0,   494,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   495,   833,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   473,   474,     0,     0,   475,   476,
     477,   478,   479,   506,   507,   480,   481,   482,   483,     0,
     484,   485,   486,   487,     0,     0,     0,   488,     0,   489,
     490,     0,     0,     0,     0,   491,   492,   493,     0,     0,
       0,   494,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   921,     0,     0,     0,   495,     0,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   473,
     474,     0,     0,     0,     0,     0,     0,     0,   506,   507,
     475,   476,   477,   478,   479,     0,     0,   480,   481,   482,
     483,     0,   484,   485,   486,   487,     0,     0,     0,   488,
       0,   489,   490,     0,     0,     0,     0,   491,   492,   493,
       0,     0,     0,   494,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   495,
       0,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   473,   474,     0,     0,   475,   476,   477,   478,   479,
     506,   507,   480,   481,   482,   483,     0,   484,   485,   486,
     487,     0,     0,     0,   488,     0,   489,   490,     0,     0,
       0,     0,   491,   492,   493,     0,     0,     0,  -562,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   495,     0,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   473,   474,     0,     0,
       0,     0,     0,     0,     0,   506,   507,   475,   476,   477,
     478,   479,     0,     0,   480,   481,   482,   483,     0,   484,
     485,   486,   487,     0,     0,     0,   488,     0,   489,   490,
       0,     0,     0,     0,   491,   492,   493,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   495,     0,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   473,   474,
       0,     0,   475,   476,   477,   478,   479,   506,   507,   480,
     481,   482,   483,     0,   484,   485,   486,   487,     0,     0,
       0,   488,     0,   489,   490,     0,   473,   474,     0,   491,
       0,   493,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   506,   507,   475,   476,   477,   478,   479,     0,
       0,   480,   481,   482,   483,     0,   484,   485,   486,   487,
       0,   473,   474,   488,     0,   489,   490,     0,     0,     0,
       0,   491,   475,   476,   477,   478,   479,     0,     0,   480,
     481,   482,   483,     0,   484,   485,   486,   487,     0,     0,
       0,   488,     0,   489,   490,   473,   474,     0,     0,     0,
       0,     0,     0,     0,     0,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   506,   507,     0,     0,     0,     0,
       0,     0,     0,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,     0,     0,     0,     0,   475,   476,     0,
       0,   479,   506,   507,   480,   481,   482,   483,     0,   484,
     485,   486,   487,     0,     0,     0,   488,     0,   489,   490,
     473,   474,     0,     0,   491,   492,   493,     0,     0,     0,
     494,   475,   476,   477,   478,   479,     0,     0,   480,   481,
     482,   483,     0,   484,   485,   486,   487,     0,     0,     0,
     488,     0,   489,   490,     0,     0,   495,     0,   496,   497,
     498,   499,   500,     0,     0,     0,   504,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   506,   507,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   498,   499,   500,   501,   502,   503,
     504,   505,     0,     0,     0,     0,   475,   476,   477,   478,
     479,   506,   507,   480,   481,   482,   483,     0,   484,   485,
     486,   487,     0,     0,     0,   488,     0,   489,   490,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   454,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   141,     0,     0,     0,     0,     0,
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     499,   500,   501,   502,   503,   504,   505,   143,     0,     0,
       0,     0,     0,     0,     0,     0,   506,   507,     0,     0,
       0,     0,   144,     0,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   456,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,     0,     0,     0,
       0,     0,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,     0,   176,     0,     0,     0,     0,
       0,     0,     0,     0,   144,    51,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,     0,     0,   142,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,     0,   176,     0,     0,
       0,     0,     0,     0,     0,     0,   144,    51,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     141,     0,     0,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,     0,   176,
     342,   343,   344,     0,     0,     0,     0,     0,   144,    51,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   141,     0,     0,     0,     0,     0,   142,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
       0,   176,     0,     0,     0,     0,     0,     0,     0,     0,
     144,    51,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   431
};

static const yytype_int16 yycheck[] =
{
      12,   193,   111,   128,   399,   404,   314,   426,   316,   428,
     318,   430,   515,   457,   344,   517,   394,   526,   618,   369,
     638,    21,   509,   538,   539,     7,   626,    51,   537,   411,
      19,    18,    19,     0,    81,    48,    19,    33,   131,     6,
     122,   111,    51,   116,    34,    44,   119,   120,    19,    14,
      15,    44,    45,   163,   155,    55,    20,    21,   117,   454,
     117,   456,    29,   155,    31,    61,    33,   126,   577,   126,
      82,   146,    39,   119,   120,   132,   117,   117,   163,   117,
     190,    48,    20,    21,   117,   189,   126,    54,   126,   155,
     194,   163,   155,   126,   195,    32,   164,   612,    97,   111,
     155,   194,   155,   195,    97,   164,    73,   164,   193,   596,
     169,   193,   132,   186,   187,   190,    14,    15,   108,   109,
     515,   193,   163,   164,   164,   166,   164,    94,   169,   195,
     525,   164,   195,   155,   163,   155,   132,   164,   191,   194,
     186,   187,   155,    55,   108,   109,   155,   163,   190,    61,
     170,   193,   116,   200,   118,   119,   120,   121,   193,   155,
     195,   125,   132,   155,   193,   155,   193,    60,   155,   193,
     108,   109,   188,   195,   163,   175,   301,   559,   116,   797,
     163,   119,   120,   121,   149,   694,   186,   125,   153,   698,
     155,   156,   163,   119,   120,   795,   166,   189,   307,   308,
     309,   310,    41,   712,   313,   187,   315,   166,   317,   155,
     319,   726,   163,   195,   323,   163,   188,   595,   568,    55,
     187,   193,   186,   187,   189,    61,   193,   163,   149,   155,
     176,   163,   169,   342,   343,   194,    75,   307,   308,   309,
     310,   163,   190,   313,   163,   315,   755,   317,   186,   187,
     187,   149,   163,   323,   190,   153,   188,   155,   156,   196,
     186,   187,   132,     4,     5,   166,     7,   163,   190,   171,
     171,   190,   342,   343,    55,   163,    55,   163,   155,   190,
      61,   166,    61,   163,   393,   155,    20,    21,   189,  1030,
     171,   193,   188,   402,    35,   307,   308,   309,   310,   629,
     188,   313,   188,   315,   791,   317,   415,   319,   908,  1050,
     166,   323,   193,    20,    21,   171,   803,   166,   918,   166,
      55,   155,   171,   393,   171,    68,    61,   155,   171,    72,
     342,   343,   402,   189,   171,   643,   528,   446,   155,   841,
     189,   828,   189,   355,   536,   415,    89,    90,    91,    92,
     193,   795,   193,    55,   195,    11,   193,   132,   845,    61,
     804,   157,   158,   159,   473,   474,    22,    23,   157,   158,
     159,   160,   106,   107,   108,   109,   446,   163,   189,   149,
     166,   393,   116,   169,   118,   119,   120,   121,   157,   158,
     402,   125,   155,   127,   128,   186,   408,   191,   192,   155,
     194,   108,   109,   415,   157,   158,   825,   155,   910,   116,
     164,   118,   119,   120,   121,   193,   155,   194,   125,   155,
     194,    55,   193,   155,    97,   146,   438,   194,   170,    32,
     170,   189,   170,   170,   446,   155,   193,   170,   172,   173,
     174,   175,   176,   170,   170,   170,   170,   170,    20,    21,
      34,    34,   186,   187,   155,    58,    59,   469,   189,   189,
     155,   155,    32,   166,   193,   172,   173,   174,   175,   176,
     188,   580,   194,    21,   188,   166,   195,   194,   166,   186,
     187,   194,   591,    41,   593,   190,   170,   170,   170,   598,
     189,   600,   601,   189,   603,   170,   189,   189,   170,   189,
     189,   187,   189,  1006,   696,   924,   814,   192,   189,   189,
     580,   189,   188,   705,   117,   118,   155,   188,   155,   171,
     146,   591,   155,   126,   155,   155,   193,   149,   598,   721,
     600,   601,    36,   603,   106,   107,   108,   109,   110,   193,
     193,   113,    20,    21,   116,   193,   118,   119,   120,   121,
     193,   950,   193,   125,    41,   127,   128,   155,   171,   668,
     171,   164,   165,   171,    20,    21,   169,   163,   580,   172,
     188,   163,   195,   170,   155,   157,   170,   189,   155,   591,
     155,   593,     1,   692,   187,   122,   598,    13,   600,   601,
     193,   603,   166,   196,   149,   164,     7,   192,   170,   171,
     172,   173,   174,   175,   176,   194,   155,   195,   155,   155,
     188,  1006,   188,   157,   186,   187,   155,   188,   170,   155,
     188,   155,   692,   155,   189,   188,   751,   193,   106,   107,
     108,   109,   110,   190,   188,   113,   114,   115,   116,   155,
     118,   119,   120,   121,   195,   188,   188,   125,   193,   127,
     128,   171,   108,   109,    32,   133,   134,   135,   188,   851,
     116,   139,   118,   119,   120,   121,   188,   188,   171,   125,
     188,    51,   195,   188,   193,   188,   188,   218,   461,    63,
     692,    37,  1029,    20,    21,   108,   227,   165,   205,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    66,
      64,    82,   860,   748,   813,     1,   931,   785,   186,   187,
     963,   966,   519,   320,   593,   573,   194,    45,   174,   175,
     176,    32,   312,   323,  1019,   802,   405,    -1,    -1,   457,
     186,   187,    -1,    -1,    -1,    -1,   748,    32,    -1,    -1,
      -1,   933,    -1,   813,    -1,    -1,    -1,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   951,
      -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,   106,
     107,   108,   109,   110,    -1,    -1,   113,   114,   115,   116,
      -1,   118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,
     127,   128,    -1,    -1,   335,   336,   133,   134,   135,    -1,
      -1,   813,   139,   344,    -1,    -1,   998,   118,    -1,    -1,
    1002,   352,   353,   354,    -1,   356,   357,   358,    -1,    -1,
      -1,    -1,    -1,   118,    -1,   934,   935,    -1,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
     187,    -1,    -1,   164,   165,    -1,   193,    -1,   169,    -1,
     171,   172,    -1,   404,   934,   935,  1058,    -1,    -1,   164,
     165,    -1,    -1,    -1,   169,    -1,   187,   172,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,    -1,   996,    -1,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,   193,   440,
      -1,   196,   443,    -1,   445,    32,    -1,    -1,   449,   450,
     451,   452,   453,    -1,   455,    -1,   457,    -1,    -1,    -1,
      -1,    -1,   934,   935,    -1,    -1,   996,    20,    21,    -1,
      -1,    58,    59,    -1,   475,   476,    -1,    -1,   479,   480,
     481,   482,    -1,   484,    -1,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,    -1,   507,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   522,    -1,    -1,   996,   526,    -1,    -1,   529,   530,
      -1,   118,    -1,    -1,   535,    -1,   537,    -1,    -1,    -1,
      -1,    -1,    -1,   544,    -1,    -1,    -1,    -1,    -1,  1021,
      -1,    20,    21,   106,   107,   108,   109,   110,    -1,    -1,
     113,   114,   115,   116,   565,   118,   119,   120,   121,    -1,
      -1,  1043,   125,    -1,   127,   128,   577,   164,   165,    -1,
      -1,    -1,   169,    -1,   171,   172,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   597,    -1,    -1,    -1,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    -1,   614,   615,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   625,    -1,    -1,   628,   629,    -1,
      -1,   632,    -1,   186,   187,    -1,    -1,   106,   107,   108,
     109,   110,    -1,    -1,   113,   114,   115,   116,    -1,   118,
     119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,   128,
      -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,
     139,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
     681,    -1,    -1,   684,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   694,    -1,    -1,   165,   698,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    -1,    -1,
      -1,   712,    -1,    -1,    -1,    -1,    -1,   186,   187,    32,
      -1,    -1,    -1,    -1,   193,    -1,    -1,   728,   729,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   755,    -1,    -1,    -1,   106,   107,
     108,   109,   110,    -1,    -1,   113,   114,   115,   116,    -1,
     118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,
     128,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,
      -1,   139,   793,   794,    -1,    -1,    -1,    -1,    -1,   800,
      -1,   802,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,   817,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    -1,
      -1,    -1,   833,    -1,    -1,    -1,    -1,    -1,   186,   187,
      -1,    -1,   190,    -1,    -1,    -1,    -1,   848,   849,    -1,
      -1,   164,   165,    -1,    -1,    -1,   169,    -1,   171,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   873,   874,   187,    -1,    -1,    -1,    -1,    -1,
      -1,   882,   883,   196,    -1,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    -1,    -1,    -1,   125,   126,   127,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   944,    -1,    -1,    -1,   948,    -1,   950,
      -1,    -1,    -1,   954,   164,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,    -1,   969,    -1,
      -1,   972,   973,   974,   975,   976,   186,   187,   979,   980,
      -1,   982,    -1,   193,    -1,    -1,    -1,    -1,    -1,   990,
       1,    -1,    -1,    -1,    -1,     6,    -1,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,  1023,    -1,    -1,    -1,    37,    38,    -1,    40,
      -1,    42,    43,    -1,  1035,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,
      -1,  1052,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    86,    -1,    -1,    89,    90,
      91,    92,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,   173,   174,    -1,   176,    -1,    -1,   179,   180,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,   189,    -1,
     191,   192,   193,   194,   195,     1,    -1,    -1,    -1,    -1,
       6,    -1,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    40,    -1,    42,    43,    -1,    -1,
      46,    -1,    48,    49,    50,   118,    52,    53,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,    95,
      96,   164,   165,    -1,    -1,    -1,   169,    -1,   171,   172,
      -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   187,    -1,    -1,   123,   124,    -1,
      -1,    -1,    -1,   196,    -1,    32,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   172,   173,   174,    -1,
     176,    -1,    -1,   179,   180,    -1,    -1,    -1,    14,    15,
      16,    17,    18,   189,    -1,   191,   192,   193,   194,   195,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      46,   118,    -1,    49,    -1,    51,    -1,    53,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    -1,    -1,    89,    90,    91,    92,   164,   165,    95,
      -1,    -1,   169,    -1,   171,   172,    -1,    -1,    -1,    -1,
      -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,
     187,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    -1,    -1,    -1,    32,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    58,    59,    -1,    -1,    -1,    -1,    -1,   164,   165,
      -1,    -1,    -1,   169,    -1,    -1,   172,   173,   174,    -1,
     176,    -1,    -1,   179,   180,    14,    15,    16,    17,    18,
      -1,   187,    -1,   189,    -1,   191,   192,    26,   194,    -1,
     196,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,
      49,   118,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    -1,    -1,
      89,    90,    91,    92,    -1,    -1,    95,   164,   165,    -1,
      -1,    -1,   169,    -1,   171,   172,    -1,    -1,    -1,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    32,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    58,    59,
      -1,    -1,    -1,    -1,    -1,   164,   165,    -1,    -1,    -1,
     169,    -1,    -1,   172,   173,   174,    -1,   176,    -1,    -1,
     179,   180,    14,    15,    16,    17,    18,    -1,   187,    -1,
     189,    -1,   191,   192,    26,   194,    -1,   196,    -1,    32,
      32,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    46,    -1,    -1,    49,   118,    -1,
      -1,    53,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    95,   164,   165,    -1,    -1,    -1,   169,
      -1,    -1,   172,    -1,    -1,    -1,   108,   109,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,   187,    -1,   189,
      -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    32,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
     142,   143,   144,    -1,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    58,    59,    -1,    -1,    -1,
      -1,   164,   165,    -1,    -1,    -1,   169,   169,   171,   172,
     172,   173,   174,    -1,   176,    -1,    -1,   179,   180,    14,
      15,    16,    17,    18,   187,   187,    -1,   189,    -1,   191,
     192,    26,   194,   196,   196,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    -1,    -1,    49,   118,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      85,    86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,
      95,   164,   165,    -1,    -1,    -1,   169,    -1,   171,   172,
      -1,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,   187,    -1,    -1,    -1,   123,   124,
      -1,    -1,    -1,   196,    -1,    -1,    -1,   132,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,   172,   173,   174,
      -1,   176,    -1,    26,   179,   180,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,    38,   191,   192,   193,   194,
      43,    -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,   118,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    86,    -1,    -1,    89,    90,    91,    92,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   108,   109,    -1,    -1,    -1,
     164,   165,    -1,    -1,   117,   169,    -1,   171,   172,    -1,
     123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,   187,    -1,    -1,    -1,   140,   141,   142,
     143,   144,   196,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,    -1,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,   172,
     173,   174,    32,   176,    -1,    -1,   179,   180,    -1,    38,
      -1,    -1,    -1,    -1,    43,    -1,   189,    46,   191,   192,
      49,   194,    -1,    -1,    53,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    -1,    -1,
      89,    90,    91,    92,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    58,    59,
      -1,    -1,    -1,    -1,   164,   165,    -1,    -1,    -1,   169,
      -1,   171,   172,   172,   173,   174,    -1,   176,    -1,    -1,
     179,   180,    14,    15,    16,    17,    18,   187,   187,    -1,
     189,   190,   191,   192,    26,   194,   196,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    46,    -1,    -1,    49,   118,    -1,
      -1,    53,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    95,   164,   165,    -1,    -1,    -1,   169,
      -1,   171,   172,    -1,    -1,    -1,   108,   109,    32,    -1,
      -1,    -1,    -1,    -1,   117,   118,    -1,   187,    -1,    -1,
      -1,   123,   124,    -1,    -1,    -1,   196,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    58,    59,    -1,    -1,   140,   141,
     142,   143,   144,    -1,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    -1,    14,    15,    16,    17,
      18,   164,   165,    -1,    -1,    -1,   169,    -1,    26,   172,
     172,   173,   174,    32,   176,    -1,    -1,   179,   180,    -1,
      38,    -1,    -1,    -1,   187,    43,    -1,   189,    46,   191,
     192,    49,   194,   196,   118,    53,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    84,    85,    86,    -1,
      -1,    89,    90,    91,    92,    -1,    -1,    95,    -1,    -1,
     164,   165,    -1,    -1,    -1,   169,    -1,   171,   172,    -1,
     108,   109,    32,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,   187,    -1,   123,   124,    -1,    -1,    -1,
      -1,    -1,   196,    -1,   132,    -1,    -1,    -1,    58,    59,
      -1,    -1,   140,   141,   142,   143,   144,    -1,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,    -1,
      14,    15,    16,    17,    18,   164,   165,    -1,    -1,    -1,
     169,    -1,    26,   172,   172,   173,   174,    -1,   176,    -1,
      -1,   179,   180,    -1,    38,    -1,    -1,    -1,   187,    43,
      -1,   189,    46,   191,   192,    49,   194,   196,   118,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    -1,    -1,    89,    90,    91,    92,    -1,
      -1,    95,    -1,    -1,   164,   165,    -1,    -1,    -1,   169,
      -1,   171,   172,    -1,   108,   109,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,   123,
     124,    -1,    -1,    -1,    -1,    -1,   196,    -1,   132,    -1,
      -1,    -1,    58,    59,    -1,    -1,   140,   141,   142,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,   172,   173,
     174,    -1,   176,    -1,    -1,   179,   180,    -1,    38,    -1,
      -1,    -1,    -1,    43,    -1,   189,    46,   191,   192,    49,
     194,    -1,   118,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    -1,    -1,    89,
      90,    91,    92,    -1,    -1,    95,    -1,    -1,   164,   165,
      -1,    -1,    -1,   169,    -1,   171,   172,    -1,   108,   109,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    -1,   132,    -1,    -1,    -1,    58,    59,    -1,    -1,
     140,   141,   142,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    -1,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      26,    -1,   172,   173,   174,    -1,   176,    -1,    -1,   179,
     180,    -1,    38,    -1,    -1,    -1,    -1,    43,   188,   189,
      46,   191,   192,    49,   194,    -1,   118,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,    95,
      -1,    -1,   164,   165,    -1,    -1,    -1,   169,    -1,   171,
     172,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,   172,   173,   174,    -1,
     176,    -1,    -1,   179,   180,    -1,    38,    -1,    -1,    -1,
      -1,    43,    -1,   189,    46,   191,   192,    49,   194,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,   109,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
     142,   143,   144,    -1,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,   173,   174,    -1,   176,    -1,    -1,   179,   180,    14,
      15,    16,    17,    18,    -1,    -1,    -1,   189,   190,   191,
     192,    26,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      85,    86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,   172,   173,   174,
      -1,   176,    -1,    -1,   179,   180,    -1,    38,    -1,    -1,
      -1,    -1,    43,    -1,   189,    46,   191,   192,    49,   194,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    86,    -1,    -1,    89,    90,
      91,    92,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,   173,   174,    -1,   176,    -1,    -1,   179,   180,
      14,    15,    16,    17,    18,    -1,    -1,    -1,   189,   190,
     191,   192,    26,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    -1,    -1,    89,    90,    91,    92,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,   173,
     174,    -1,   176,    -1,    -1,   179,   180,    14,    15,    16,
      17,    18,    -1,    -1,    -1,   189,    -1,   191,   192,    26,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    84,    85,    86,
      -1,    -1,    89,    90,    91,    92,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,   173,   174,    -1,   176,
      -1,    -1,   179,   180,    14,    15,    16,    17,    18,    -1,
      -1,    -1,   189,   190,   191,   192,    26,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,    49,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    -1,    -1,    89,
      90,    91,    92,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,   142,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,   173,   174,    -1,   176,    -1,    -1,   179,
     180,    14,    15,    16,    17,    18,    -1,    -1,    -1,   189,
     190,   191,   192,    26,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    86,    -1,    -1,    89,    90,    91,    92,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
     173,   174,    -1,   176,    -1,    -1,   179,   180,    14,    15,
      16,    17,    18,    -1,    -1,    -1,   189,   190,   191,   192,
      26,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,    49,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   172,   173,   174,    -1,
     176,    -1,    -1,   179,   180,    14,    15,    16,    17,    18,
      -1,    -1,    -1,   189,   190,   191,   192,    26,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    -1,    -1,
      89,    90,    91,    92,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    -1,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,   172,   173,   174,    -1,   176,    -1,    -1,
     179,   180,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,
     189,    46,   191,   192,    49,   194,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      85,    86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,   174,
      -1,   176,    -1,    -1,   179,   180,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,    -1,   191,   192,    -1,   194,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    20,    21,    -1,   125,   126,   127,
     128,   129,   130,    -1,    -1,   133,   134,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,
      -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    20,    21,    -1,   125,
     126,   127,   128,   129,   130,    -1,    -1,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,   187,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    20,    21,
      -1,   125,   126,   127,   128,   129,   130,    -1,    -1,   133,
     134,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,   187,    -1,    -1,    -1,    -1,    -1,   193,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      20,    21,    -1,   125,   126,   127,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,   137,   138,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    20,    21,    -1,   125,   126,   127,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   164,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,   187,    -1,    -1,
      -1,    -1,    18,   193,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,   110,    20,    21,   113,   114,   115,   116,    -1,
     118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,
     128,    -1,    -1,    -1,    -1,   133,   134,   135,    64,    65,
      66,   139,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    -1,    -1,    89,    90,    91,    92,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,
      -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,   106,
     107,   108,   109,   110,    20,    21,   113,   114,   115,   116,
      -1,   118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,
     127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,   155,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,   186,
     187,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,
     106,   107,   108,   109,   110,    20,    21,   113,   114,   115,
     116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,   125,
      -1,   127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,
      64,    65,    66,   139,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    -1,    -1,    89,    90,    91,    92,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,   187,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,
      -1,   106,   107,   108,   109,   110,    20,    21,   113,   114,
     115,   116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,
     125,    -1,   127,   128,    -1,    -1,    -1,    -1,   133,   134,
     135,   155,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,   186,   187,    -1,    -1,   190,    -1,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,    20,    21,   113,
     114,   115,   116,    -1,   118,   119,   120,   121,    -1,    -1,
      -1,   125,    -1,   127,   128,    -1,    -1,    -1,    -1,   133,
     134,   135,    64,    65,    66,   139,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    -1,    -1,    89,    90,    91,
      92,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,   187,    -1,    -1,   190,    -1,    -1,    -1,
      -1,    -1,    -1,   106,   107,   108,   109,   110,    20,    21,
     113,   114,   115,   116,    -1,   118,   119,   120,   121,    -1,
      -1,    -1,   125,    -1,   127,   128,    -1,    -1,    -1,    -1,
     133,   134,   135,   155,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,   187,    -1,    -1,   190,    -1,    -1,
      -1,    -1,    -1,    -1,   106,   107,   108,   109,   110,    20,
      21,   113,   114,   115,   116,    -1,   118,   119,   120,   121,
      -1,    -1,    -1,   125,    -1,   127,   128,    -1,    -1,    -1,
      -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,   187,    -1,    -1,   190,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,   110,
      20,    21,   113,   114,   115,   116,    -1,   118,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,   187,    -1,    -1,   190,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,
     110,    20,    21,   113,   114,   115,   116,    -1,   118,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,
      -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,   187,    -1,    -1,
     190,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,
     109,   110,    20,    21,   113,   114,   115,   116,    -1,   118,
     119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,   128,
      -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,    -1,
      -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,   110,    20,    21,   113,   114,   115,   116,    -1,
     118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,
     128,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,
      -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,   106,
     107,   108,   109,   110,    20,    21,   113,   114,   115,   116,
      -1,   118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,
     127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
     187,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,
     106,   107,   108,   109,   110,    20,    21,   113,   114,   115,
     116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,   125,
      -1,   127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,   187,    -1,    -1,   190,    -1,    -1,    -1,    20,    21,
      -1,   106,   107,   108,   109,   110,    -1,    -1,   113,   114,
     115,   116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,
     125,    -1,   127,   128,    -1,    -1,    -1,    -1,   133,   134,
     135,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,   187,   188,   106,   107,   108,   109,   110,    20,
      21,   113,   114,   115,   116,    -1,   118,   119,   120,   121,
      -1,    -1,    -1,   125,    -1,   127,   128,    -1,    -1,    -1,
      -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,   187,   188,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,   106,   107,   108,   109,   110,
      -1,    -1,   113,   114,   115,   116,    -1,   118,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,   187,   188,   106,   107,
     108,   109,   110,    20,    21,   113,   114,   115,   116,    -1,
     118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,
     128,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,
     188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
     107,   108,   109,   110,    20,    21,   113,   114,   115,   116,
      -1,   118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,
     127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
     187,   188,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    20,    21,   125,
     126,   127,   128,   129,   130,    -1,    -1,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
      20,    21,   125,   126,   127,   128,   129,   130,    -1,    -1,
     133,   134,   135,   136,   137,   138,   139,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,   118,   119,
     120,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,    20,    21,   179,
     180,   106,   107,   108,   109,   110,   186,   187,   113,   114,
     115,   116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,
     125,    -1,   127,   128,    -1,    -1,   131,    -1,   133,   134,
     135,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,   187,   106,   107,   108,   109,   110,    -1,    -1,
     113,   114,   115,   116,    -1,   118,   119,   120,   121,    -1,
      -1,    -1,   125,    -1,   127,   128,    -1,    -1,    -1,    -1,
     133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,    20,    21,    -1,    -1,   106,   107,
     108,   109,   110,   186,   187,   113,   114,   115,   116,    -1,
     118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,
     128,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    -1,    -1,    -1,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,
     106,   107,   108,   109,   110,    -1,    -1,   113,   114,   115,
     116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,   125,
      -1,   127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,    20,    21,    -1,    -1,   106,   107,   108,   109,   110,
     186,   187,   113,   114,   115,   116,    -1,   118,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,   187,   106,   107,   108,
     109,   110,    -1,    -1,   113,   114,   115,   116,    -1,   118,
     119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,   128,
      -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    20,    21,
      -1,    -1,   106,   107,   108,   109,   110,   186,   187,   113,
     114,   115,   116,    -1,   118,   119,   120,   121,    -1,    -1,
      -1,   125,    -1,   127,   128,    -1,    20,    21,    -1,   133,
      -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,   187,   106,   107,   108,   109,   110,    -1,
      -1,   113,   114,   115,   116,    -1,   118,   119,   120,   121,
      -1,    20,    21,   125,    -1,   127,   128,    -1,    -1,    -1,
      -1,   133,   106,   107,   108,   109,   110,    -1,    -1,   113,
     114,   115,   116,    -1,   118,   119,   120,   121,    -1,    -1,
      -1,   125,    -1,   127,   128,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,    -1,    -1,    -1,    -1,   106,   107,    -1,
      -1,   110,   186,   187,   113,   114,   115,   116,    -1,   118,
     119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,   128,
      20,    21,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,
     139,   106,   107,   108,   109,   110,    -1,    -1,   113,   114,
     115,   116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,
     125,    -1,   127,   128,    -1,    -1,   165,    -1,   167,   168,
     169,   170,   171,    -1,    -1,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   169,   170,   171,   172,   173,   174,
     175,   176,    -1,    -1,    -1,    -1,   106,   107,   108,   109,
     110,   186,   187,   113,   114,   115,   116,    -1,   118,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,   171,   172,   173,   174,   175,   176,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,   187,    -1,    -1,
      -1,    -1,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,   155,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,   155,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,   148,    -1,    -1,    -1,    -1,    -1,    62,   155,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,   155,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   198,     0,     6,    29,    31,    33,    39,    48,    54,
      73,    94,   187,   193,   201,   209,   210,   214,   237,   241,
     258,   323,   329,   332,   338,   376,   379,    18,    19,   155,
     231,   232,   233,   149,   215,   216,   155,   176,   211,   212,
     155,   194,   326,   155,   191,   200,   380,   377,    33,    61,
     132,   155,   234,   235,   236,   250,     4,     5,     7,    35,
     336,    60,   321,   164,   163,   166,   163,   211,    21,    55,
     175,   186,   213,   327,   326,   328,   321,   155,   155,   155,
     132,   189,   163,   188,    55,    61,   242,   244,    55,    61,
     330,    55,    61,   337,    55,    61,   322,    14,    15,   149,
     153,   155,   156,   189,   203,   232,   149,   216,   155,   155,
     155,   164,   193,   195,   326,    55,    61,   199,   194,   378,
     155,   233,   235,   245,   155,   331,   339,   194,   324,   157,
     158,   202,    14,    15,   149,   153,   155,   203,   229,   230,
     213,    24,    30,    47,    62,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,   145,   250,   342,   344,
     345,   347,   351,   193,   155,   346,   194,   190,    34,   108,
     109,   155,   240,   243,   166,   194,    97,   334,   335,   319,
     146,   299,   157,   158,   159,   163,   190,   170,   170,   170,
     170,   189,   170,   170,   170,   170,   170,   170,   189,    32,
      58,    59,   118,   164,   165,   169,   172,   187,   196,   193,
     155,   312,   313,    20,    21,    37,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   118,   119,   120,   126,   127,   128,
     129,   130,   133,   134,   135,   136,   137,   138,   139,   165,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     179,   180,   186,   187,    34,    34,   189,   238,   194,   246,
      68,    72,    89,    90,    91,    92,   343,   325,   155,   340,
     195,   320,   233,   155,   318,   341,   229,   354,   356,   358,
     352,   155,   348,   360,   362,   364,   366,   368,   370,   372,
     374,    14,    15,    16,    17,    18,    26,    38,    43,    46,
      49,    53,    63,    73,    95,   108,   109,   140,   141,   142,
     143,   144,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   156,   172,   173,   174,   176,   179,   180,   189,   191,
     192,   205,   207,   246,   250,   252,   260,   267,   270,   273,
     277,   278,   281,   282,   283,   288,   291,   298,   342,   381,
     385,   390,   392,   394,    32,    32,   169,   187,   196,   188,
     291,   155,   195,   166,   193,   188,    21,   188,   190,   299,
     308,   309,   166,   239,   248,   194,   155,   195,   166,   333,
     194,   299,   188,    41,   163,   166,   169,   317,   351,   350,
     351,   351,   351,   190,   346,   351,   238,   351,   238,   351,
     238,   155,   310,   311,   351,   313,   351,   381,   189,   170,
     189,   170,   170,   189,   170,   189,   170,   291,   291,   189,
     189,   189,   189,   189,    12,   351,    12,   351,   291,   387,
     391,   204,   291,   291,   291,   250,   291,   291,   291,   192,
     155,   189,   237,    20,    21,   106,   107,   108,   109,   110,
     113,   114,   115,   116,   118,   119,   120,   121,   125,   127,
     128,   133,   134,   135,   139,   165,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   186,   187,   190,   189,
     188,   188,   351,   195,   312,    48,   315,   341,   190,   193,
     351,     1,     8,     9,    10,    12,    25,    27,    28,    37,
      40,    42,    50,    52,    56,    57,    63,    96,   123,   124,
     193,   195,   217,   218,   221,   222,   223,   224,   225,   226,
     227,   247,   249,   251,   253,   254,   255,   256,   257,   258,
     259,   279,   280,   291,   325,   164,   193,   250,   304,   318,
     188,   155,   155,   351,   117,   126,   164,   316,   171,   171,
     193,   171,   171,   171,   193,   171,   239,   171,   239,   171,
     239,   166,   171,   193,   171,   193,   189,   250,   268,   291,
     261,   263,   291,   265,   291,   351,   291,   291,   291,   291,
     291,   341,    51,   155,   172,   189,   291,   382,   383,   384,
     386,   387,   388,   389,   341,   189,   383,   389,   131,   193,
     195,   159,   160,   202,   208,   190,   170,   250,   187,   190,
     271,   291,   146,   276,    18,   155,   342,    18,   155,   342,
     291,   291,   291,   291,   291,   291,   155,   291,   155,   291,
     291,   291,   291,   291,   291,   291,   291,   291,    21,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     119,   120,   155,   186,   187,   289,   291,   190,   271,   315,
     117,   164,   166,   169,   314,   308,   291,   341,   117,   193,
     249,   279,   291,   246,   291,   291,   155,   193,   149,    56,
     291,   246,   117,   249,   291,   192,   277,   277,    36,   193,
     193,   291,   193,   193,   193,   318,   122,   193,    98,    99,
     100,   101,   102,   103,   104,   105,   111,   112,   117,   126,
     129,   130,   136,   137,   138,   164,   195,   291,   187,   195,
     237,   305,    41,   164,   193,   316,   249,   291,   355,   357,
     351,   359,   353,   349,   361,   171,   365,   171,   369,   171,
     351,   373,   310,   375,   190,   271,   170,   291,   351,   190,
     351,   351,   190,   351,   190,   171,   190,   190,   190,   190,
     190,    19,   277,   126,   314,   190,   163,   193,   384,   188,
     163,   188,   193,    19,   190,   384,   195,   291,   387,   195,
     291,   157,   206,   284,   286,   155,   382,   163,   190,   117,
     126,   164,   169,   274,   275,   238,   170,   170,   189,   188,
      18,   155,   342,   166,   155,   291,   155,   291,     1,   188,
     190,   351,   249,   291,   246,    19,   249,   291,   117,   164,
     193,    13,   246,   164,   166,   149,   249,   291,   193,   192,
     194,   246,   277,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   123,   124,   291,   291,   291,   291,   291,
     291,   291,   123,   124,   291,   193,   236,     7,   299,   303,
     155,   249,   291,   193,   363,   367,   371,   190,   155,   190,
     171,   171,   171,   171,   276,   271,   291,   291,   383,   384,
     155,   382,   188,   188,   291,   188,   388,   271,   383,   195,
     188,   161,   157,   351,   238,   188,   291,   155,   155,   155,
     155,   163,   188,   239,   292,   294,   190,   271,   170,   291,
     188,   188,   290,   164,   314,   271,   193,   246,   228,   193,
     248,    11,    22,    23,   219,   220,   291,   291,   291,   291,
     188,    55,    61,   302,    44,    97,   300,   193,   193,   171,
     193,   269,   262,   264,   266,   189,   193,   384,   188,   126,
     314,   188,   193,   384,   188,   171,   239,   190,   274,   188,
     131,   246,   272,   351,   351,   190,   296,   291,   193,   291,
     195,   246,   291,   193,    45,   300,   302,   291,   155,   291,
     291,   291,   190,   291,   291,   188,   188,   291,   291,   291,
     195,   285,   171,   117,   291,   171,   171,   351,   246,   246,
     306,    32,   301,   315,   190,   171,   190,   193,   393,   188,
     393,   188,   250,   287,   291,   293,   295,   171,   220,   243,
     307,   291,    51,   188,   195,   250,   297,   193,   243,   190,
     291,   188,   188,   246
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   197,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   199,   199,   199,   200,   200,
     201,   202,   202,   202,   202,   203,   204,   204,   204,   205,
     206,   206,   208,   207,   209,   210,   211,   211,   211,   211,
     212,   212,   213,   213,   214,   215,   215,   216,   216,   217,
     218,   218,   219,   219,   220,   220,   220,   221,   221,   222,
     223,   224,   225,   226,   228,   227,   229,   229,   229,   229,
     229,   229,   230,   230,   231,   231,   231,   232,   232,   232,
     232,   232,   232,   232,   232,   233,   233,   234,   234,   234,
     235,   235,   236,   236,   237,   237,   238,   238,   238,   239,
     239,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   241,   242,   242,   242,   243,
     245,   244,   246,   246,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   248,   248,   248,   249,   249,   249,
     250,   250,   250,   251,   252,   252,   252,   252,   253,   254,
     255,   255,   255,   255,   255,   256,   256,   256,   256,   257,
     258,   258,   259,   261,   262,   260,   263,   264,   260,   265,
     266,   260,   268,   269,   267,   270,   270,   270,   271,   271,
     272,   272,   272,   273,   273,   273,   274,   274,   274,   274,
     275,   275,   276,   276,   277,   277,   278,   278,   278,   278,
     278,   278,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   280,   280,   280,   280,   281,   282,   282,   283,   284,
     285,   283,   286,   287,   283,   288,   288,   289,   290,   288,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   292,
     293,   291,   291,   291,   291,   294,   295,   291,   291,   291,
     296,   297,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   298,   298,   298,   298,   298,
     299,   299,   300,   300,   300,   301,   301,   302,   302,   302,
     303,   304,   305,   304,   306,   304,   307,   304,   304,   308,
     308,   309,   309,   310,   310,   311,   311,   312,   313,   313,
     314,   314,   315,   315,   315,   315,   315,   315,   316,   316,
     316,   317,   317,   318,   318,   318,   318,   318,   319,   320,
     319,   321,   321,   322,   322,   322,   323,   324,   323,   325,
     325,   325,   327,   326,   328,   328,   329,   329,   330,   330,
     330,   331,   332,   332,   333,   333,   334,   334,   335,   336,
     336,   337,   337,   337,   339,   340,   338,   341,   341,   341,
     341,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   343,   343,   343,   343,
     343,   343,   344,   345,   345,   345,   346,   346,   348,   349,
     347,   350,   350,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     352,   353,   351,   351,   354,   355,   351,   356,   357,   351,
     358,   359,   351,   351,   360,   361,   351,   362,   363,   351,
     351,   364,   365,   351,   366,   367,   351,   351,   368,   369,
     351,   370,   371,   351,   372,   373,   351,   374,   375,   351,
     377,   378,   376,   380,   379,   381,   381,   381,   381,   382,
     382,   382,   382,   383,   383,   384,   384,   385,   385,   385,
     385,   385,   385,   386,   386,   387,   387,   388,   388,   389,
     389,   390,   390,   391,   391,   392,   393,   393,   394,   394
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     0,     1,     1,     1,     1,
       4,     1,     1,     2,     2,     3,     0,     2,     4,     3,
       1,     2,     0,     4,     2,     2,     1,     2,     3,     3,
       2,     4,     0,     1,     2,     1,     3,     1,     3,     3,
       3,     2,     1,     1,     0,     2,     4,     1,     1,     4,
       6,     2,     3,     3,     0,     5,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     4,     1,     3,     0,     3,     0,     2,     3,     0,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     0,     1,     1,     3,
       0,     4,     3,     7,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     2,     2,     2,     0,     2,     2,     3,     2,     2,
       1,     3,     2,     2,     2,     4,     5,     2,     1,     1,
       2,     3,     4,     2,     3,     3,     4,     2,     3,     4,
       1,     1,     2,     0,     0,     7,     0,     0,     7,     0,
       0,     7,     0,     0,     6,     5,     8,    10,     1,     3,
       1,     2,     3,     1,     1,     2,     2,     2,     2,     2,
       1,     3,     0,     4,     1,     6,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     4,     4,     6,     5,     6,     3,     0,
       0,     8,     0,     0,     9,     3,     4,     0,     0,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     4,     5,     4,     5,     3,     4,     1,     3,     4,
       3,     4,     2,     4,     4,     7,     8,     3,     5,     0,
       0,     8,     3,     3,     3,     0,     0,     8,     3,     4,
       0,     0,     9,     4,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     4,     4,     4,     4,     4,     4,
       0,     4,     0,     1,     1,     0,     1,     0,     1,     1,
       4,     0,     0,     4,     0,     8,     0,     9,     5,     2,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     2,     3,     5,     3,     3,     1,     1,
       1,     0,     1,     4,     6,     5,     5,     4,     0,     0,
       4,     0,     1,     0,     1,     1,     6,     0,     6,     0,
       3,     5,     0,     4,     2,     3,     4,     2,     0,     1,
       1,     1,     7,     9,     0,     2,     0,     1,     3,     1,
       1,     0,     1,     1,     0,     0,     9,     1,     3,     3,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     1,     3,     0,     0,
       6,     1,     3,     1,     1,     1,     1,     4,     3,     4,
       2,     2,     3,     2,     3,     2,     2,     3,     3,     2,
       0,     0,     6,     2,     0,     0,     6,     0,     0,     6,
       0,     0,     6,     1,     0,     0,     6,     0,     0,     7,
       1,     0,     0,     6,     0,     0,     7,     1,     0,     0,
       6,     0,     0,     7,     0,     0,     6,     0,     0,     6,
       0,     0,     8,     0,     7,     1,     1,     1,     1,     3,
       3,     5,     5,     1,     3,     0,     2,     6,     5,     7,
       8,     6,     8,     1,     3,     3,     1,     1,     1,     1,
       3,     5,     5,     1,     3,     4,     0,     3,    10,    10
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = DAS_YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == DAS_YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use DAS_YYerror or DAS_YYUNDEF. */
#define YYERRCODE DAS_YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if DAS_YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !DAS_YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !DAS_YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_NAME: /* "name"  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_module_name: /* module_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_character_sequence: /* character_sequence  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_string_constant: /* string_constant  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_string_builder_body: /* string_builder_body  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_string_builder: /* string_builder  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_reader: /* expr_reader  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_require_module_name: /* require_module_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_expression_label: /* expression_label  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_goto: /* expression_goto  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_else: /* expression_else  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_if_then_else: /* expression_if_then_else  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_for_loop: /* expression_for_loop  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_unsafe: /* expression_unsafe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_while_loop: /* expression_while_loop  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_with: /* expression_with  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_with_alias: /* expression_with_alias  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_annotation_argument_value: /* annotation_argument_value  */
            { delete ((*yyvaluep).aa); }
        break;

    case YYSYMBOL_annotation_argument_value_list: /* annotation_argument_value_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_annotation_argument_name: /* annotation_argument_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_annotation_argument: /* annotation_argument  */
            { delete ((*yyvaluep).aa); }
        break;

    case YYSYMBOL_annotation_argument_list: /* annotation_argument_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_annotation_declaration_name: /* annotation_declaration_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_annotation_declaration: /* annotation_declaration  */
            { delete ((*yyvaluep).fa); }
        break;

    case YYSYMBOL_annotation_list: /* annotation_list  */
            { delete ((*yyvaluep).faList); }
        break;

    case YYSYMBOL_optional_annotation_list: /* optional_annotation_list  */
            { delete ((*yyvaluep).faList); }
        break;

    case YYSYMBOL_optional_function_argument_list: /* optional_function_argument_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_optional_function_type: /* optional_function_type  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_function_name: /* function_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_expression_block: /* expression_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_any: /* expression_any  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expressions: /* expressions  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_pipe: /* expr_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_name_in_namespace: /* name_in_namespace  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_expression_delete: /* expression_delete  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_new: /* expr_new  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_break: /* expression_break  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_continue: /* expression_continue  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_return: /* expression_return  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_yield: /* expression_yield  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_try_catch: /* expression_try_catch  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_let: /* expression_let  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_cast: /* expr_cast  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_type_decl: /* expr_type_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_type_info: /* expr_type_info  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_block_or_simple_block: /* block_or_simple_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_capture_entry: /* capture_entry  */
            { delete ((*yyvaluep).pCapt); }
        break;

    case YYSYMBOL_capture_list: /* capture_list  */
            { delete ((*yyvaluep).pCaptList); }
        break;

    case YYSYMBOL_optional_capture_list: /* optional_capture_list  */
            { delete ((*yyvaluep).pCaptList); }
        break;

    case YYSYMBOL_expr_block: /* expr_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_numeric_const: /* expr_numeric_const  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_assign: /* expr_assign  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_assign_pipe: /* expr_assign_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_named_call: /* expr_named_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_method_call: /* expr_method_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_func_addr_expr: /* func_addr_expr  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_field: /* expr_field  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr: /* expr  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_mtag: /* expr_mtag  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_optional_field_annotation: /* optional_field_annotation  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_structure_variable_declaration: /* structure_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_struct_variable_declaration_list: /* struct_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_function_argument_declaration: /* function_argument_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_function_argument_list: /* function_argument_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_tuple_type: /* tuple_type  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_tuple_type_list: /* tuple_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variant_type: /* variant_type  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_variant_type_list: /* variant_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variable_declaration: /* variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_let_variable_declaration: /* let_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_global_variable_declaration_list: /* global_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_enum_list: /* enum_list  */
            { delete ((*yyvaluep).pEnum); }
        break;

    case YYSYMBOL_enum_name: /* enum_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_optional_structure_parent: /* optional_structure_parent  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_variable_name_with_pos_list: /* variable_name_with_pos_list  */
            { delete ((*yyvaluep).pNameWithPosList); }
        break;

    case YYSYMBOL_structure_type_declaration: /* structure_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_auto_type_declaration: /* auto_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_bitfield_bits: /* bitfield_bits  */
            { delete ((*yyvaluep).pNameList); }
        break;

    case YYSYMBOL_bitfield_type_declaration: /* bitfield_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_table_type_pair: /* table_type_pair  */
            { delete ((*yyvaluep).aTypePair).firstType; ((*yyvaluep).aTypePair).secondType; }
        break;

    case YYSYMBOL_type_declaration: /* type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_make_decl: /* make_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_struct_fields: /* make_struct_fields  */
            { delete ((*yyvaluep).pMakeStruct); }
        break;

    case YYSYMBOL_make_struct_dim: /* make_struct_dim  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_optional_block: /* optional_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_struct_decl: /* make_struct_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_tuple: /* make_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_map_tuple: /* make_map_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_any_tuple: /* make_any_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_dim: /* make_dim  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_dim_decl: /* make_dim_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_table: /* make_table  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_table_decl: /* make_table_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_array_comprehension_where: /* array_comprehension_where  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_array_comprehension: /* array_comprehension  */
            { delete ((*yyvaluep).pExpression); }
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = DAS_YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == DAS_YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= DAS_YYEOF)
    {
      yychar = DAS_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == DAS_YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = DAS_YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = DAS_YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 15: /* optional_public_or_private_module: %empty  */
                        { (yyval.b) = yyextra->g_Program->policies.default_module_public; }
    break;

  case 16: /* optional_public_or_private_module: "public"  */
                        { (yyval.b) = true; }
    break;

  case 17: /* optional_public_or_private_module: "private"  */
                        { (yyval.b) = false; }
    break;

  case 18: /* module_name: '$'  */
                    { (yyval.s) = new string("$"); }
    break;

  case 19: /* module_name: "name"  */
                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 20: /* module_declaration: "module" module_name optional_shared optional_public_or_private_module  */
                                                                                                      {
        yyextra->g_Program->thisModuleName = *(yyvsp[-2].s);
        yyextra->g_Program->thisModule->isPublic = (yyvsp[0].b);
        yyextra->g_Program->thisModule->isModule = true;
        if ( yyextra->g_Program->thisModule->name.empty() ) {
            yyextra->g_Program->thisModule->name = *(yyvsp[-2].s);
        } else if ( yyextra->g_Program->thisModule->name != *(yyvsp[-2].s) ){
            das_yyerror(scanner,"this module already has a name " + yyextra->g_Program->thisModule->name,tokAt(scanner,(yylsp[-2])),
                CompilationError::module_already_has_a_name);
        }
        if ( !yyextra->g_Program->policies.ignore_shared_modules ) {
            yyextra->g_Program->promoteToBuiltin = (yyvsp[-1].b);
        }
        delete (yyvsp[-2].s);
    }
    break;

  case 21: /* character_sequence: STRING_CHARACTER  */
                                                            { (yyval.s) = new string(); *(yyval.s) += (yyvsp[0].ch); }
    break;

  case 22: /* character_sequence: STRING_CHARACTER_ESC  */
                                                            { (yyval.s) = new string(); *(yyval.s) += "\\\\"; }
    break;

  case 23: /* character_sequence: character_sequence STRING_CHARACTER  */
                                                            { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += (yyvsp[0].ch); }
    break;

  case 24: /* character_sequence: character_sequence STRING_CHARACTER_ESC  */
                                                            { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += "\\\\"; }
    break;

  case 25: /* string_constant: "start of the string" character_sequence "end of the string"  */
                                                           { (yyval.s) = (yyvsp[-1].s); }
    break;

  case 26: /* string_builder_body: %empty  */
        {
        (yyval.pExpression) = new ExprStringBuilder();
        (yyval.pExpression)->at = LineInfo(yyextra->g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
    break;

  case 27: /* string_builder_body: string_builder_body character_sequence  */
                                                           {
        bool err;
        auto esconst = unescapeString(*(yyvsp[0].s),&err);
        if ( err ) das_yyerror(scanner,"invalid escape sequence",tokAt(scanner,(yylsp[-1])), CompilationError::invalid_escape_sequence);
        auto sc = make_smart<ExprConstString>(tokAt(scanner,(yylsp[0])),esconst);
        delete (yyvsp[0].s);
        static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression))->elements.push_back(sc);
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 28: /* string_builder_body: string_builder_body "{" expr "}"  */
                                                                                {
        auto se = ExpressionPtr((yyvsp[-1].pExpression));
        static_cast<ExprStringBuilder *>((yyvsp[-3].pExpression))->elements.push_back(se);
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
    break;

  case 29: /* string_builder: "start of the string" string_builder_body "end of the string"  */
                                                                   {
        auto strb = static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression));
        if ( strb->elements.size()==0 ) {
            (yyval.pExpression) = new ExprConstString(tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),"");
            delete (yyvsp[-1].pExpression);
        } else if ( strb->elements.size()==1 && strb->elements[0]->rtti_isStringConstant() ) {
            auto sconst = static_pointer_cast<ExprConstString>(strb->elements[0]);
            (yyval.pExpression) = new ExprConstString(tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),sconst->text);
            delete (yyvsp[-1].pExpression);
        } else {
            (yyval.pExpression) = (yyvsp[-1].pExpression);
        }
    }
    break;

  case 30: /* reader_character_sequence: STRING_CHARACTER  */
                               {
        if ( !yyextra->g_ReaderMacro->accept(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, (yyvsp[0].ch), tokAt(scanner,(yylsp[0]))) ) {
            das_yyend_reader(scanner);
        }
    }
    break;

  case 31: /* reader_character_sequence: reader_character_sequence STRING_CHARACTER  */
                                                                {
        if ( !yyextra->g_ReaderMacro->accept(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, (yyvsp[0].ch), tokAt(scanner,(yylsp[0]))) ) {
            das_yyend_reader(scanner);
        }
    }
    break;

  case 32: /* $@1: %empty  */
                                        {
        auto macros = yyextra->g_Program->getReaderMacro(*(yyvsp[0].s));
        if ( macros.size()==0 ) {
            das_yyerror(scanner,"reader macro " + *(yyvsp[0].s) + " not found",tokAt(scanner,(yylsp[0])),
                CompilationError::unsupported_read_macro);
        } else if ( macros.size()>1 ) {
            string options;
            for ( auto & x : macros ) {
                options += "\t" + x->module->name + "::" + x->name + "\n";
            }
            das_yyerror(scanner,"too many options for the reader macro " + *(yyvsp[0].s) +  "\n" + options, tokAt(scanner,(yylsp[0])),
                CompilationError::unsupported_read_macro);
        } else if ( yychar != '~' ) {
            das_yyerror(scanner,"expecting ~ after the reader macro", tokAt(scanner,(yylsp[0])),
                CompilationError::syntax_error);
        } else {
            yyextra->g_ReaderMacro = macros.back().get();
            yyextra->g_ReaderExpr = new ExprReader(tokAt(scanner,(yylsp[-1])),yyextra->g_ReaderMacro);
            yyclearin ;
            das_yybegin_reader(scanner);
        }
    }
    break;

  case 33: /* expr_reader: '%' name_in_namespace $@1 reader_character_sequence  */
                                     {
        yyextra->g_ReaderExpr->at = tokRangeAt(scanner,(yylsp[-3]),(yylsp[0]));
        (yyval.pExpression) = yyextra->g_ReaderExpr;
        delete (yyvsp[-2].s);
        yyextra->g_ReaderMacro = nullptr;
        yyextra->g_ReaderExpr = nullptr;
    }
    break;

  case 34: /* options_declaration: "options" annotation_argument_list  */
                                                   {
        if ( yyextra->g_Program->options.size() ) {
            yyextra->g_Program->options.insert ( yyextra->g_Program->options.begin(),
                (yyvsp[0].aaList)->begin(), (yyvsp[0].aaList)->end() );
        } else {
            swap ( yyextra->g_Program->options, *(yyvsp[0].aaList) );
        }
        auto opt = yyextra->g_Program->options.find("indenting", tInt);
        if (opt)
        {
            if (opt->iValue != 0 && opt->iValue != 2 && opt->iValue != 4 && opt->iValue != 8)//this is error
                yyextra->das_tab_size = yyextra->das_def_tab_size;
            else
                yyextra->das_tab_size = opt->iValue ? opt->iValue : yyextra->das_def_tab_size;//0 is default
            yyextra->g_FileAccessStack.back()->tabSize = yyextra->das_tab_size;
        }
        delete (yyvsp[0].aaList);
    }
    break;

  case 36: /* require_module_name: "name"  */
                   {
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 37: /* require_module_name: '%' require_module_name  */
                                     {
        *(yyvsp[0].s) = "%" + *(yyvsp[0].s);
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 38: /* require_module_name: require_module_name '.' "name"  */
                                                {
        *(yyvsp[-2].s) += ".";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
    break;

  case 39: /* require_module_name: require_module_name '/' "name"  */
                                                {
        *(yyvsp[-2].s) += "/";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
    break;

  case 40: /* require_module: require_module_name is_public_module  */
                                                         {
        ast_requireModule(scanner,(yyvsp[-1].s),nullptr,(yyvsp[0].b),tokAt(scanner,(yylsp[-1])));
    }
    break;

  case 41: /* require_module: require_module_name "as" "name" is_public_module  */
                                                                              {
        ast_requireModule(scanner,(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].b),tokAt(scanner,(yylsp[-3])));
    }
    break;

  case 42: /* is_public_module: %empty  */
                    { (yyval.b) = false; }
    break;

  case 43: /* is_public_module: "public"  */
                    { (yyval.b) = true; }
    break;

  case 47: /* expect_error: "integer constant"  */
                   {
        yyextra->g_Program->expectErrors[CompilationError((yyvsp[0].i))] ++;
    }
    break;

  case 48: /* expect_error: "integer constant" ':' "integer constant"  */
                                      {
        yyextra->g_Program->expectErrors[CompilationError((yyvsp[-2].i))] += (yyvsp[0].i);
    }
    break;

  case 49: /* expression_label: "label" "integer constant" ':'  */
                                          {
        (yyval.pExpression) = new ExprLabel(tokAt(scanner,(yylsp[-2])),(yyvsp[-1].i));
    }
    break;

  case 50: /* expression_goto: "goto" "label" "integer constant"  */
                                                {
        (yyval.pExpression) = new ExprGoto(tokAt(scanner,(yylsp[-2])),(yyvsp[0].i));
    }
    break;

  case 51: /* expression_goto: "goto" expr  */
                               {
        (yyval.pExpression) = new ExprGoto(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 52: /* elif_or_static_elif: "elif"  */
                          { (yyval.b) = false; }
    break;

  case 53: /* elif_or_static_elif: "static_elif"  */
                          { (yyval.b) = true; }
    break;

  case 54: /* expression_else: %empty  */
                                                           { (yyval.pExpression) = nullptr; }
    break;

  case 55: /* expression_else: "else" expression_block  */
                                                           { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 56: /* expression_else: elif_or_static_elif expr expression_block expression_else  */
                                                                                          {
        auto eite = new ExprIfThenElse(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-3].b);
        (yyval.pExpression) = eite;
    }
    break;

  case 57: /* if_or_static_if: "if"  */
                        { (yyval.b) = false; }
    break;

  case 58: /* if_or_static_if: "static_if"  */
                        { (yyval.b) = true; }
    break;

  case 59: /* expression_if_then_else: if_or_static_if expr expression_block expression_else  */
                                                                                      {
        auto eite = new ExprIfThenElse(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-3].b);
        (yyval.pExpression) = eite;
    }
    break;

  case 60: /* expression_for_loop: "for" variable_name_with_pos_list "in" expr_list ';' expression_block  */
                                                                                                           {
        (yyval.pExpression) = ast_forLoop(scanner,(yyvsp[-4].pNameWithPosList),(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-5])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 61: /* expression_unsafe: "unsafe" expression_block  */
                                                 {
        auto pUnsafe = new ExprUnsafe(tokAt(scanner,(yylsp[-1])));
        pUnsafe->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pUnsafe;
    }
    break;

  case 62: /* expression_while_loop: "while" expr expression_block  */
                                                               {
        auto pWhile = new ExprWhile(tokAt(scanner,(yylsp[-2])));
        pWhile->cond = ExpressionPtr((yyvsp[-1].pExpression));
        pWhile->body = ExpressionPtr((yyvsp[0].pExpression));
        ((ExprBlock *)(yyvsp[0].pExpression))->inTheLoop = true;
        (yyval.pExpression) = pWhile;
    }
    break;

  case 63: /* expression_with: "with" expr expression_block  */
                                                         {
        auto pWith = new ExprWith(tokAt(scanner,(yylsp[-2])));
        pWith->with = ExpressionPtr((yyvsp[-1].pExpression));
        pWith->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pWith;
    }
    break;

  case 64: /* $@2: %empty  */
                                        { yyextra->das_need_oxford_comma=true; }
    break;

  case 65: /* expression_with_alias: "assume" "name" '=' $@2 expr  */
                                                                                               {
        (yyval.pExpression) = new ExprAssume(tokAt(scanner,(yylsp[-4])), *(yyvsp[-3].s), (yyvsp[0].pExpression) );
        delete (yyvsp[-3].s);
    }
    break;

  case 66: /* annotation_argument_value: string_constant  */
                                 { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 67: /* annotation_argument_value: "name"  */
                                 { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 68: /* annotation_argument_value: "integer constant"  */
                                 { (yyval.aa) = new AnnotationArgument("",(yyvsp[0].i)); }
    break;

  case 69: /* annotation_argument_value: "floating point constant"  */
                                 { (yyval.aa) = new AnnotationArgument("",float((yyvsp[0].fd))); }
    break;

  case 70: /* annotation_argument_value: "true"  */
                                 { (yyval.aa) = new AnnotationArgument("",true); }
    break;

  case 71: /* annotation_argument_value: "false"  */
                                 { (yyval.aa) = new AnnotationArgument("",false); }
    break;

  case 72: /* annotation_argument_value_list: annotation_argument_value  */
                                       {
        (yyval.aaList) = new AnnotationArgumentList();
        (yyval.aaList)->push_back(*(yyvsp[0].aa));
        delete (yyvsp[0].aa);
    }
    break;

  case 73: /* annotation_argument_value_list: annotation_argument_value_list ',' annotation_argument_value  */
                                                                                {
            (yyval.aaList) = (yyvsp[-2].aaList);
            (yyval.aaList)->push_back(*(yyvsp[0].aa));
            delete (yyvsp[0].aa);
    }
    break;

  case 74: /* annotation_argument_name: "name"  */
                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 75: /* annotation_argument_name: "type"  */
                    { (yyval.s) = new string("type"); }
    break;

  case 76: /* annotation_argument_name: "in"  */
                    { (yyval.s) = new string("in"); }
    break;

  case 77: /* annotation_argument: annotation_argument_name '=' string_constant  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
    break;

  case 78: /* annotation_argument: annotation_argument_name '=' "name"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
    break;

  case 79: /* annotation_argument: annotation_argument_name '=' "integer constant"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),(yyvsp[0].i),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 80: /* annotation_argument: annotation_argument_name '=' "floating point constant"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),float((yyvsp[0].fd)),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 81: /* annotation_argument: annotation_argument_name '=' "true"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),true,tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 82: /* annotation_argument: annotation_argument_name '=' "false"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),false,tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 83: /* annotation_argument: annotation_argument_name  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[0].s),true,tokAt(scanner,(yylsp[0]))); delete (yyvsp[0].s); }
    break;

  case 84: /* annotation_argument: annotation_argument_name '=' '(' annotation_argument_value_list ')'  */
                                                                                          {
        { (yyval.aa) = new AnnotationArgument(*(yyvsp[-4].s),(yyvsp[-1].aaList),tokAt(scanner,(yylsp[-4]))); delete (yyvsp[-4].s); }
    }
    break;

  case 85: /* annotation_argument_list: annotation_argument  */
                                  {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,new AnnotationArgumentList(),(yyvsp[0].aa));
    }
    break;

  case 86: /* annotation_argument_list: annotation_argument_list ',' annotation_argument  */
                                                                    {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,(yyvsp[-2].aaList),(yyvsp[0].aa));
    }
    break;

  case 87: /* annotation_declaration_name: name_in_namespace  */
                                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 88: /* annotation_declaration_name: "require"  */
                                    { (yyval.s) = new string("require"); }
    break;

  case 89: /* annotation_declaration_name: "private"  */
                                    { (yyval.s) = new string("private"); }
    break;

  case 90: /* annotation_declaration: annotation_declaration_name  */
                                          {
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner,(yylsp[0]));
        if ( auto ann = findAnnotation(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0]))) ) {
            (yyval.fa)->annotation = ann;
        }
        delete (yyvsp[0].s);
    }
    break;

  case 91: /* annotation_declaration: annotation_declaration_name '(' annotation_argument_list ')'  */
                                                                                 {
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner,(yylsp[-3]));
        if ( auto ann = findAnnotation(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3]))) ) {
            (yyval.fa)->annotation = ann;
        }
        swap ( (yyval.fa)->arguments, *(yyvsp[-1].aaList) );
        delete (yyvsp[-1].aaList);
        delete (yyvsp[-3].s);
    }
    break;

  case 92: /* annotation_list: annotation_declaration  */
                                    {
            (yyval.faList) = new AnnotationList();
            (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
    break;

  case 93: /* annotation_list: annotation_list ',' annotation_declaration  */
                                                              {
        (yyval.faList) = (yyvsp[-2].faList);
        (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
    break;

  case 94: /* optional_annotation_list: %empty  */
                                        { (yyval.faList) = nullptr; }
    break;

  case 95: /* optional_annotation_list: '[' annotation_list ']'  */
                                        { (yyval.faList) = (yyvsp[-1].faList); }
    break;

  case 96: /* optional_function_argument_list: %empty  */
                                                { (yyval.pVarDeclList) = nullptr; }
    break;

  case 97: /* optional_function_argument_list: '(' ')'  */
                                                { (yyval.pVarDeclList) = nullptr; }
    break;

  case 98: /* optional_function_argument_list: '(' function_argument_list ')'  */
                                                { (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList); }
    break;

  case 99: /* optional_function_type: %empty  */
        {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
    }
    break;

  case 100: /* optional_function_type: ':' type_declaration  */
                                        {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 101: /* function_name: "name"  */
                          {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 102: /* function_name: "operator" '!'  */
                             { (yyval.s) = new string("!"); }
    break;

  case 103: /* function_name: "operator" '~'  */
                             { (yyval.s) = new string("~"); }
    break;

  case 104: /* function_name: "operator" "+="  */
                             { (yyval.s) = new string("+="); }
    break;

  case 105: /* function_name: "operator" "-="  */
                             { (yyval.s) = new string("-="); }
    break;

  case 106: /* function_name: "operator" "*="  */
                             { (yyval.s) = new string("*="); }
    break;

  case 107: /* function_name: "operator" "/="  */
                             { (yyval.s) = new string("/="); }
    break;

  case 108: /* function_name: "operator" "%="  */
                             { (yyval.s) = new string("%="); }
    break;

  case 109: /* function_name: "operator" "&="  */
                             { (yyval.s) = new string("&="); }
    break;

  case 110: /* function_name: "operator" "|="  */
                             { (yyval.s) = new string("|="); }
    break;

  case 111: /* function_name: "operator" "^="  */
                             { (yyval.s) = new string("^="); }
    break;

  case 112: /* function_name: "operator" "&&="  */
                                { (yyval.s) = new string("&&="); }
    break;

  case 113: /* function_name: "operator" "||="  */
                                { (yyval.s) = new string("||="); }
    break;

  case 114: /* function_name: "operator" "^^="  */
                                { (yyval.s) = new string("^^="); }
    break;

  case 115: /* function_name: "operator" "&&"  */
                             { (yyval.s) = new string("&&"); }
    break;

  case 116: /* function_name: "operator" "||"  */
                             { (yyval.s) = new string("||"); }
    break;

  case 117: /* function_name: "operator" "^^"  */
                             { (yyval.s) = new string("^^"); }
    break;

  case 118: /* function_name: "operator" '+'  */
                             { (yyval.s) = new string("+"); }
    break;

  case 119: /* function_name: "operator" '-'  */
                             { (yyval.s) = new string("-"); }
    break;

  case 120: /* function_name: "operator" '*'  */
                             { (yyval.s) = new string("*"); }
    break;

  case 121: /* function_name: "operator" '/'  */
                             { (yyval.s) = new string("/"); }
    break;

  case 122: /* function_name: "operator" '%'  */
                             { (yyval.s) = new string("%"); }
    break;

  case 123: /* function_name: "operator" '<'  */
                             { (yyval.s) = new string("<"); }
    break;

  case 124: /* function_name: "operator" '>'  */
                             { (yyval.s) = new string(">"); }
    break;

  case 125: /* function_name: "operator" ".."  */
                             { (yyval.s) = new string("interval"); }
    break;

  case 126: /* function_name: "operator" "=="  */
                             { (yyval.s) = new string("=="); }
    break;

  case 127: /* function_name: "operator" "!="  */
                             { (yyval.s) = new string("!="); }
    break;

  case 128: /* function_name: "operator" "<="  */
                             { (yyval.s) = new string("<="); }
    break;

  case 129: /* function_name: "operator" ">="  */
                             { (yyval.s) = new string(">="); }
    break;

  case 130: /* function_name: "operator" '&'  */
                             { (yyval.s) = new string("&"); }
    break;

  case 131: /* function_name: "operator" '|'  */
                             { (yyval.s) = new string("|"); }
    break;

  case 132: /* function_name: "operator" '^'  */
                             { (yyval.s) = new string("^"); }
    break;

  case 133: /* function_name: "++" "operator"  */
                             { (yyval.s) = new string("++"); }
    break;

  case 134: /* function_name: "--" "operator"  */
                             { (yyval.s) = new string("--"); }
    break;

  case 135: /* function_name: "operator" "++"  */
                             { (yyval.s) = new string("+++"); }
    break;

  case 136: /* function_name: "operator" "--"  */
                             { (yyval.s) = new string("---"); }
    break;

  case 137: /* function_name: "operator" "<<"  */
                             { (yyval.s) = new string("<<"); }
    break;

  case 138: /* function_name: "operator" ">>"  */
                             { (yyval.s) = new string(">>"); }
    break;

  case 139: /* function_name: "operator" "<<="  */
                             { (yyval.s) = new string("<<="); }
    break;

  case 140: /* function_name: "operator" ">>="  */
                             { (yyval.s) = new string(">>="); }
    break;

  case 141: /* function_name: "operator" "<<<"  */
                             { (yyval.s) = new string("<<<"); }
    break;

  case 142: /* function_name: "operator" ">>>"  */
                             { (yyval.s) = new string(">>>"); }
    break;

  case 143: /* function_name: "operator" "<<<="  */
                             { (yyval.s) = new string("<<<="); }
    break;

  case 144: /* function_name: "operator" ">>>="  */
                             { (yyval.s) = new string(">>>="); }
    break;

  case 145: /* function_name: "operator" '[' ']'  */
                             { (yyval.s) = new string("[]"); }
    break;

  case 146: /* function_name: "operator" "?[" ']'  */
                                { (yyval.s) = new string("?[]"); }
    break;

  case 147: /* function_name: "operator" '.'  */
                             { (yyval.s) = new string("."); }
    break;

  case 148: /* function_name: "operator" "?."  */
                             { (yyval.s) = new string("?."); }
    break;

  case 149: /* function_name: "operator" ":="  */
                                { (yyval.s) = new string("clone"); }
    break;

  case 150: /* function_name: "operator" "delete"  */
                                { (yyval.s) = new string("finalize"); }
    break;

  case 151: /* function_name: "operator" "??"  */
                           { (yyval.s) = new string("??"); }
    break;

  case 152: /* function_name: "operator" "is"  */
                            { (yyval.s) = new string("`is"); }
    break;

  case 153: /* function_name: "operator" "as"  */
                            { (yyval.s) = new string("`as"); }
    break;

  case 154: /* function_name: "operator" '?' "as"  */
                                { (yyval.s) = new string("?as"); }
    break;

  case 155: /* global_function_declaration: optional_annotation_list "def" function_declaration  */
                                                                                {
        (yyvsp[0].pFuncDecl)->atDecl = tokRangeAt(scanner,(yylsp[-1]),(yylsp[0]));
        assignDefaultArguments((yyvsp[0].pFuncDecl));
        runFunctionAnnotations(scanner, (yyvsp[0].pFuncDecl), (yyvsp[-2].faList), tokAt(scanner,(yylsp[-2])));
        if ( (yyvsp[0].pFuncDecl)->isGeneric() ) {
            if ( !yyextra->g_Program->addGeneric((yyvsp[0].pFuncDecl)) ) {
                das_yyerror(scanner,"generic function is already defined " +
                    (yyvsp[0].pFuncDecl)->getMangledName(),(yyvsp[0].pFuncDecl)->at,
                        CompilationError::function_already_declared);
            }
        } else {
            if ( !yyextra->g_Program->addFunction((yyvsp[0].pFuncDecl)) ) {
                das_yyerror(scanner,"function is already defined " +
                    (yyvsp[0].pFuncDecl)->getMangledName(),(yyvsp[0].pFuncDecl)->at,
                        CompilationError::function_already_declared);
            }
        }
        (yyvsp[0].pFuncDecl)->delRef();
    }
    break;

  case 156: /* optional_public_or_private_function: %empty  */
                        { (yyval.b) = yyextra->g_thisStructure ? !yyextra->g_thisStructure->privateStructure : yyextra->g_Program->thisModule->isPublic; }
    break;

  case 157: /* optional_public_or_private_function: "private"  */
                        { (yyval.b) = false; }
    break;

  case 158: /* optional_public_or_private_function: "public"  */
                        { (yyval.b) = true; }
    break;

  case 159: /* function_declaration_header: function_name optional_function_argument_list optional_function_type  */
                                                                                                {
        (yyval.pFuncDecl) = ast_functionDeclarationHeader(scanner,(yyvsp[-2].s),(yyvsp[-1].pVarDeclList),(yyvsp[0].pTypeDecl),tokAt(scanner,(yylsp[-2])));
    }
    break;

  case 160: /* $@3: %empty  */
                                                     {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
        }
    }
    break;

  case 161: /* function_declaration: optional_public_or_private_function $@3 function_declaration_header expression_block  */
                                                                {
        (yyvsp[-1].pFuncDecl)->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyvsp[-1].pFuncDecl)->privateFunction = !(yyvsp[-3].b);
        (yyval.pFuncDecl) = (yyvsp[-1].pFuncDecl);
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
        }
    }
    break;

  case 162: /* expression_block: '{' expressions '}'  */
                                                   {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        (yyval.pExpression)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
    }
    break;

  case 163: /* expression_block: '{' expressions '}' "finally" '{' expressions '}'  */
                                                                                          {
        auto pB = (ExprBlock *) (yyvsp[-5].pExpression);
        auto pF = (ExprBlock *) (yyvsp[-1].pExpression);
        swap ( pB->finalList, pF->list );
        (yyval.pExpression) = (yyvsp[-5].pExpression);
        (yyval.pExpression)->at = tokRangeAt(scanner,(yylsp[-6]),(yylsp[0]));
        delete (yyvsp[-1].pExpression);
    }
    break;

  case 164: /* expression_any: ';'  */
                                            { (yyval.pExpression) = nullptr; }
    break;

  case 165: /* expression_any: expr_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 166: /* expression_any: expr_assign_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 167: /* expression_any: expr_assign ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 168: /* expression_any: expression_delete ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 169: /* expression_any: expression_let  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 170: /* expression_any: expression_while_loop  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 171: /* expression_any: expression_unsafe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 172: /* expression_any: expression_with  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 173: /* expression_any: expression_with_alias  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 174: /* expression_any: expression_for_loop  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 175: /* expression_any: expression_break ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 176: /* expression_any: expression_continue ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 177: /* expression_any: expression_return  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 178: /* expression_any: expression_yield  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 179: /* expression_any: expression_if_then_else  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 180: /* expression_any: expression_try_catch  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 181: /* expression_any: expression_label ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 182: /* expression_any: expression_goto ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 183: /* expression_any: "pass" ';'  */
                                            { (yyval.pExpression) = nullptr; }
    break;

  case 184: /* expressions: %empty  */
        {
        (yyval.pExpression) = new ExprBlock();
        (yyval.pExpression)->at = LineInfo(yyextra->g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
    break;

  case 185: /* expressions: expressions expression_any  */
                                                        {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        if ( (yyvsp[0].pExpression) ) {
            static_cast<ExprBlock*>((yyvsp[-1].pExpression))->list.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        }
    }
    break;

  case 186: /* expressions: expressions error  */
                                 {
        delete (yyvsp[-1].pExpression); (yyval.pExpression) = nullptr; YYABORT;
    }
    break;

  case 187: /* expr_pipe: expr_assign " <|" expr_block  */
                                                        {
        Expression * pipeCall = (yyvsp[-2].pExpression)->tail();
        if ( pipeCall->rtti_isCallLikeExpr() ) {
            auto pCall = (ExprLooksLikeCall *) pipeCall;
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else if ( pipeCall->rtti_isVar() ) {
            // a += b <| c
            auto pVar = (ExprVar *) pipeCall;
            auto pCall = yyextra->g_Program->makeCall(pVar->at,pVar->name);
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            if ( !(yyvsp[-2].pExpression)->swap_tail(pVar,pCall) ) {
                delete pVar;
                (yyval.pExpression) = pCall;
            } else {
                (yyval.pExpression) = (yyvsp[-2].pExpression);
            }
        } else if ( pipeCall->rtti_isMakeStruct() ) {
            auto pMS = (ExprMakeStruct *) pipeCall;
            if ( pMS->block ) {
                das_yyerror(scanner,"can't pipe into [[ make structure ]]. it already has where closure",
                    tokAt(scanner,(yylsp[-1])),CompilationError::cant_pipe);
                delete (yyvsp[0].pExpression);
            } else {
                pMS->block = (yyvsp[0].pExpression);
            }
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else {
            das_yyerror(scanner,"can only pipe into function call or [[ make structure ]]",
                tokAt(scanner,(yylsp[-1])),CompilationError::cant_pipe);
            delete (yyvsp[0].pExpression);
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        }
    }
    break;

  case 188: /* expr_pipe: "@ <|" expr_block  */
                               {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 189: /* expr_pipe: "@@ <|" expr_block  */
                               {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 190: /* name_in_namespace: "name"  */
                                               { (yyval.s) = (yyvsp[0].s); }
    break;

  case 191: /* name_in_namespace: "name" "::" "name"  */
                                               {
            auto ita = yyextra->das_module_alias.find(*(yyvsp[-2].s));
            if ( ita == yyextra->das_module_alias.end() ) {
                *(yyvsp[-2].s) += "::";
            } else {
                *(yyvsp[-2].s) = ita->second + "::";
            }
            *(yyvsp[-2].s) += *(yyvsp[0].s);
            delete (yyvsp[0].s);
            (yyval.s) = (yyvsp[-2].s);
        }
    break;

  case 192: /* name_in_namespace: "::" "name"  */
                                               { *(yyvsp[0].s) = "::" + *(yyvsp[0].s); (yyval.s) = (yyvsp[0].s); }
    break;

  case 193: /* expression_delete: "delete" expr  */
                                      {
        (yyval.pExpression) = new ExprDelete(tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 194: /* expr_new: "new" type_declaration  */
                                                   {
        (yyval.pExpression) = new ExprNew(tokAt(scanner,(yylsp[-1])),TypeDeclPtr((yyvsp[0].pTypeDecl)),false);
    }
    break;

  case 195: /* expr_new: "new" type_declaration '(' ')'  */
                                                           {
        (yyval.pExpression) = new ExprNew(tokAt(scanner,(yylsp[-3])),TypeDeclPtr((yyvsp[-2].pTypeDecl)),true);
    }
    break;

  case 196: /* expr_new: "new" type_declaration '(' expr_list ')'  */
                                                                                {
        auto pNew = new ExprNew(tokAt(scanner,(yylsp[-4])),TypeDeclPtr((yyvsp[-3].pTypeDecl)),true);
        (yyval.pExpression) = parseFunctionArguments(pNew,(yyvsp[-1].pExpression));
    }
    break;

  case 197: /* expr_new: "new" make_decl  */
                                    {
        (yyval.pExpression) = new ExprAscend(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 198: /* expression_break: "break"  */
                       { (yyval.pExpression) = new ExprBreak(tokAt(scanner,(yylsp[0]))); }
    break;

  case 199: /* expression_continue: "continue"  */
                          { (yyval.pExpression) = new ExprContinue(tokAt(scanner,(yylsp[0]))); }
    break;

  case 200: /* expression_return: "return" ';'  */
                            {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-1])),nullptr);
    }
    break;

  case 201: /* expression_return: "return" expr ';'  */
                                          {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-1].pExpression)));
    }
    break;

  case 202: /* expression_return: "return" "<-" expr ';'  */
                                                 {
        auto pRet = new ExprReturn(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 203: /* expression_return: "return" expr_pipe  */
                                           {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 204: /* expression_return: "return" "<-" expr_pipe  */
                                                  {
        auto pRet = new ExprReturn(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 205: /* expression_yield: "yield" expr ';'  */
                                         {
        (yyval.pExpression) = new ExprYield(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-1].pExpression)));
    }
    break;

  case 206: /* expression_yield: "yield" "<-" expr ';'  */
                                                {
        auto pRet = new ExprYield(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 207: /* expression_yield: "yield" expr_pipe  */
                                          {
        (yyval.pExpression) = new ExprYield(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 208: /* expression_yield: "yield" "<-" expr_pipe  */
                                                 {
        auto pRet = new ExprYield(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 209: /* expression_try_catch: "try" expression_block "recover" expression_block  */
                                                                                       {
        (yyval.pExpression) = new ExprTryCatch(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 210: /* kwd_let: "let"  */
                 { (yyval.b) = true; }
    break;

  case 211: /* kwd_let: "var"  */
                 { (yyval.b) = false; }
    break;

  case 212: /* expression_let: kwd_let let_variable_declaration  */
                                               {
        (yyval.pExpression) = ast_Let(scanner,(yyvsp[-1].b),(yyvsp[0].pVarDecl),tokAt(scanner,(yylsp[-1])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 213: /* $@4: %empty  */
                          { yyextra->das_arrow_depth ++; }
    break;

  case 214: /* $@5: %empty  */
                                                                                      { yyextra->das_arrow_depth --; }
    break;

  case 215: /* expr_cast: "cast" '<' $@4 type_declaration '>' $@5 expr  */
                                                                                                                                     {
        (yyval.pExpression) = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
    }
    break;

  case 216: /* $@6: %empty  */
                            { yyextra->das_arrow_depth ++; }
    break;

  case 217: /* $@7: %empty  */
                                                                                        { yyextra->das_arrow_depth --; }
    break;

  case 218: /* expr_cast: "upcast" '<' $@6 type_declaration '>' $@7 expr  */
                                                                                                                                       {
        auto pCast = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->upcast = true;
        (yyval.pExpression) = pCast;
    }
    break;

  case 219: /* $@8: %empty  */
                                 { yyextra->das_arrow_depth ++; }
    break;

  case 220: /* $@9: %empty  */
                                                                                             { yyextra->das_arrow_depth --; }
    break;

  case 221: /* expr_cast: "reinterpret" '<' $@8 type_declaration '>' $@9 expr  */
                                                                                                                                            {
        auto pCast = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->reinterpret = true;
        (yyval.pExpression) = pCast;
    }
    break;

  case 222: /* $@10: %empty  */
                         { yyextra->das_arrow_depth ++; }
    break;

  case 223: /* $@11: %empty  */
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 224: /* expr_type_decl: "type" '<' $@10 type_declaration '>' $@11  */
                                                                                                                      {
        (yyval.pExpression) = new ExprTypeDecl(tokAt(scanner,(yylsp[-5])),TypeDeclPtr((yyvsp[-2].pTypeDecl)));
    }
    break;

  case 225: /* expr_type_info: "typeinfo" '(' name_in_namespace expr ')'  */
                                                                         {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-4])),*(yyvsp[-2].s),ptd->typeexpr);
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-4])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[-1].pExpression)));
            }
            delete (yyvsp[-2].s);
    }
    break;

  case 226: /* expr_type_info: "typeinfo" '(' name_in_namespace '<' "name" '>' expr ')'  */
                                                                                                {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-7])),*(yyvsp[-5].s),ptd->typeexpr,*(yyvsp[-3].s));
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-7])),*(yyvsp[-5].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-3].s));
            }
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
    break;

  case 227: /* expr_type_info: "typeinfo" '(' name_in_namespace '<' "name" ';' "name" '>' expr ')'  */
                                                                                                                     {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-9])),*(yyvsp[-7].s),ptd->typeexpr,*(yyvsp[-5].s),*(yyvsp[-3].s));
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-9])),*(yyvsp[-7].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-5].s),*(yyvsp[-3].s));
            }
            delete (yyvsp[-7].s);
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
    break;

  case 228: /* expr_list: expr  */
                      {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 229: /* expr_list: expr_list ',' expr  */
                                            {
            (yyval.pExpression) = new ExprSequence(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 230: /* block_or_simple_block: expression_block  */
                                    { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 231: /* block_or_simple_block: "=>" expr  */
                                        {
            auto retE = make_smart<ExprReturn>(tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
            auto blkE = new ExprBlock();
            blkE->at = tokAt(scanner,(yylsp[-1]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
    break;

  case 232: /* block_or_simple_block: "=>" "<-" expr  */
                                               {
            auto retE = make_smart<ExprReturn>(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[0].pExpression)));
            retE->moveSemantics = true;
            auto blkE = new ExprBlock();
            blkE->at = tokAt(scanner,(yylsp[-2]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
    break;

  case 233: /* block_or_lambda: '$'  */
                { (yyval.i) = 0;   /* block */  }
    break;

  case 234: /* block_or_lambda: '@'  */
                { (yyval.i) = 1;   /* lambda */ }
    break;

  case 235: /* block_or_lambda: '@' '@'  */
                { (yyval.i) = 2;   /* local function */ }
    break;

  case 236: /* capture_entry: '&' "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_reference); delete (yyvsp[0].s); }
    break;

  case 237: /* capture_entry: '=' "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_copy); delete (yyvsp[0].s); }
    break;

  case 238: /* capture_entry: "<-" "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_move); delete (yyvsp[0].s); }
    break;

  case 239: /* capture_entry: ":=" "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_clone); delete (yyvsp[0].s); }
    break;

  case 240: /* capture_list: capture_entry  */
                         {
        (yyval.pCaptList) = new vector<CaptureEntry>();
        (yyval.pCaptList)->push_back(*(yyvsp[0].pCapt));
        delete (yyvsp[0].pCapt);
    }
    break;

  case 241: /* capture_list: capture_list ',' capture_entry  */
                                               {
        (yyvsp[-2].pCaptList)->push_back(*(yyvsp[0].pCapt));
        delete (yyvsp[0].pCapt);
        (yyval.pCaptList) = (yyvsp[-2].pCaptList);
    }
    break;

  case 242: /* optional_capture_list: %empty  */
        { (yyval.pCaptList) = nullptr; }
    break;

  case 243: /* optional_capture_list: "[[" capture_list ']' ']'  */
                                         { (yyval.pCaptList) = (yyvsp[-2].pCaptList); }
    break;

  case 244: /* expr_block: expression_block  */
                                            {
        ExprBlock * closure = (ExprBlock *) (yyvsp[0].pExpression);
        (yyval.pExpression) = new ExprMakeBlock(tokAt(scanner,(yylsp[0])),ExpressionPtr((yyvsp[0].pExpression)));
        closure->returnType = make_smart<TypeDecl>(Type::autoinfer);
    }
    break;

  case 245: /* expr_block: block_or_lambda optional_annotation_list optional_capture_list optional_function_argument_list optional_function_type block_or_simple_block  */
                                                                                            {
        (yyval.pExpression) = ast_makeBlock(scanner,(yyvsp[-5].i),(yyvsp[-4].faList),(yyvsp[-3].pCaptList),(yyvsp[-2].pVarDeclList),(yyvsp[-1].pTypeDecl),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[-4])));
    }
    break;

  case 246: /* expr_numeric_const: "integer constant"  */
                                              { (yyval.pExpression) = new ExprConstInt(tokAt(scanner,(yylsp[0])),(int32_t)(yyvsp[0].i)); }
    break;

  case 247: /* expr_numeric_const: "unsigned integer constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt(tokAt(scanner,(yylsp[0])),(uint32_t)(yyvsp[0].ui)); }
    break;

  case 248: /* expr_numeric_const: "long integer constant"  */
                                              { (yyval.pExpression) = new ExprConstInt64(tokAt(scanner,(yylsp[0])),(int64_t)(yyvsp[0].i64)); }
    break;

  case 249: /* expr_numeric_const: "unsigned long integer constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt64(tokAt(scanner,(yylsp[0])),(uint64_t)(yyvsp[0].ui64)); }
    break;

  case 250: /* expr_numeric_const: "floating point constant"  */
                                              { (yyval.pExpression) = new ExprConstFloat(tokAt(scanner,(yylsp[0])),(float)(yyvsp[0].fd)); }
    break;

  case 251: /* expr_numeric_const: "double constant"  */
                                              { (yyval.pExpression) = new ExprConstDouble(tokAt(scanner,(yylsp[0])),(double)(yyvsp[0].d)); }
    break;

  case 252: /* expr_assign: expr  */
                                             { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 253: /* expr_assign: expr '=' expr  */
                                             { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 254: /* expr_assign: expr "<-" expr  */
                                             { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 255: /* expr_assign: expr ":=" expr  */
                                             { (yyval.pExpression) = new ExprClone(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 256: /* expr_assign: expr "&=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 257: /* expr_assign: expr "|=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"|=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 258: /* expr_assign: expr "^=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 259: /* expr_assign: expr "&&=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 260: /* expr_assign: expr "||=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"||=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 261: /* expr_assign: expr "^^=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 262: /* expr_assign: expr "+=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"+=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 263: /* expr_assign: expr "-=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"-=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 264: /* expr_assign: expr "*=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"*=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 265: /* expr_assign: expr "/=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"/=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 266: /* expr_assign: expr "%=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"%=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 267: /* expr_assign: expr "<<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 268: /* expr_assign: expr ">>=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 269: /* expr_assign: expr "<<<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 270: /* expr_assign: expr ">>>=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 271: /* expr_assign_pipe: expr '=' "@ <|" expr  */
                                                    { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 272: /* expr_assign_pipe: expr '=' "@@ <|" expr  */
                                                    { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 273: /* expr_assign_pipe: expr "<-" "@ <|" expr  */
                                                    { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 274: /* expr_assign_pipe: expr "<-" "@@ <|" expr  */
                                                    { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 275: /* expr_named_call: name_in_namespace '(' '[' make_struct_fields ']' ')'  */
                                                                         {
        auto nc = new ExprNamedCall(tokAt(scanner,(yylsp[-5])),*(yyvsp[-5].s));
        nc->arguments = *(yyvsp[-2].pMakeStruct);
        delete (yyvsp[-2].pMakeStruct);
        delete (yyvsp[-5].s);
        (yyval.pExpression) = nc;
    }
    break;

  case 276: /* expr_method_call: expr "->" "name" '(' ')'  */
                                                         {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-3])), (yyvsp[-4].pExpression), *(yyvsp[-2].s));
        delete (yyvsp[-2].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 277: /* expr_method_call: expr "->" "name" '(' expr_list ')'  */
                                                                              {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-4])), (yyvsp[-5].pExpression), *(yyvsp[-3].s));
        auto callArgs = sequenceToList((yyvsp[-1].pExpression));
        pInvoke->arguments.insert ( pInvoke->arguments.end(), callArgs.begin(), callArgs.end() );
        delete (yyvsp[-3].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 278: /* func_addr_expr: '@' '@' name_in_namespace  */
                                                 {
        (yyval.pExpression) = new ExprAddr(tokAt(scanner,(yylsp[-1])),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 279: /* $@12: %empty  */
                         { yyextra->das_arrow_depth ++; }
    break;

  case 280: /* $@13: %empty  */
                                                                                          { yyextra->das_arrow_depth --; }
    break;

  case 281: /* func_addr_expr: '@' '@' '<' $@12 type_declaration '>' $@13 name_in_namespace  */
                                                                                                                                                   {
        auto expr = new ExprAddr(tokAt(scanner,(yylsp[-6])),*(yyvsp[0].s));
        delete (yyvsp[0].s);
        expr->funcType = make_smart<TypeDecl>(Type::tFunction);
        expr->funcType->firstType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        (yyval.pExpression) = expr;
    }
    break;

  case 282: /* $@14: %empty  */
                         { yyextra->das_arrow_depth ++; }
    break;

  case 283: /* $@15: %empty  */
                                                                                                                                   { yyextra->das_arrow_depth --; }
    break;

  case 284: /* func_addr_expr: '@' '@' '<' $@14 optional_function_argument_list optional_function_type '>' $@15 name_in_namespace  */
                                                                                                                                                                                            {
        auto expr = new ExprAddr(tokAt(scanner,(yylsp[-7])),*(yyvsp[0].s));
        delete (yyvsp[0].s);
        expr->funcType = make_smart<TypeDecl>(Type::tFunction);
        expr->funcType->firstType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        if ( (yyvsp[-4].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, expr->funcType.get(), (yyvsp[-4].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-4].pVarDeclList));
        }
        (yyval.pExpression) = expr;
    }
    break;

  case 285: /* expr_field: expr '.' "name"  */
                                              {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 286: /* expr_field: expr '.' '.' "name"  */
                                                  {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-3].pExpression)), *(yyvsp[0].s), true);
        delete (yyvsp[0].s);
    }
    break;

  case 287: /* $@16: %empty  */
                               { yyextra->das_supress_errors=true; }
    break;

  case 288: /* $@17: %empty  */
                                                                           { yyextra->das_supress_errors=false; }
    break;

  case 289: /* expr_field: expr '.' $@16 error $@17  */
                                                                                                                  {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-3])), tokAt(scanner,(yylsp[-3])), ExpressionPtr((yyvsp[-4].pExpression)), "");
        yyerrok;
    }
    break;

  case 290: /* expr: "null"  */
                                              { (yyval.pExpression) = new ExprConstPtr(tokAt(scanner,(yylsp[0])),nullptr); }
    break;

  case 291: /* expr: name_in_namespace  */
                                              { (yyval.pExpression) = new ExprVar(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 292: /* expr: expr_numeric_const  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 293: /* expr: expr_reader  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 294: /* expr: string_builder  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 295: /* expr: make_decl  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 296: /* expr: "true"  */
                                              { (yyval.pExpression) = new ExprConstBool(tokAt(scanner,(yylsp[0])),true); }
    break;

  case 297: /* expr: "false"  */
                                              { (yyval.pExpression) = new ExprConstBool(tokAt(scanner,(yylsp[0])),false); }
    break;

  case 298: /* expr: expr_field  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 299: /* expr: expr_mtag  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 300: /* expr: '!' expr  */
                                              { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"!",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 301: /* expr: '~' expr  */
                                              { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"~",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 302: /* expr: '+' expr  */
                                                  { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"+",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 303: /* expr: '-' expr  */
                                                  { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"-",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 304: /* expr: expr "<<" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 305: /* expr: expr ">>" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 306: /* expr: expr "<<<" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 307: /* expr: expr ">>>" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 308: /* expr: expr '+' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"+", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 309: /* expr: expr '-' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"-", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 310: /* expr: expr '*' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"*", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 311: /* expr: expr '/' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"/", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 312: /* expr: expr '%' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"%", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 313: /* expr: expr '<' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 314: /* expr: expr '>' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 315: /* expr: expr "==" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"==", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 316: /* expr: expr "!=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"!=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 317: /* expr: expr "<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 318: /* expr: expr ">=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 319: /* expr: expr '&' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 320: /* expr: expr '|' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"|", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 321: /* expr: expr '^' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 322: /* expr: expr "&&" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 323: /* expr: expr "||" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"||", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 324: /* expr: expr "^^" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 325: /* expr: expr ".." expr  */
                                             {
        auto itv = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-1])),"interval");
        itv->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        itv->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = itv;
    }
    break;

  case 326: /* expr: "++" expr  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"++", ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 327: /* expr: "--" expr  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"--", ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 328: /* expr: expr "++"  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[0])),"+++", ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 329: /* expr: expr "--"  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[0])),"---", ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 330: /* expr: '(' expr ')'  */
                                                 { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 331: /* expr: expr '[' expr ']'  */
                                                 { (yyval.pExpression) = new ExprAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 332: /* expr: expr '.' '[' expr ']'  */
                                                     { (yyval.pExpression) = new ExprAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), ExpressionPtr((yyvsp[-1].pExpression)), true); }
    break;

  case 333: /* expr: expr "?[" expr ']'  */
                                                 { (yyval.pExpression) = new ExprSafeAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 334: /* expr: expr '.' "?[" expr ']'  */
                                                     { (yyval.pExpression) = new ExprSafeAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), ExpressionPtr((yyvsp[-1].pExpression)), true); }
    break;

  case 335: /* expr: expr "?." "name"  */
                                                 { (yyval.pExpression) = new ExprSafeField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 336: /* expr: expr '.' "?." "name"  */
                                                     { (yyval.pExpression) = new ExprSafeField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-3].pExpression)), *(yyvsp[0].s), true); delete (yyvsp[0].s); }
    break;

  case 337: /* expr: func_addr_expr  */
                                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 338: /* expr: name_in_namespace '(' ')'  */
                                               {
            (yyval.pExpression) = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])),*(yyvsp[-2].s));
            delete (yyvsp[-2].s);
        }
    break;

  case 339: /* expr: name_in_namespace '(' expr_list ')'  */
                                                                    {
            (yyval.pExpression) = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),tokAt(scanner,(yylsp[0])),*(yyvsp[-3].s)),(yyvsp[-1].pExpression));
            delete (yyvsp[-3].s);
        }
    break;

  case 340: /* expr: basic_type_declaration '(' ')'  */
                                                    {
        (yyval.pExpression) = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[-2].type)));
    }
    break;

  case 341: /* expr: basic_type_declaration '(' expr_list ')'  */
                                                                         {
        (yyval.pExpression) = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[-3].type))),(yyvsp[-1].pExpression));
    }
    break;

  case 342: /* expr: '*' expr  */
                                                   { (yyval.pExpression) = new ExprPtr2Ref(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 343: /* expr: "deref" '(' expr ')'  */
                                                   { (yyval.pExpression) = new ExprPtr2Ref(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 344: /* expr: "addr" '(' expr ')'  */
                                                   { (yyval.pExpression) = new ExprRef2Ptr(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 345: /* expr: "generator" '<' type_declaration '>' optional_capture_list '(' ')'  */
                                                                                                   {
        (yyval.pExpression) = ast_makeGenerator(scanner,(yyvsp[-4].pTypeDecl),(yyvsp[-2].pCaptList),nullptr,tokAt(scanner,(yylsp[-6])));
    }
    break;

  case 346: /* expr: "generator" '<' type_declaration '>' optional_capture_list '(' expr ')'  */
                                                                                                                 {
        (yyval.pExpression) = ast_makeGenerator(scanner,(yyvsp[-5].pTypeDecl),(yyvsp[-3].pCaptList),(yyvsp[-1].pExpression),tokAt(scanner,(yylsp[-7])));
    }
    break;

  case 347: /* expr: expr "??" expr  */
                                                   { (yyval.pExpression) = new ExprNullCoalescing(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 348: /* expr: expr '?' expr ':' expr  */
                                                          {
            (yyval.pExpression) = new ExprOp3(tokAt(scanner,(yylsp[-3])),"?",ExpressionPtr((yyvsp[-4].pExpression)),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        }
    break;

  case 349: /* $@18: %empty  */
                                               { yyextra->das_arrow_depth ++; }
    break;

  case 350: /* $@19: %empty  */
                                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 351: /* expr: expr "is" "type" '<' $@18 type_declaration '>' $@19  */
                                                                                                                                            {
        (yyval.pExpression) = new ExprIs(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-7].pExpression)),TypeDeclPtr((yyvsp[-2].pTypeDecl)));
    }
    break;

  case 352: /* expr: expr "is" basic_type_declaration  */
                                                               {
        auto vdecl = new TypeDecl((yyvsp[0].type));
        vdecl->at = tokAt(scanner,(yylsp[0]));
        (yyval.pExpression) = new ExprIs(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),vdecl);
    }
    break;

  case 353: /* expr: expr "is" "name"  */
                                              {
        (yyval.pExpression) = new ExprIsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 354: /* expr: expr "as" "name"  */
                                              {
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 355: /* $@20: %empty  */
                                               { yyextra->das_arrow_depth ++; }
    break;

  case 356: /* $@21: %empty  */
                                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 357: /* expr: expr "as" "type" '<' $@20 type_declaration '>' $@21  */
                                                                                                                                            {
        auto vname = (yyvsp[-2].pTypeDecl)->describe();
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-7].pExpression)),vname);
        delete (yyvsp[-2].pTypeDecl);
    }
    break;

  case 358: /* expr: expr "as" basic_type_declaration  */
                                                               {
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),das_to_string((yyvsp[0].type)));
    }
    break;

  case 359: /* expr: expr '?' "as" "name"  */
                                                  {
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-3].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 360: /* $@22: %empty  */
                                                   { yyextra->das_arrow_depth ++; }
    break;

  case 361: /* $@23: %empty  */
                                                                                                               { yyextra->das_arrow_depth --; }
    break;

  case 362: /* expr: expr '?' "as" "type" '<' $@22 type_declaration '>' $@23  */
                                                                                                                                                {
        auto vname = (yyvsp[-2].pTypeDecl)->describe();
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-8].pExpression)),vname);
        delete (yyvsp[-2].pTypeDecl);
    }
    break;

  case 363: /* expr: expr '?' "as" basic_type_declaration  */
                                                                   {
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-3].pExpression)),das_to_string((yyvsp[0].type)));
    }
    break;

  case 364: /* expr: expr_type_info  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 365: /* expr: expr_type_decl  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 366: /* expr: expr_cast  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 367: /* expr: expr_new  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 368: /* expr: expr_method_call  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 369: /* expr: expr_named_call  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 370: /* expr: expr_block  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 371: /* expr: expr "<|" expr  */
                                                { (yyval.pExpression) = ast_lpipe(scanner,(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-1]))); }
    break;

  case 372: /* expr: expr "|>" expr  */
                                                { (yyval.pExpression) =ast_rpipe(scanner,(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-1]))); }
    break;

  case 373: /* expr: name_in_namespace "name"  */
                                                { (yyval.pExpression) = ast_NameName(scanner,(yyvsp[-1].s),(yyvsp[0].s),tokAt(scanner,(yylsp[-1])),tokAt(scanner,(yylsp[0]))); }
    break;

  case 374: /* expr: "unsafe" '(' expr ')'  */
                                         {
        (yyvsp[-1].pExpression)->alwaysSafe = true;
        (yyvsp[-1].pExpression)->userSaidItsSafe = true;
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 375: /* expr_mtag: "$$" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"e"); }
    break;

  case 376: /* expr_mtag: "$i" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"i"); }
    break;

  case 377: /* expr_mtag: "$v" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"v"); }
    break;

  case 378: /* expr_mtag: "$b" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"b"); }
    break;

  case 379: /* expr_mtag: "$a" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"a"); }
    break;

  case 380: /* optional_field_annotation: %empty  */
                                                        { (yyval.aaList) = nullptr; }
    break;

  case 381: /* optional_field_annotation: "[[" annotation_argument_list ']' ']'  */
                                                        { (yyval.aaList) = (yyvsp[-2].aaList); }
    break;

  case 382: /* optional_override: %empty  */
                      { (yyval.i) = OVERRIDE_NONE; }
    break;

  case 383: /* optional_override: "override"  */
                      { (yyval.i) = OVERRIDE_OVERRIDE; }
    break;

  case 384: /* optional_override: "sealed"  */
                      { (yyval.i) = OVERRIDE_SEALED; }
    break;

  case 385: /* optional_constant: %empty  */
                        { (yyval.b) = false; }
    break;

  case 386: /* optional_constant: "const"  */
                        { (yyval.b) = true; }
    break;

  case 387: /* optional_public_or_private_member_variable: %empty  */
                        { (yyval.b) = false; }
    break;

  case 388: /* optional_public_or_private_member_variable: "public"  */
                        { (yyval.b) = false; }
    break;

  case 389: /* optional_public_or_private_member_variable: "private"  */
                        { (yyval.b) = true; }
    break;

  case 390: /* structure_variable_declaration: optional_field_annotation optional_override optional_public_or_private_member_variable variable_declaration  */
                                                                                                                                                 {
        (yyvsp[0].pVarDecl)->override = (yyvsp[-2].i) == OVERRIDE_OVERRIDE;
        (yyvsp[0].pVarDecl)->sealed = (yyvsp[-2].i) == OVERRIDE_SEALED;
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-3].aaList);
        (yyvsp[0].pVarDecl)->isPrivate = (yyvsp[-1].b);
        (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
    }
    break;

  case 391: /* struct_variable_declaration_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 392: /* $@24: %empty  */
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeStructureFields(tak);
        }
    }
    break;

  case 393: /* struct_variable_declaration_list: struct_variable_declaration_list $@24 structure_variable_declaration ';'  */
                                               {
        (yyval.pVarDeclList) = (yyvsp[-3].pVarDeclList);
        if ( (yyvsp[-1].pVarDecl) ) (yyvsp[-3].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-3]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                for ( const auto & nl : *((yyvsp[-1].pVarDecl)->pNameList) ) {
                    crd->afterStructureField(nl.name.c_str(), nl.at);
                }
            }
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterStructureFields(tak);
        }
    }
    break;

  case 394: /* $@25: %empty  */
                                                                                             {
                yyextra->das_force_oxford_comma=true;
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[-1]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
                }
            }
    break;

  case 395: /* struct_variable_declaration_list: struct_variable_declaration_list optional_annotation_list "def" optional_public_or_private_member_variable "abstract" $@25 function_declaration_header ';'  */
                                                    {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[-1]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
                }
                (yyval.pVarDeclList) = ast_structVarDefAbstract(scanner,(yyvsp[-7].pVarDeclList),(yyvsp[-6].faList),(yyvsp[-4].b),(yyvsp[-1].pFuncDecl));
            }
    break;

  case 396: /* $@26: %empty  */
                                                                                                                               {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[0]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
                }
            }
    break;

  case 397: /* struct_variable_declaration_list: struct_variable_declaration_list optional_annotation_list "def" optional_public_or_private_member_variable optional_override optional_constant $@26 function_declaration_header expression_block  */
                                                                        {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[0]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
                }
                (yyval.pVarDeclList) = ast_structVarDef(scanner,(yyvsp[-8].pVarDeclList),(yyvsp[-7].faList),(yyvsp[-5].b),(yyvsp[-4].i),(yyvsp[-3].b),(yyvsp[-1].pFuncDecl),(yyvsp[0].pExpression),tokRangeAt(scanner,(yylsp[-6]),(yylsp[0])),tokAt(scanner,(yylsp[-7])));
            }
    break;

  case 398: /* struct_variable_declaration_list: struct_variable_declaration_list '[' annotation_list ']' ';'  */
                                                                                 {
        das_yyerror(scanner,"structure field or class method annotation expected to remain on the same line with the field or the class",
            tokAt(scanner,(yylsp[-2])), CompilationError::syntax_error);
        delete (yyvsp[-2].faList);
        (yyval.pVarDeclList) = (yyvsp[-4].pVarDeclList);
    }
    break;

  case 399: /* function_argument_declaration: optional_field_annotation variable_declaration  */
                                                                           {
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyvsp[0].pVarDecl)->pTypeDecl->constant = true;
            (yyvsp[0].pVarDecl)->annotation = (yyvsp[-1].aaList);
        }
    break;

  case 400: /* function_argument_declaration: optional_field_annotation "var" variable_declaration  */
                                                                           {
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyvsp[0].pVarDecl)->pTypeDecl->removeConstant = true;
            (yyvsp[0].pVarDecl)->annotation = (yyvsp[-2].aaList);
        }
    break;

  case 401: /* function_argument_list: function_argument_declaration  */
                                                                                 { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 402: /* function_argument_list: function_argument_list ';' function_argument_declaration  */
                                                                                 { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 403: /* tuple_type: type_declaration  */
                                    {
        (yyval.pVarDecl) = new VariableDeclaration(nullptr,(yyvsp[0].pTypeDecl),nullptr);
    }
    break;

  case 404: /* tuple_type: "name" ':' type_declaration  */
                                                   {
        auto na = new vector<VariableNameAndPosition>();
        na->push_back(VariableNameAndPosition{*(yyvsp[-2].s),"",tokAt(scanner,(yylsp[-2]))});
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
    break;

  case 405: /* tuple_type_list: tuple_type  */
                                                       { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 406: /* tuple_type_list: tuple_type_list ';' tuple_type  */
                                                       { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 407: /* variant_type: "name" ':' type_declaration  */
                                                   {
        auto na = new vector<VariableNameAndPosition>();
        na->push_back(VariableNameAndPosition{*(yyvsp[-2].s),"",tokAt(scanner,(yylsp[-2]))});
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
    break;

  case 408: /* variant_type_list: variant_type  */
                                                         { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 409: /* variant_type_list: variant_type_list ';' variant_type  */
                                                         { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 410: /* copy_or_move: '='  */
                    { (yyval.b) = false; }
    break;

  case 411: /* copy_or_move: "<-"  */
                    { (yyval.b) = true; }
    break;

  case 412: /* variable_declaration: variable_name_with_pos_list  */
                                          {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt(scanner,(yylsp[0]));
        autoT->ref = false;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[0].pNameWithPosList),autoT,nullptr);
    }
    break;

  case 413: /* variable_declaration: variable_name_with_pos_list '&'  */
                                              {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt(scanner,(yylsp[-1]));
        autoT->ref = true;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-1].pNameWithPosList),autoT,nullptr);
    }
    break;

  case 414: /* variable_declaration: variable_name_with_pos_list ':' type_declaration  */
                                                                          {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),(yyvsp[0].pTypeDecl),nullptr);
    }
    break;

  case 415: /* variable_declaration: variable_name_with_pos_list ':' type_declaration copy_or_move expr  */
                                                                                                      {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 416: /* variable_declaration: variable_name_with_pos_list copy_or_move expr  */
                                                                       {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 417: /* variable_declaration: variable_name_with_pos_list copy_or_move expr_pipe  */
                                                                            {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 418: /* copy_or_move_or_clone: '='  */
                    { (yyval.i) = CorM_COPY; }
    break;

  case 419: /* copy_or_move_or_clone: "<-"  */
                    { (yyval.i) = CorM_MOVE; }
    break;

  case 420: /* copy_or_move_or_clone: ":="  */
                    { (yyval.i) = CorM_CLONE; }
    break;

  case 421: /* optional_ref: %empty  */
            { (yyval.b) = false; }
    break;

  case 422: /* optional_ref: '&'  */
            { (yyval.b) = true; }
    break;

  case 423: /* let_variable_declaration: variable_name_with_pos_list ':' type_declaration ';'  */
                                                                             {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),(yyvsp[-1].pTypeDecl),nullptr);
    }
    break;

  case 424: /* let_variable_declaration: variable_name_with_pos_list ':' type_declaration copy_or_move_or_clone expr ';'  */
                                                                                                                   {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-5].pNameWithPosList),(yyvsp[-3].pTypeDecl),(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
    break;

  case 425: /* let_variable_declaration: variable_name_with_pos_list ':' type_declaration copy_or_move_or_clone expr_pipe  */
                                                                                                                    {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-1].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-1].i) & CorM_CLONE) !=0;
    }
    break;

  case 426: /* let_variable_declaration: variable_name_with_pos_list optional_ref copy_or_move_or_clone expr ';'  */
                                                                                                      {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-4]));
        typeDecl->ref = (yyvsp[-3].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),typeDecl,(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
    break;

  case 427: /* let_variable_declaration: variable_name_with_pos_list optional_ref copy_or_move_or_clone expr_pipe  */
                                                                                                       {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-3]));
        typeDecl->ref = (yyvsp[-2].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-1].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-1].i) & CorM_CLONE) !=0;
    }
    break;

  case 428: /* global_variable_declaration_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 429: /* $@27: %empty  */
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeGlobalVariables(tak);
        }
    }
    break;

  case 430: /* global_variable_declaration_list: global_variable_declaration_list $@27 optional_field_annotation let_variable_declaration  */
                                                                      {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders )
                for ( auto & nl : *((yyvsp[0].pVarDecl)->pNameList) )
                    crd->afterGlobalVariable(nl.name.c_str(),tak);
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterGlobalVariables(tak);
        }
        (yyval.pVarDeclList) = (yyvsp[-3].pVarDeclList);
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-1].aaList);
        (yyvsp[-3].pVarDeclList)->push_back((yyvsp[0].pVarDecl));
    }
    break;

  case 431: /* optional_shared: %empty  */
                     { (yyval.b) = false; }
    break;

  case 432: /* optional_shared: "shared"  */
                     { (yyval.b) = true; }
    break;

  case 433: /* optional_public_or_private_variable: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 434: /* optional_public_or_private_variable: "private"  */
                     { (yyval.b) = false; }
    break;

  case 435: /* optional_public_or_private_variable: "public"  */
                     { (yyval.b) = true; }
    break;

  case 436: /* global_let: kwd_let optional_shared optional_public_or_private_variable '{' global_variable_declaration_list '}'  */
                                                                                                                                       {
        ast_globalLetList(scanner,(yyvsp[-5].b),(yyvsp[-4].b),(yyvsp[-3].b),(yyvsp[-1].pVarDeclList));
    }
    break;

  case 437: /* $@28: %empty  */
                                                                                        {
        yyextra->das_force_oxford_comma=true;
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeGlobalVariables(tak);
        }
    }
    break;

  case 438: /* global_let: kwd_let optional_shared optional_public_or_private_variable $@28 optional_field_annotation let_variable_declaration  */
                                                                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders )
                for ( auto & nl : *((yyvsp[0].pVarDecl)->pNameList) )
                    crd->afterGlobalVariable(nl.name.c_str(),tak);
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterGlobalVariables(tak);
        }
        ast_globalLet(scanner,(yyvsp[-5].b),(yyvsp[-4].b),(yyvsp[-3].b),(yyvsp[-1].aaList),(yyvsp[0].pVarDecl));
    }
    break;

  case 439: /* enum_list: %empty  */
        {
        (yyval.pEnum) = new Enumeration();
    }
    break;

  case 440: /* enum_list: enum_list "name" ';'  */
                                     {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        if ( !(yyvsp[-2].pEnum)->add(*(yyvsp[-1].s),nullptr,tokAt(scanner,(yylsp[-1]))) ) {
            das_yyerror(scanner,"enumeration alread declared " + *(yyvsp[-1].s), tokAt(scanner,(yylsp[-1])),
                CompilationError::enumeration_value_already_declared);
        }
        delete (yyvsp[-1].s);
        (yyval.pEnum) = (yyvsp[-2].pEnum);
    }
    break;

  case 441: /* enum_list: enum_list "name" '=' expr ';'  */
                                                     {
        das_checkName(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])));
        if ( !(yyvsp[-4].pEnum)->add(*(yyvsp[-3].s),ExpressionPtr((yyvsp[-1].pExpression)),tokAt(scanner,(yylsp[-3]))) ) {
            das_yyerror(scanner,"enumeration value alread declared " + *(yyvsp[-3].s), tokAt(scanner,(yylsp[-3])),
                CompilationError::enumeration_value_already_declared);
        }
        delete (yyvsp[-3].s);
        (yyval.pEnum) = (yyvsp[-4].pEnum);
    }
    break;

  case 442: /* $@29: %empty  */
                   {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeAlias(pubename);
        }
    }
    break;

  case 443: /* single_alias: "name" $@29 '=' type_declaration  */
                                  {
        das_checkName(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])));
        (yyvsp[0].pTypeDecl)->alias = *(yyvsp[-3].s);
        if ( !yyextra->g_Program->addAlias(TypeDeclPtr((yyvsp[0].pTypeDecl))) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterAlias((yyvsp[-3].s)->c_str(),pubename);
        }
        delete (yyvsp[-3].s);
    }
    break;

  case 448: /* optional_public_or_private_enum: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 449: /* optional_public_or_private_enum: "private"  */
                     { (yyval.b) = false; }
    break;

  case 450: /* optional_public_or_private_enum: "public"  */
                     { (yyval.b) = true; }
    break;

  case 451: /* enum_name: "name"  */
                   {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeEnumeration(pubename);
        }
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 452: /* enum_declaration: optional_annotation_list "enum" optional_public_or_private_enum enum_name '{' enum_list '}'  */
                                                                                                                                 {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumeration((yyvsp[-3].s)->c_str(),pubename);
        }
        ast_enumDeclaration(scanner,(yyvsp[-6].faList),tokAt(scanner,(yylsp[-6])),(yyvsp[-4].b),(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])),(yyvsp[-1].pEnum),tokAt(scanner,(yylsp[-1])),Type::tInt);
    }
    break;

  case 453: /* enum_declaration: optional_annotation_list "enum" optional_public_or_private_enum enum_name ':' enum_basic_type_declaration '{' enum_list '}'  */
                                                                                                                                                                      {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumeration((yyvsp[-5].s)->c_str(),pubename);
        }
        ast_enumDeclaration(scanner,(yyvsp[-8].faList),tokAt(scanner,(yylsp[-8])),(yyvsp[-6].b),(yyvsp[-5].s),tokAt(scanner,(yylsp[-5])),(yyvsp[-1].pEnum),tokAt(scanner,(yylsp[-1])),(yyvsp[-3].type));
    }
    break;

  case 454: /* optional_structure_parent: %empty  */
                                        { (yyval.s) = nullptr; }
    break;

  case 455: /* optional_structure_parent: ':' name_in_namespace  */
                                        { (yyval.s) = (yyvsp[0].s); }
    break;

  case 456: /* optional_sealed: %empty  */
                        { (yyval.b) = false; }
    break;

  case 457: /* optional_sealed: "sealed"  */
                        { (yyval.b) = true; }
    break;

  case 458: /* structure_name: optional_sealed "name" optional_structure_parent  */
                                                                           {
        (yyval.pStructure) = ast_structureName(scanner,(yyvsp[-2].b),(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])),(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 459: /* class_or_struct: "class"  */
                    { (yyval.b) = true; }
    break;

  case 460: /* class_or_struct: "struct"  */
                    { (yyval.b) = false; }
    break;

  case 461: /* optional_public_or_private_structure: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 462: /* optional_public_or_private_structure: "private"  */
                     { (yyval.b) = false; }
    break;

  case 463: /* optional_public_or_private_structure: "public"  */
                     { (yyval.b) = true; }
    break;

  case 464: /* $@30: %empty  */
                                                                                                        {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeStructure(tak);
        }
    }
    break;

  case 465: /* $@31: %empty  */
                         { if ( (yyvsp[0].pStructure) ) { (yyvsp[0].pStructure)->isClass = (yyvsp[-3].b); (yyvsp[0].pStructure)->privateStructure = !(yyvsp[-2].b); } }
    break;

  case 466: /* structure_declaration: optional_annotation_list class_or_struct optional_public_or_private_structure $@30 structure_name $@31 '{' struct_variable_declaration_list '}'  */
                                                                                                                                                   {
        ast_structureDeclaration ( scanner, (yyvsp[-8].faList), tokAt(scanner,(yylsp[-7])), (yyvsp[-4].pStructure), tokAt(scanner,(yylsp[-4])), (yyvsp[-1].pVarDeclList) );
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-7]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterStructure((yyvsp[-4].pStructure),tak);
        }
    }
    break;

  case 467: /* variable_name_with_pos_list: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 468: /* variable_name_with_pos_list: "name" "aka" "name"  */
                                         {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 469: /* variable_name_with_pos_list: variable_name_with_pos_list ',' "name"  */
                                                         {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = (yyvsp[-2].pNameWithPosList);
        delete (yyvsp[0].s);
    }
    break;

  case 470: /* variable_name_with_pos_list: variable_name_with_pos_list ',' "name" "aka" "name"  */
                                                                               {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-4].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = (yyvsp[-4].pNameWithPosList);
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 471: /* basic_type_declaration: "bool"  */
                        { (yyval.type) = Type::tBool; }
    break;

  case 472: /* basic_type_declaration: "string"  */
                        { (yyval.type) = Type::tString; }
    break;

  case 473: /* basic_type_declaration: "int"  */
                        { (yyval.type) = Type::tInt; }
    break;

  case 474: /* basic_type_declaration: "int8"  */
                        { (yyval.type) = Type::tInt8; }
    break;

  case 475: /* basic_type_declaration: "int16"  */
                        { (yyval.type) = Type::tInt16; }
    break;

  case 476: /* basic_type_declaration: "int64"  */
                        { (yyval.type) = Type::tInt64; }
    break;

  case 477: /* basic_type_declaration: "int2"  */
                        { (yyval.type) = Type::tInt2; }
    break;

  case 478: /* basic_type_declaration: "int3"  */
                        { (yyval.type) = Type::tInt3; }
    break;

  case 479: /* basic_type_declaration: "int4"  */
                        { (yyval.type) = Type::tInt4; }
    break;

  case 480: /* basic_type_declaration: "uint"  */
                        { (yyval.type) = Type::tUInt; }
    break;

  case 481: /* basic_type_declaration: "uint8"  */
                        { (yyval.type) = Type::tUInt8; }
    break;

  case 482: /* basic_type_declaration: "uint16"  */
                        { (yyval.type) = Type::tUInt16; }
    break;

  case 483: /* basic_type_declaration: "uint64"  */
                        { (yyval.type) = Type::tUInt64; }
    break;

  case 484: /* basic_type_declaration: "uint2"  */
                        { (yyval.type) = Type::tUInt2; }
    break;

  case 485: /* basic_type_declaration: "uint3"  */
                        { (yyval.type) = Type::tUInt3; }
    break;

  case 486: /* basic_type_declaration: "uint4"  */
                        { (yyval.type) = Type::tUInt4; }
    break;

  case 487: /* basic_type_declaration: "float"  */
                        { (yyval.type) = Type::tFloat; }
    break;

  case 488: /* basic_type_declaration: "float2"  */
                        { (yyval.type) = Type::tFloat2; }
    break;

  case 489: /* basic_type_declaration: "float3"  */
                        { (yyval.type) = Type::tFloat3; }
    break;

  case 490: /* basic_type_declaration: "float4"  */
                        { (yyval.type) = Type::tFloat4; }
    break;

  case 491: /* basic_type_declaration: "void"  */
                        { (yyval.type) = Type::tVoid; }
    break;

  case 492: /* basic_type_declaration: "range"  */
                        { (yyval.type) = Type::tRange; }
    break;

  case 493: /* basic_type_declaration: "urange"  */
                        { (yyval.type) = Type::tURange; }
    break;

  case 494: /* basic_type_declaration: "double"  */
                        { (yyval.type) = Type::tDouble; }
    break;

  case 495: /* basic_type_declaration: "bitfield"  */
                        { (yyval.type) = Type::tBitfield; }
    break;

  case 496: /* enum_basic_type_declaration: "int"  */
                        { (yyval.type) = Type::tInt; }
    break;

  case 497: /* enum_basic_type_declaration: "int8"  */
                        { (yyval.type) = Type::tInt8; }
    break;

  case 498: /* enum_basic_type_declaration: "int16"  */
                        { (yyval.type) = Type::tInt16; }
    break;

  case 499: /* enum_basic_type_declaration: "uint"  */
                        { (yyval.type) = Type::tUInt; }
    break;

  case 500: /* enum_basic_type_declaration: "uint8"  */
                        { (yyval.type) = Type::tUInt8; }
    break;

  case 501: /* enum_basic_type_declaration: "uint16"  */
                        { (yyval.type) = Type::tUInt16; }
    break;

  case 502: /* structure_type_declaration: name_in_namespace  */
                                 {
        (yyval.pTypeDecl) = yyextra->g_Program->makeTypeDeclaration(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s));
        if ( !(yyval.pTypeDecl) ) {
            (yyval.pTypeDecl) = new TypeDecl(Type::tVoid);
            (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
        }
        delete (yyvsp[0].s);
    }
    break;

  case 503: /* auto_type_declaration: "auto"  */
                       {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 504: /* auto_type_declaration: "auto" '(' "name" ')'  */
                                            {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pTypeDecl)->alias = *(yyvsp[-1].s);
        delete (yyvsp[-1].s);
    }
    break;

  case 505: /* auto_type_declaration: "$t" '(' expr ')'  */
                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::alias);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pTypeDecl)->alias = "``MACRO``TAG``";
        (yyval.pTypeDecl)->isTag = true;
        (yyval.pTypeDecl)->firstType = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->firstType->at = tokAt(scanner, (yylsp[-1]));
        (yyval.pTypeDecl)->firstType->dimExpr.push_back((yyvsp[-1].pExpression));
    }
    break;

  case 506: /* bitfield_bits: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<string>();
        pSL->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 507: /* bitfield_bits: bitfield_bits ';' "name"  */
                                           {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = (yyvsp[-2].pNameList);
        delete (yyvsp[0].s);
    }
    break;

  case 508: /* $@32: %empty  */
                                     { yyextra->das_arrow_depth ++; }
    break;

  case 509: /* $@33: %empty  */
                                                                                            { yyextra->das_arrow_depth --; }
    break;

  case 510: /* bitfield_type_declaration: "bitfield" '<' $@32 bitfield_bits '>' $@33  */
                                                                                                                             {
            (yyval.pTypeDecl) = new TypeDecl(Type::tBitfield);
            (yyval.pTypeDecl)->argNames = *(yyvsp[-2].pNameList);
            if ( (yyval.pTypeDecl)->argNames.size()>32 ) {
                das_yyerror(scanner,"only 32 different bits are allowed in a bitfield",tokAt(scanner,(yylsp[-5])),
                    CompilationError::invalid_type);
            }
            (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
            delete (yyvsp[-2].pNameList);
    }
    break;

  case 511: /* table_type_pair: type_declaration  */
                                      {
        (yyval.aTypePair).firstType = (yyvsp[0].pTypeDecl);
        (yyval.aTypePair).secondType = new TypeDecl(Type::tVoid);
    }
    break;

  case 512: /* table_type_pair: type_declaration ';' type_declaration  */
                                                                          {
        (yyval.aTypePair).firstType = (yyvsp[-2].pTypeDecl);
        (yyval.aTypePair).secondType = (yyvsp[0].pTypeDecl);
    }
    break;

  case 513: /* type_declaration: basic_type_declaration  */
                                                            { (yyval.pTypeDecl) = new TypeDecl((yyvsp[0].type)); (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0])); }
    break;

  case 514: /* type_declaration: auto_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 515: /* type_declaration: bitfield_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 516: /* type_declaration: structure_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 517: /* type_declaration: type_declaration '[' expr ']'  */
                                                         {
        int32_t dI = TypeDecl::dimConst;
        if ( (yyvsp[-1].pExpression)->rtti_isConstant() ) {                // note: this shortcut is here so we don`t get extra infer pass on every array
            auto cI = (ExprConst *) (yyvsp[-1].pExpression);
            auto bt = cI->baseType;
            if ( bt==Type::tInt || bt==Type::tUInt ) {
                dI = cast<int32_t>::to(cI->value);
            }
        }
        (yyvsp[-3].pTypeDecl)->dim.push_back(dI);
        (yyvsp[-3].pTypeDecl)->dimExpr.push_back(ExpressionPtr((yyvsp[-1].pExpression)));
        (yyvsp[-3].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
    break;

  case 518: /* type_declaration: type_declaration '[' ']'  */
                                           {
        (yyvsp[-2].pTypeDecl)->dim.push_back(TypeDecl::dimAuto);
        (yyvsp[-2].pTypeDecl)->dimExpr.push_back(nullptr);
        (yyvsp[-2].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 519: /* type_declaration: type_declaration '-' '[' ']'  */
                                               {
        (yyvsp[-3].pTypeDecl)->removeDim = true;
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
    break;

  case 520: /* type_declaration: type_declaration "explicit"  */
                                                {
        (yyvsp[-1].pTypeDecl)->isExplicit = true;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 521: /* type_declaration: type_declaration "const"  */
                                             {
        (yyvsp[-1].pTypeDecl)->constant = true;
        (yyvsp[-1].pTypeDecl)->removeConstant = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 522: /* type_declaration: type_declaration '-' "const"  */
                                                 {
        (yyvsp[-2].pTypeDecl)->constant = false;
        (yyvsp[-2].pTypeDecl)->removeConstant = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 523: /* type_declaration: type_declaration '&'  */
                                       {
        (yyvsp[-1].pTypeDecl)->ref = true;
        (yyvsp[-1].pTypeDecl)->removeRef = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 524: /* type_declaration: type_declaration '-' '&'  */
                                           {
        (yyvsp[-2].pTypeDecl)->ref = false;
        (yyvsp[-2].pTypeDecl)->removeRef = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 525: /* type_declaration: type_declaration '#'  */
                                       {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->temporary = true;
    }
    break;

  case 526: /* type_declaration: type_declaration "implicit"  */
                                                {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->implicit = true;
    }
    break;

  case 527: /* type_declaration: type_declaration '-' '#'  */
                                           {
        (yyvsp[-2].pTypeDecl)->temporary = false;
        (yyvsp[-2].pTypeDecl)->removeTemporary = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 528: /* type_declaration: type_declaration '=' "const"  */
                                                 {
        (yyvsp[-2].pTypeDecl)->explicitConst = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 529: /* type_declaration: type_declaration '?'  */
                                       {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
    break;

  case 530: /* $@34: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 531: /* $@35: %empty  */
                                                                                               { yyextra->das_arrow_depth --; }
    break;

  case 532: /* type_declaration: "smart_ptr" '<' $@34 type_declaration '>' $@35  */
                                                                                                                                {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->smartPtr = true;
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 533: /* type_declaration: type_declaration "??"  */
                                      {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType = make_smart<TypeDecl>(Type::tPointer);
        (yyval.pTypeDecl)->firstType->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
    break;

  case 534: /* $@36: %empty  */
                           { yyextra->das_arrow_depth ++; }
    break;

  case 535: /* $@37: %empty  */
                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 536: /* type_declaration: "array" '<' $@36 type_declaration '>' $@37  */
                                                                                                                            {
        (yyval.pTypeDecl) = new TypeDecl(Type::tArray);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 537: /* $@38: %empty  */
                           { yyextra->das_arrow_depth ++; }
    break;

  case 538: /* $@39: %empty  */
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 539: /* type_declaration: "table" '<' $@38 table_type_pair '>' $@39  */
                                                                                                                      {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTable);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].aTypePair).firstType);
        (yyval.pTypeDecl)->secondType = TypeDeclPtr((yyvsp[-2].aTypePair).secondType);
    }
    break;

  case 540: /* $@40: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 541: /* $@41: %empty  */
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 542: /* type_declaration: "iterator" '<' $@40 type_declaration '>' $@41  */
                                                                                                                                  {
        (yyval.pTypeDecl) = new TypeDecl(Type::tIterator);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 543: /* type_declaration: "block"  */
                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 544: /* $@42: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 545: /* $@43: %empty  */
                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 546: /* type_declaration: "block" '<' $@42 type_declaration '>' $@43  */
                                                                                                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 547: /* $@44: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 548: /* $@45: %empty  */
                                                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 549: /* type_declaration: "block" '<' $@44 optional_function_argument_list optional_function_type '>' $@45  */
                                                                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 550: /* type_declaration: "function"  */
                           {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 551: /* $@46: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 552: /* $@47: %empty  */
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 553: /* type_declaration: "function" '<' $@46 type_declaration '>' $@47  */
                                                                                                                                 {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 554: /* $@48: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 555: /* $@49: %empty  */
                                                                                                                                         { yyextra->das_arrow_depth --; }
    break;

  case 556: /* type_declaration: "function" '<' $@48 optional_function_argument_list optional_function_type '>' $@49  */
                                                                                                                                                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 557: /* type_declaration: "lambda"  */
                         {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 558: /* $@50: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 559: /* $@51: %empty  */
                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 560: /* type_declaration: "lambda" '<' $@50 type_declaration '>' $@51  */
                                                                                                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 561: /* $@52: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 562: /* $@53: %empty  */
                                                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 563: /* type_declaration: "lambda" '<' $@52 optional_function_argument_list optional_function_type '>' $@53  */
                                                                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 564: /* $@54: %empty  */
                            { yyextra->das_arrow_depth ++; }
    break;

  case 565: /* $@55: %empty  */
                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 566: /* type_declaration: "tuple" '<' $@54 tuple_type_list '>' $@55  */
                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTuple);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
    break;

  case 567: /* $@56: %empty  */
                              { yyextra->das_arrow_depth ++; }
    break;

  case 568: /* $@57: %empty  */
                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 569: /* type_declaration: "variant" '<' $@56 variant_type_list '>' $@57  */
                                                                                                                            {
        (yyval.pTypeDecl) = new TypeDecl(Type::tVariant);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
    break;

  case 570: /* $@58: %empty  */
                     { yyextra->das_need_oxford_comma=false; }
    break;

  case 571: /* $@59: %empty  */
                                                                           {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeVariant(atvname);
        }
    }
    break;

  case 572: /* variant_alias_declaration: "variant" $@58 "name" $@59 '{' variant_type_list ';' '}'  */
                                          {
        auto vtype = make_smart<TypeDecl>(Type::tVariant);
        vtype->alias = *(yyvsp[-5].s);
        vtype->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, vtype.get(), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        if ( !yyextra->g_Program->addAlias(vtype) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-5].s),tokAt(scanner,(yylsp[-5])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-5]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterVariant((yyvsp[-5].s)->c_str(),atvname);
        }
        delete (yyvsp[-5].s);
    }
    break;

  case 573: /* $@60: %empty  */
                      { yyextra->das_need_oxford_comma=false; }
    break;

  case 574: /* bitfield_alias_declaration: "bitfield" $@60 "name" '{' bitfield_bits ';' '}'  */
                                                                                                            {
        auto btype = make_smart<TypeDecl>(Type::tBitfield);
        btype->alias = *(yyvsp[-4].s);
        btype->at = tokAt(scanner,(yylsp[-4]));
        btype->argNames = *(yyvsp[-2].pNameList);
        if ( btype->argNames.size()>32 ) {
            das_yyerror(scanner,"only 32 different bits are allowed in a bitfield",tokAt(scanner,(yylsp[-4])),
                CompilationError::invalid_type);
        }
        if ( !yyextra->g_Program->addAlias(btype) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-4].s),tokAt(scanner,(yylsp[-4])),
                CompilationError::type_alias_already_declared);
        }
        delete (yyvsp[-4].s);
        delete (yyvsp[-2].pNameList);
    }
    break;

  case 575: /* make_decl: make_struct_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 576: /* make_decl: make_dim_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 577: /* make_decl: make_table_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 578: /* make_decl: array_comprehension  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 579: /* make_struct_fields: "name" copy_or_move expr  */
                                               {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 580: /* make_struct_fields: "name" ":=" expr  */
                                      {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),false,true);
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 581: /* make_struct_fields: make_struct_fields ',' "name" copy_or_move expr  */
                                                                           {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
    break;

  case 582: /* make_struct_fields: make_struct_fields ',' "name" ":=" expr  */
                                                                  {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),false,true);
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
    break;

  case 583: /* make_struct_dim: make_struct_fields  */
                                {
        auto msd = new ExprMakeStruct();
        msd->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = msd;
    }
    break;

  case 584: /* make_struct_dim: make_struct_dim ';' make_struct_fields  */
                                                         {
        ((ExprMakeStruct *) (yyvsp[-2].pExpression))->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 585: /* optional_block: %empty  */
        { (yyval.pExpression) = nullptr; }
    break;

  case 586: /* optional_block: "where" expr_block  */
                                  { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 587: /* make_struct_decl: "[[" type_declaration make_struct_dim optional_block ']' ']'  */
                                                                                             {
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->makeType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->block = (yyvsp[-2].pExpression);
        (yyvsp[-3].pExpression)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
    break;

  case 588: /* make_struct_decl: "[[" type_declaration optional_block ']' ']'  */
                                                                        {
        auto msd = new ExprMakeStruct();
        msd->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        msd->block = (yyvsp[-2].pExpression);
        msd->at = tokAt(scanner,(yylsp[-4]));
        (yyval.pExpression) = msd;
    }
    break;

  case 589: /* make_struct_decl: "[[" type_declaration '(' ')' optional_block ']' ']'  */
                                                                                {
        auto msd = new ExprMakeStruct();
        msd->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        msd->useInitializer = true;
        msd->block = (yyvsp[-2].pExpression);
        msd->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pExpression) = msd;
    }
    break;

  case 590: /* make_struct_decl: "[[" type_declaration '(' ')' make_struct_dim optional_block ']' ']'  */
                                                                                                     {
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->useInitializer = true;
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->block = (yyvsp[-2].pExpression);
        (yyvsp[-3].pExpression)->at = tokAt(scanner,(yylsp[-7]));
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
    break;

  case 591: /* make_struct_decl: "[{" type_declaration make_struct_dim optional_block '}' ']'  */
                                                                                             {
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->makeType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->block = (yyvsp[-2].pExpression);
        (yyvsp[-3].pExpression)->at = tokAt(scanner,(yylsp[-5]));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-5])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-3].pExpression)));
        (yyval.pExpression) = tam;
    }
    break;

  case 592: /* make_struct_decl: "[{" type_declaration '(' ')' make_struct_dim optional_block '}' ']'  */
                                                                                                     {
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->useInitializer = true;
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->block = (yyvsp[-2].pExpression);
        (yyvsp[-3].pExpression)->at = tokAt(scanner,(yylsp[-7]));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-7])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-3].pExpression)));
        (yyval.pExpression) = tam;
    }
    break;

  case 593: /* make_tuple: expr  */
                  {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 594: /* make_tuple: make_tuple ',' expr  */
                                      {
        ExprMakeTuple * mt;
        if ( (yyvsp[-2].pExpression)->rtti_isMakeTuple() ) {
            mt = static_cast<ExprMakeTuple *>((yyvsp[-2].pExpression));
        } else {
            mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-2])));
            mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        }
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 595: /* make_map_tuple: expr "=>" expr  */
                                         {
        ExprMakeTuple * mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-1])));
        mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 596: /* make_map_tuple: expr  */
                 {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 597: /* make_any_tuple: make_tuple  */
                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 598: /* make_any_tuple: make_map_tuple  */
                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 599: /* make_dim: make_any_tuple  */
                            {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
    break;

  case 600: /* make_dim: make_dim ';' make_any_tuple  */
                                              {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 601: /* make_dim_decl: "[[" type_declaration make_dim ']' ']'  */
                                                                  {
       ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
       (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-4]));
       (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 602: /* make_dim_decl: "[{" type_declaration make_dim '}' ']'  */
                                                                  {
       ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
       (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-4]));
       auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-4])),"to_array_move");
       tam->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
       (yyval.pExpression) = tam;
    }
    break;

  case 603: /* make_table: make_map_tuple  */
                            {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
    break;

  case 604: /* make_table: make_table ';' make_map_tuple  */
                                                {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 605: /* make_table_decl: "{{" make_table '}' '}'  */
                                              {
        auto mkt = make_smart<TypeDecl>(Type::autoinfer);
        mkt->dim.push_back(TypeDecl::dimAuto);
        ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = mkt;
        (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-3]));
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),"to_table_move");
        ttm->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        (yyval.pExpression) = ttm;
    }
    break;

  case 606: /* array_comprehension_where: %empty  */
                                    { (yyval.pExpression) = nullptr; }
    break;

  case 607: /* array_comprehension_where: ';' "where" expr  */
                                    { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 608: /* array_comprehension: "[[" "for" variable_name_with_pos_list "in" expr_list ';' expr array_comprehension_where ']' ']'  */
                                                                                                                                                            {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-8])),(yyvsp[-7].pNameWithPosList),(yyvsp[-5].pExpression),(yyvsp[-3].pExpression),(yyvsp[-2].pExpression),tokRangeAt(scanner,(yylsp[-3]),(yylsp[0])),true);
    }
    break;

  case 609: /* array_comprehension: "[{" "for" variable_name_with_pos_list "in" expr_list ';' expr array_comprehension_where '}' ']'  */
                                                                                                                                                            {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-8])),(yyvsp[-7].pNameWithPosList),(yyvsp[-5].pExpression),(yyvsp[-3].pExpression),(yyvsp[-2].pExpression),tokRangeAt(scanner,(yylsp[-3]),(yylsp[0])),false);
    }
    break;



      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == DAS_YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= DAS_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == DAS_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner);
          yychar = DAS_YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != DAS_YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}



void das_yyfatalerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error, CompilationError cerr ) {
    yyextra->g_Program->error(error,"","",LineInfo(yyextra->g_FileAccessStack.back(),
        lloc->first_column,lloc->first_line,lloc->last_column,lloc->last_line),cerr);
}

void das_yyerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error ) {
    if ( !yyextra->das_supress_errors ) {
        yyextra->g_Program->error(error,"","",LineInfo(yyextra->g_FileAccessStack.back(),
            lloc->first_column,lloc->first_line,lloc->last_column,lloc->last_line),
                CompilationError::syntax_error);
    }
}

LineInfo tokAt ( yyscan_t scanner, const struct DAS_YYLTYPE & li ) {
    return LineInfo(yyextra->g_FileAccessStack.back(),
        li.first_column,li.first_line,
        li.last_column,li.last_line);
}

LineInfo tokRangeAt ( yyscan_t scanner, const struct DAS_YYLTYPE & li, const struct DAS_YYLTYPE & lie ) {
    return LineInfo(yyextra->g_FileAccessStack.back(),
        li.first_column,li.first_line,
        lie.last_column,lie.last_line);
}


