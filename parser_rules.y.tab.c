/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* First part of user prologue.  */
#line 3 "parser_rules.y"

#include <stdio.h>
#include <stdlib.h>

#include "ast.h"

extern void yyerror(const char* s);
extern Vector* program_root;
extern int yylex();
extern int line;
extern int col;

#line 84 "parser_rules.y.tab.c"

#ifndef YY_CAST
#ifdef __cplusplus
#define YY_CAST(Type, Val) static_cast<Type>(Val)
#define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type>(Val)
#else
#define YY_CAST(Type, Val) ((Type)(Val))
#define YY_REINTERPRET_CAST(Type, Val) ((Type)(Val))
#endif
#endif
#ifndef YY_NULLPTR
#if defined __cplusplus
#if 201103L <= __cplusplus
#define YY_NULLPTR nullptr
#else
#define YY_NULLPTR 0
#endif
#else
#define YY_NULLPTR ((void*)0)
#endif
#endif

#include "parser_rules.y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t {
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,               /* "end of file"  */
  YYSYMBOL_YYerror = 1,             /* error  */
  YYSYMBOL_YYUNDEF = 2,             /* "invalid token"  */
  YYSYMBOL_TOKEN_INDICATOR = 3,     /* TOKEN_INDICATOR  */
  YYSYMBOL_TOKEN_STRATEGY = 4,      /* TOKEN_STRATEGY  */
  YYSYMBOL_TOKEN_IF = 5,            /* TOKEN_IF  */
  YYSYMBOL_TOKEN_INDENT = 6,        /* TOKEN_INDENT  */
  YYSYMBOL_TOKEN_DEDENT = 7,        /* TOKEN_DEDENT  */
  YYSYMBOL_TOKEN_ELSE = 8,          /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_FOR = 9,           /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_STEP = 10,         /* TOKEN_STEP  */
  YYSYMBOL_TOKEN_TO = 11,           /* TOKEN_TO  */
  YYSYMBOL_TOKEN_RETURN = 12,       /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_WHILE = 13,        /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_BREAK = 14,        /* TOKEN_BREAK  */
  YYSYMBOL_TOKEN_CONTINUE = 15,     /* TOKEN_CONTINUE  */
  YYSYMBOL_TOKEN_SWITCH = 16,       /* TOKEN_SWITCH  */
  YYSYMBOL_TOKEN_CASE = 17,         /* TOKEN_CASE  */
  YYSYMBOL_TOKEN_DEFAULT = 18,      /* TOKEN_DEFAULT  */
  YYSYMBOL_TOKEN_VAR = 19,          /* TOKEN_VAR  */
  YYSYMBOL_TOKEN_CONST = 20,        /* TOKEN_CONST  */
  YYSYMBOL_TOKEN_SIMPLE = 21,       /* TOKEN_SIMPLE  */
  YYSYMBOL_TOKEN_LOG_AND = 22,      /* TOKEN_LOG_AND  */
  YYSYMBOL_TOKEN_LOG_OR = 23,       /* TOKEN_LOG_OR  */
  YYSYMBOL_TOKEN_LOG_NOT = 24,      /* TOKEN_LOG_NOT  */
  YYSYMBOL_TOKEN_DONT_EQ = 25,      /* TOKEN_DONT_EQ  */
  YYSYMBOL_TOKEN_BIT_AND = 26,      /* TOKEN_BIT_AND  */
  YYSYMBOL_TOKEN_BIT_OR = 27,       /* TOKEN_BIT_OR  */
  YYSYMBOL_TOKEN_BIT_XOR = 28,      /* TOKEN_BIT_XOR  */
  YYSYMBOL_TOKEN_BIT_NOT = 29,      /* TOKEN_BIT_NOT  */
  YYSYMBOL_TOKEN_BIT_SHL = 30,      /* TOKEN_BIT_SHL  */
  YYSYMBOL_TOKEN_BIT_SHR = 31,      /* TOKEN_BIT_SHR  */
  YYSYMBOL_TOKEN_SEMICOLON = 32,    /* TOKEN_SEMICOLON  */
  YYSYMBOL_TOKEN_IMPORT = 33,       /* TOKEN_IMPORT  */
  YYSYMBOL_TOKEN_AS = 34,           /* TOKEN_AS  */
  YYSYMBOL_TOKEN_INPUT = 35,        /* TOKEN_INPUT  */
  YYSYMBOL_TOKEN_INT = 36,          /* TOKEN_INT  */
  YYSYMBOL_TOKEN_BOOL = 37,         /* TOKEN_BOOL  */
  YYSYMBOL_TOKEN_FLOAT = 38,        /* TOKEN_FLOAT  */
  YYSYMBOL_TOKEN_COLOR = 39,        /* TOKEN_COLOR  */
  YYSYMBOL_TOKEN_STRING_TYPE = 40,  /* TOKEN_STRING_TYPE  */
  YYSYMBOL_TOKEN_LPAREN = 41,       /* TOKEN_LPAREN  */
  YYSYMBOL_TOKEN_RPAREN = 42,       /* TOKEN_RPAREN  */
  YYSYMBOL_TOKEN_LBRACE = 43,       /* TOKEN_LBRACE  */
  YYSYMBOL_TOKEN_RBRACE = 44,       /* TOKEN_RBRACE  */
  YYSYMBOL_TOKEN_ASSIGN = 45,       /* TOKEN_ASSIGN  */
  YYSYMBOL_TOKEN_ASSIGN_RE = 46,    /* TOKEN_ASSIGN_RE  */
  YYSYMBOL_TOKEN_EQ = 47,           /* TOKEN_EQ  */
  YYSYMBOL_TOKEN_GT = 48,           /* TOKEN_GT  */
  YYSYMBOL_TOKEN_LT = 49,           /* TOKEN_LT  */
  YYSYMBOL_TOKEN_GT_OR_EQ = 50,     /* TOKEN_GT_OR_EQ  */
  YYSYMBOL_TOKEN_LT_OR_EQ = 51,     /* TOKEN_LT_OR_EQ  */
  YYSYMBOL_TOKEN_BIT_AND_EQ = 52,   /* TOKEN_BIT_AND_EQ  */
  YYSYMBOL_TOKEN_BIT_OR_EQ = 53,    /* TOKEN_BIT_OR_EQ  */
  YYSYMBOL_TOKEN_BIT_XOR_EQ = 54,   /* TOKEN_BIT_XOR_EQ  */
  YYSYMBOL_TOKEN_BIT_NOT_EQ = 55,   /* TOKEN_BIT_NOT_EQ  */
  YYSYMBOL_TOKEN_BIT_SHL_EQ = 56,   /* TOKEN_BIT_SHL_EQ  */
  YYSYMBOL_TOKEN_BIT_SHR_EQ = 57,   /* TOKEN_BIT_SHR_EQ  */
  YYSYMBOL_TOKEN_ARROW = 58,        /* TOKEN_ARROW  */
  YYSYMBOL_TOKEN_COMMA = 59,        /* TOKEN_COMMA  */
  YYSYMBOL_TOKEN_DOT = 60,          /* TOKEN_DOT  */
  YYSYMBOL_TOKEN_COLON = 61,        /* TOKEN_COLON  */
  YYSYMBOL_TOKEN_NUMBER = 62,       /* TOKEN_NUMBER  */
  YYSYMBOL_TOKEN_IDENTIFIER = 63,   /* TOKEN_IDENTIFIER  */
  YYSYMBOL_TOKEN_STRING = 64,       /* TOKEN_STRING  */
  YYSYMBOL_65_ = 65,                /* '+'  */
  YYSYMBOL_66_ = 66,                /* '-'  */
  YYSYMBOL_67_ = 67,                /* '*'  */
  YYSYMBOL_68_ = 68,                /* '/'  */
  YYSYMBOL_69_ = 69,                /* '%'  */
  YYSYMBOL_70_ = 70,                /* '('  */
  YYSYMBOL_71_ = 71,                /* '['  */
  YYSYMBOL_72_ = 72,                /* '.'  */
  YYSYMBOL_YYACCEPT = 73,           /* $accept  */
  YYSYMBOL_program = 74,            /* program  */
  YYSYMBOL_statement = 75,          /* statement  */
  YYSYMBOL_block = 76,              /* block  */
  YYSYMBOL_indicator_stmt = 77,     /* indicator_stmt  */
  YYSYMBOL_strategy_stmt = 78,      /* strategy_stmt  */
  YYSYMBOL_if_stmt = 79,            /* if_stmt  */
  YYSYMBOL_for_stmt = 80,           /* for_stmt  */
  YYSYMBOL_while_stmt = 81,         /* while_stmt  */
  YYSYMBOL_return_stmt = 82,        /* return_stmt  */
  YYSYMBOL_break_stmt = 83,         /* break_stmt  */
  YYSYMBOL_continue_stmt = 84,      /* continue_stmt  */
  YYSYMBOL_switch_stmt = 85,        /* switch_stmt  */
  YYSYMBOL_case_stmt = 86,          /* case_stmt  */
  YYSYMBOL_default_stmt = 87,       /* default_stmt  */
  YYSYMBOL_var_stmt = 88,           /* var_stmt  */
  YYSYMBOL_const_stmt = 89,         /* const_stmt  */
  YYSYMBOL_simple_stmt = 90,        /* simple_stmt  */
  YYSYMBOL_import_stmt = 91,        /* import_stmt  */
  YYSYMBOL_assignment_stmt = 92,    /* assignment_stmt  */
  YYSYMBOL_assignment_re_stmt = 93, /* assignment_re_stmt  */
  YYSYMBOL_expr = 94                /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;

#ifdef short
#undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
#include <limits.h> /* INFRINGES ON USER NAME SPACE */
#if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#define YY_STDINT_H
#endif
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
#undef UINT_LEAST8_MAX
#undef UINT_LEAST16_MAX
#define UINT_LEAST8_MAX 255
#define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H && \
       UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H && \
       UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
#if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#define YYPTRDIFF_T __PTRDIFF_TYPE__
#define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
#elif defined PTRDIFF_MAX
#ifndef ptrdiff_t
#include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#endif
#define YYPTRDIFF_T ptrdiff_t
#define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
#else
#define YYPTRDIFF_T long
#define YYPTRDIFF_MAXIMUM LONG_MAX
#endif
#endif

#ifndef YYSIZE_T
#ifdef __SIZE_TYPE__
#define YYSIZE_T __SIZE_TYPE__
#elif defined size_t
#define YYSIZE_T size_t
#elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#define YYSIZE_T size_t
#else
#define YYSIZE_T unsigned
#endif
#endif

#define YYSIZE_MAXIMUM                                                   \
  YY_CAST(YYPTRDIFF_T,                                                   \
          (YYPTRDIFF_MAXIMUM < YY_CAST(YYSIZE_T, -1) ? YYPTRDIFF_MAXIMUM \
                                                     : YY_CAST(YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST(YYPTRDIFF_T, sizeof(X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
#if defined YYENABLE_NLS && YYENABLE_NLS
#if ENABLE_NLS
#include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#define YY_(Msgid) dgettext("bison-runtime", Msgid)
#endif
#endif
#ifndef YY_
#define YY_(Msgid) Msgid
#endif
#endif

#ifndef YY_ATTRIBUTE_PURE
#if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#define YY_ATTRIBUTE_PURE __attribute__((__pure__))
#else
#define YY_ATTRIBUTE_PURE
#endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
#if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#define YY_ATTRIBUTE_UNUSED __attribute__((__unused__))
#else
#define YY_ATTRIBUTE_UNUSED
#endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if !defined lint || defined __GNUC__
#define YY_USE(E) ((void)(E))
#else
#define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && !defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
#if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
  _Pragma("GCC diagnostic push")            \
      _Pragma("GCC diagnostic ignored \"-Wuninitialized\"")
#else
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                 \
  _Pragma("GCC diagnostic push")                            \
      _Pragma("GCC diagnostic ignored \"-Wuninitialized\"") \
          _Pragma("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
#endif
#define YY_IGNORE_MAYBE_UNINITIALIZED_END _Pragma("GCC diagnostic pop")
#else
#define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
#define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
#define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && !defined __ICC && 6 <= __GNUC__
#define YY_IGNORE_USELESS_CAST_BEGIN \
  _Pragma("GCC diagnostic push")     \
      _Pragma("GCC diagnostic ignored \"-Wuseless-cast\"")
#define YY_IGNORE_USELESS_CAST_END _Pragma("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
#define YY_IGNORE_USELESS_CAST_BEGIN
#define YY_IGNORE_USELESS_CAST_END
#endif

#define YY_ASSERT(E) ((void)(0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

#ifdef YYSTACK_USE_ALLOCA
#if YYSTACK_USE_ALLOCA
#ifdef __GNUC__
#define YYSTACK_ALLOC __builtin_alloca
#elif defined __BUILTIN_VA_ARG_INCR
#include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#elif defined _AIX
#define YYSTACK_ALLOC __alloca
#elif defined _MSC_VER
#include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#define alloca _alloca
#else
#define YYSTACK_ALLOC alloca
#if !defined _ALLOCA_H && !defined EXIT_SUCCESS
#include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
/* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif
#endif
#endif
#endif
#endif

#ifdef YYSTACK_ALLOC
/* Pacify GCC's 'empty if-body' warning.  */
#define YYSTACK_FREE(Ptr) \
  do { /* empty */        \
    ;                     \
  } while (0)
#ifndef YYSTACK_ALLOC_MAXIMUM
/* The OS might guarantee only one guard page at the bottom of the stack,
   and a page size can be as small as 4096 bytes.  So we cannot safely
   invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
   to allow for a few compiler-allocated temporary stack slots.  */
#define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#endif
#else
#define YYSTACK_ALLOC YYMALLOC
#define YYSTACK_FREE YYFREE
#ifndef YYSTACK_ALLOC_MAXIMUM
#define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#endif
#if (defined __cplusplus && !defined EXIT_SUCCESS && \
     !((defined YYMALLOC || defined malloc) &&       \
       (defined YYFREE || defined free)))
#include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif
#endif
#ifndef YYMALLOC
#define YYMALLOC malloc
#if !defined malloc && !defined EXIT_SUCCESS
void* malloc(YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#endif
#endif
#ifndef YYFREE
#define YYFREE free
#if !defined free && !defined EXIT_SUCCESS
void free(void*); /* INFRINGES ON USER NAME SPACE */
#endif
#endif
#endif
#endif /* 1 */

#if (!defined yyoverflow &&   \
     (!defined __cplusplus || \
      (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc {
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
#define YYSTACK_GAP_MAXIMUM (YYSIZEOF(union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
#define YYSTACK_BYTES(N) \
  ((N) * (YYSIZEOF(yy_state_t) + YYSIZEOF(YYSTYPE)) + YYSTACK_GAP_MAXIMUM)

#define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
#define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
  do {                                                                 \
    YYPTRDIFF_T yynewbytes;                                            \
    YYCOPY(&yyptr->Stack_alloc, Stack, yysize);                        \
    Stack = &yyptr->Stack_alloc;                                       \
    yynewbytes = yystacksize * YYSIZEOF(*Stack) + YYSTACK_GAP_MAXIMUM; \
    yyptr += yynewbytes / YYSIZEOF(*yyptr);                            \
  } while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
#ifndef YYCOPY
#if defined __GNUC__ && 1 < __GNUC__
#define YYCOPY(Dst, Src, Count) \
  __builtin_memcpy(Dst, Src, YY_CAST(YYSIZE_T, (Count)) * sizeof(*(Src)))
#else
#define YYCOPY(Dst, Src, Count)                                  \
  do {                                                           \
    YYPTRDIFF_T yyi;                                             \
    for (yyi = 0; yyi < (Count); yyi++) (Dst)[yyi] = (Src)[yyi]; \
  } while (0)
#endif
#endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL 60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST 582

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS 73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS 22
/* YYNRULES -- Number of rules.  */
#define YYNRULES 72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES 141

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK 319

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                            \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                 \
       ? YY_CAST(yysymbol_kind_t, yytranslate[YYX]) \
       : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] = {
    0,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  69,
    2,  2,  70, 2,  67, 65, 2,  66, 72, 68, 2,  2,  2,  2,  2,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  71, 2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
    30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48,
    49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] = {
    0,   117, 117, 118, 120, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 145, 147, 154, 159, 164, 166, 171, 173,
    175, 180, 185, 187, 192, 197, 202, 207, 209, 214, 219, 221, 226, 231, 236,
    241, 246, 252, 254, 256, 258, 260, 262, 264, 266, 268, 270, 272, 274, 276,
    278, 280, 282, 284, 286, 288, 290, 292, 294, 296, 298, 300, 302};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST(yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char* yysymbol_name(yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char* const yytname[] = {"\"end of file\"",
                                      "error",
                                      "\"invalid token\"",
                                      "TOKEN_INDICATOR",
                                      "TOKEN_STRATEGY",
                                      "TOKEN_IF",
                                      "TOKEN_INDENT",
                                      "TOKEN_DEDENT",
                                      "TOKEN_ELSE",
                                      "TOKEN_FOR",
                                      "TOKEN_STEP",
                                      "TOKEN_TO",
                                      "TOKEN_RETURN",
                                      "TOKEN_WHILE",
                                      "TOKEN_BREAK",
                                      "TOKEN_CONTINUE",
                                      "TOKEN_SWITCH",
                                      "TOKEN_CASE",
                                      "TOKEN_DEFAULT",
                                      "TOKEN_VAR",
                                      "TOKEN_CONST",
                                      "TOKEN_SIMPLE",
                                      "TOKEN_LOG_AND",
                                      "TOKEN_LOG_OR",
                                      "TOKEN_LOG_NOT",
                                      "TOKEN_DONT_EQ",
                                      "TOKEN_BIT_AND",
                                      "TOKEN_BIT_OR",
                                      "TOKEN_BIT_XOR",
                                      "TOKEN_BIT_NOT",
                                      "TOKEN_BIT_SHL",
                                      "TOKEN_BIT_SHR",
                                      "TOKEN_SEMICOLON",
                                      "TOKEN_IMPORT",
                                      "TOKEN_AS",
                                      "TOKEN_INPUT",
                                      "TOKEN_INT",
                                      "TOKEN_BOOL",
                                      "TOKEN_FLOAT",
                                      "TOKEN_COLOR",
                                      "TOKEN_STRING_TYPE",
                                      "TOKEN_LPAREN",
                                      "TOKEN_RPAREN",
                                      "TOKEN_LBRACE",
                                      "TOKEN_RBRACE",
                                      "TOKEN_ASSIGN",
                                      "TOKEN_ASSIGN_RE",
                                      "TOKEN_EQ",
                                      "TOKEN_GT",
                                      "TOKEN_LT",
                                      "TOKEN_GT_OR_EQ",
                                      "TOKEN_LT_OR_EQ",
                                      "TOKEN_BIT_AND_EQ",
                                      "TOKEN_BIT_OR_EQ",
                                      "TOKEN_BIT_XOR_EQ",
                                      "TOKEN_BIT_NOT_EQ",
                                      "TOKEN_BIT_SHL_EQ",
                                      "TOKEN_BIT_SHR_EQ",
                                      "TOKEN_ARROW",
                                      "TOKEN_COMMA",
                                      "TOKEN_DOT",
                                      "TOKEN_COLON",
                                      "TOKEN_NUMBER",
                                      "TOKEN_IDENTIFIER",
                                      "TOKEN_STRING",
                                      "'+'",
                                      "'-'",
                                      "'*'",
                                      "'/'",
                                      "'%'",
                                      "'('",
                                      "'['",
                                      "'.'",
                                      "$accept",
                                      "program",
                                      "statement",
                                      "block",
                                      "indicator_stmt",
                                      "strategy_stmt",
                                      "if_stmt",
                                      "for_stmt",
                                      "while_stmt",
                                      "return_stmt",
                                      "break_stmt",
                                      "continue_stmt",
                                      "switch_stmt",
                                      "case_stmt",
                                      "default_stmt",
                                      "var_stmt",
                                      "const_stmt",
                                      "simple_stmt",
                                      "import_stmt",
                                      "assignment_stmt",
                                      "assignment_re_stmt",
                                      "expr",
                                      YY_NULLPTR};

static const char* yysymbol_name(yysymbol_kind_t yysymbol) {
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-52)

#define yypact_value_is_default(Yyn) ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) 0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] = {
    290, -39, -22, -20, -15, -4,  -4,  -52, -52, -4,  -4,  -34, -41, -25, -24,
    -40, -35, 102, -52, -52, -52, -52, -52, -52, -52, -52, -52, -52, -52, -52,
    -52, -52, -52, -52, -52, -52, -12, -9,  -4,  -4,  -4,  -4,  -52, 11,  -52,
    -4,  -4,  191, -52, 456, 191, 191, 318, 258, 19,  29,  -52, -52, -4,  -4,
    -52, -52, 44,  45,  366, -52, -52, 376, -4,  -52, -52, -4,  -4,  -4,  -4,
    -4,  -4,  -4,  -4,  290, -4,  -4,  -4,  -4,  -4,  -4,  -4,  -4,  -4,  -4,
    -52, -52, -52, -52, -4,  258, -52, -4,  -4,  456, 456, -52, -52, 258, -52,
    307, 513, 486, 217, 391, 294, -23, -37, -37, 46,  217, 217, 217, 217, 217,
    -51, -51, -52, -52, -52, 424, -52, 456, 456, 80,  -4,  -52, 258, 258, 124,
    -52, -52, -4,  -52, 191, -52};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] = {
    2,  0,  0,  0,  0,  33, 0,  34, 35, 0,  0,  0,  0,  0,  0,  0,  0,  0,
    3,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
    0,  0,  0,  0,  0,  0,  47, 48, 49, 0,  0,  0,  48, 32, 0,  0,  0,  0,
    41, 0,  43, 44, 0,  0,  1,  4,  0,  0,  0,  68, 69, 0,  0,  71, 70, 0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    23, 30, 31, 36, 0,  0,  39, 0,  0,  45, 46, 24, 25, 0,  72, 0,  55, 56,
    58, 63, 64, 65, 66, 67, 0,  57, 59, 60, 61, 62, 50, 51, 52, 53, 54, 0,
    37, 40, 42, 26, 0,  22, 0,  0,  0,  38, 27, 0,  28, 0,  29};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] = {-52, -52, 6,   -38, -52, -52, -52, -52,
                                      -52, -52, -52, -52, -52, -52, -52, -52,
                                      -52, -52, -52, -52, -52, -5};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] = {0,  17, 90, 91, 19, 20, 21, 22,
                                        23, 24, 25, 26, 27, 28, 29, 30,
                                        31, 32, 33, 34, 35, 47};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] = {
    49,  50,  36,  74,  51,  52,  18,  77,  78,  39,  58,  59,  92,  93,  40,
    96,  87,  88,  89,  37,  39,  38,  54,  61,  57,  40,  41,  53,  85,  86,
    87,  88,  89,  64,  65,  66,  67,  41,  55,  56,  69,  70,  85,  86,  87,
    88,  89,  42,  43,  44,  45,  46,  62,  99,  100, 63,  68,  126, 42,  48,
    44,  45,  46,  105, 97,  129, 106, 107, 108, 109, 110, 111, 112, 113, 98,
    115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 114, 101, 102, 133, 125,
    131, 0,   127, 128, 135, 136, 138, 0,   0,   0,   0,   140, 60,  0,   0,
    1,   2,   3,   0,   0,   0,   4,   0,   0,   5,   6,   7,   8,   9,   10,
    11,  12,  13,  14,  0,   134, 0,   1,   2,   3,   0,   0,   139, 4,   137,
    15,  5,   6,   7,   8,   9,   10,  11,  12,  13,  14,  71,  72,  0,   73,
    74,  75,  76,  0,   77,  78,  0,   15,  0,   0,   0,   0,   0,   0,   0,
    16,  0,   79,  0,   0,   0,   80,  81,  82,  83,  84,  0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   16,  0,   85,  86,  87,  88,  89,  1,
    2,   3,   0,   0,   0,   4,   0,   0,   5,   6,   7,   8,   9,   10,  11,
    12,  13,  14,  71,  72,  0,   73,  74,  75,  76,  0,   77,  78,  0,   15,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   79,  0,   0,   0,   80,  81,
    82,  83,  84,  74,  75,  76,  0,   77,  78,  0,   0,   0,   0,   0,   16,
    0,   85,  86,  87,  88,  89,  1,   2,   3,   0,   0,   0,   4,   0,   0,
    5,   6,   7,   8,   9,   10,  11,  12,  13,  14,  0,   0,   85,  86,  87,
    88,  89,  0,   0,   0,   0,   15,  0,   1,   2,   3,   0,   0,   0,   4,
    0,   79,  5,   6,   7,   8,   9,   10,  11,  12,  13,  14,  0,   0,   0,
    0,   0,   0,   130, 0,   74,  16,  76,  15,  77,  78,  0,   0,   0,   71,
    72,  0,   73,  74,  75,  76,  0,   77,  78,  0,   71,  72,  0,   73,  74,
    75,  76,  0,   77,  78,  0,   0,   0,   16,  80,  81,  82,  83,  84,  85,
    86,  87,  88,  89,  0,   80,  81,  82,  83,  84,  0,   0,   85,  86,  87,
    88,  89,  94,  0,   95,  0,   0,   0,   85,  86,  87,  88,  89,  71,  72,
    0,   73,  74,  75,  76,  0,   77,  78,  71,  72,  0,   73,  74,  75,  76,
    0,   77,  78,  103, 0,   0,   0,   0,   80,  81,  82,  83,  84,  104, 0,
    0,   77,  78,  80,  81,  82,  83,  84,  0,   0,   0,   85,  86,  87,  88,
    89,  0,   0,   0,   0,   0,   85,  86,  87,  88,  89,  71,  72,  0,   73,
    74,  75,  76,  0,   77,  78,  85,  86,  87,  88,  89,  0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   80,  81,  82,  83,  84,  0,   0,   71,  72,
    0,   73,  74,  75,  76,  132, 77,  78,  0,   85,  86,  87,  88,  89,  0,
    0,   0,   0,   0,   0,   0,   0,   0,   80,  81,  82,  83,  84,  71,  0,
    0,   73,  74,  75,  76,  0,   77,  78,  0,   0,   0,   85,  86,  87,  88,
    89,  0,   0,   0,   0,   0,   0,   0,   80,  81,  82,  83,  84,  73,  74,
    75,  76,  0,   77,  78,  0,   0,   0,   0,   0,   0,   85,  86,  87,  88,
    89,  0,   0,   0,   0,   80,  81,  82,  83,  84,  0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   85,  86,  87,  88,  89};

static const yytype_int16 yycheck[] = {
    5,  6,  41, 26, 9,   10,  0,   30, 31, 24, 45, 46,  50, 51, 29, 53, 67, 68,
    69, 41, 24, 41, 63,  17,  64,  29, 41, 61, 65, 66,  67, 68, 69, 38, 39, 40,
    41, 41, 63, 63, 45,  46,  65,  66, 67, 68, 69, 62,  63, 64, 65, 66, 64, 58,
    59, 64, 45, 95, 62,  63,  64,  65, 66, 68, 45, 103, 71, 72, 73, 74, 75, 76,
    77, 78, 45, 80, 81,  82,  83,  84, 85, 86, 87, 88,  89, 79, 42, 42, 8,  94,
    44, -1, 97, 98, 132, 133, 134, -1, -1, -1, -1, 139, 0,  -1, -1, 3,  4,  5,
    -1, -1, -1, 9,  -1,  -1,  12,  13, 14, 15, 16, 17,  18, 19, 20, 21, -1, 130,
    -1, 3,  4,  5,  -1,  -1,  137, 9,  10, 33, 12, 13,  14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, -1,  25,  26,  27, 28, -1, 30, 31,  -1, 33, -1, -1, -1, -1,
    -1, -1, -1, 63, -1,  43,  -1,  -1, -1, 47, 48, 49,  50, 51, -1, -1, -1, -1,
    -1, -1, -1, -1, -1,  -1,  -1,  63, -1, 65, 66, 67,  68, 69, 3,  4,  5,  -1,
    -1, -1, 9,  -1, -1,  12,  13,  14, 15, 16, 17, 18,  19, 20, 21, 22, 23, -1,
    25, 26, 27, 28, -1,  30,  31,  -1, 33, -1, -1, -1,  -1, -1, -1, -1, -1, -1,
    43, -1, -1, -1, 47,  48,  49,  50, 51, 26, 27, 28,  -1, 30, 31, -1, -1, -1,
    -1, -1, 63, -1, 65,  66,  67,  68, 69, 3,  4,  5,   -1, -1, -1, 9,  -1, -1,
    12, 13, 14, 15, 16,  17,  18,  19, 20, 21, -1, -1,  65, 66, 67, 68, 69, -1,
    -1, -1, -1, 33, -1,  3,   4,   5,  -1, -1, -1, 9,   -1, 43, 12, 13, 14, 15,
    16, 17, 18, 19, 20,  21,  -1,  -1, -1, -1, -1, -1,  11, -1, 26, 63, 28, 33,
    30, 31, -1, -1, -1,  22,  23,  -1, 25, 26, 27, 28,  -1, 30, 31, -1, 22, 23,
    -1, 25, 26, 27, 28,  -1,  30,  31, -1, -1, -1, 63,  47, 48, 49, 50, 51, 65,
    66, 67, 68, 69, -1,  47,  48,  49, 50, 51, -1, -1,  65, 66, 67, 68, 69, 59,
    -1, 61, -1, -1, -1,  65,  66,  67, 68, 69, 22, 23,  -1, 25, 26, 27, 28, -1,
    30, 31, 22, 23, -1,  25,  26,  27, 28, -1, 30, 31,  42, -1, -1, -1, -1, 47,
    48, 49, 50, 51, 42,  -1,  -1,  30, 31, 47, 48, 49,  50, 51, -1, -1, -1, 65,
    66, 67, 68, 69, -1,  -1,  -1,  -1, -1, 65, 66, 67,  68, 69, 22, 23, -1, 25,
    26, 27, 28, -1, 30,  31,  65,  66, 67, 68, 69, -1,  -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 47, 48,  49,  50,  51, -1, -1, 22, 23,  -1, 25, 26, 27, 28, 61,
    30, 31, -1, 65, 66,  67,  68,  69, -1, -1, -1, -1,  -1, -1, -1, -1, -1, 47,
    48, 49, 50, 51, 22,  -1,  -1,  25, 26, 27, 28, -1,  30, 31, -1, -1, -1, 65,
    66, 67, 68, 69, -1,  -1,  -1,  -1, -1, -1, -1, 47,  48, 49, 50, 51, 25, 26,
    27, 28, -1, 30, 31,  -1,  -1,  -1, -1, -1, -1, 65,  66, 67, 68, 69, -1, -1,
    -1, -1, 47, 48, 49,  50,  51,  -1, -1, -1, -1, -1,  -1, -1, -1, -1, -1, -1,
    -1, -1, 65, 66, 67,  68,  69};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] = {
    0,  3,  4,  5,  9,  12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 33, 63, 74,
    75, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93,
    41, 41, 41, 24, 29, 41, 62, 63, 64, 65, 66, 94, 63, 94, 94, 94, 94, 61,
    63, 63, 63, 64, 45, 46, 0,  75, 64, 64, 94, 94, 94, 94, 45, 94, 94, 22,
    23, 25, 26, 27, 28, 30, 31, 43, 47, 48, 49, 50, 51, 65, 66, 67, 68, 69,
    75, 76, 76, 76, 59, 61, 76, 45, 45, 94, 94, 42, 42, 42, 42, 94, 94, 94,
    94, 94, 94, 94, 94, 94, 75, 94, 94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
    76, 94, 94, 76, 11, 44, 61, 8,  94, 76, 76, 10, 76, 94, 76};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] = {
    0,  73, 74, 74, 74, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
    75, 75, 75, 76, 76, 77, 78, 79, 79, 80, 80, 80, 81, 82, 82, 83, 84, 85, 86,
    86, 87, 88, 88, 89, 90, 91, 92, 93, 94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
    94, 94, 94, 94, 94, 94, 94, 94, 94, 94, 94, 94, 94, 94, 94, 94};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
 */
static const yytype_int8 yyr2[] = {
    0, 2, 0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 4,
    4, 5, 7, 7, 9, 3, 3, 2, 1, 1, 1, 3, 4, 6, 3, 4, 2, 4, 2, 2, 3, 3, 1, 1, 1,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 3};

enum { YYENOMEM = -2 };

#define yyerrok (yyerrstatus = 0)
#define yyclearin (yychar = YYEMPTY)

#define YYACCEPT goto yyacceptlab
#define YYABORT goto yyabortlab
#define YYERROR goto yyerrorlab
#define YYNOMEM goto yyexhaustedlab

#define YYRECOVERING() (!!yyerrstatus)

#define YYBACKUP(Token, Value)                      \
  do                                                \
    if (yychar == YYEMPTY) {                        \
      yychar = (Token);                             \
      yylval = (Value);                             \
      YYPOPSTACK(yylen);                            \
      yystate = *yyssp;                             \
      goto yybackup;                                \
    } else {                                        \
      yyerror(YY_("syntax error: cannot back up")); \
      YYERROR;                                      \
    }                                               \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* Enable debugging if requested.  */
#if YYDEBUG

#ifndef YYFPRINTF
#include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#define YYFPRINTF fprintf
#endif

#define YYDPRINTF(Args)          \
  do {                           \
    if (yydebug) YYFPRINTF Args; \
  } while (0)

#define YY_SYMBOL_PRINT(Title, Kind, Value, Location) \
  do {                                                \
    if (yydebug) {                                    \
      YYFPRINTF(stderr, "%s ", Title);                \
      yy_symbol_print(stderr, Kind, Value);           \
      YYFPRINTF(stderr, "\n");                        \
    }                                                 \
  } while (0)

/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void yy_symbol_value_print(FILE* yyo, yysymbol_kind_t yykind,
                                  YYSTYPE const* const yyvaluep) {
  FILE* yyoutput = yyo;
  YY_USE(yyoutput);
  if (!yyvaluep) return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE(yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void yy_symbol_print(FILE* yyo, yysymbol_kind_t yykind,
                            YYSTYPE const* const yyvaluep) {
  YYFPRINTF(yyo, "%s %s (", yykind < YYNTOKENS ? "token" : "nterm",
            yysymbol_name(yykind));

  yy_symbol_value_print(yyo, yykind, yyvaluep);
  YYFPRINTF(yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void yy_stack_print(yy_state_t* yybottom, yy_state_t* yytop) {
  YYFPRINTF(stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++) {
    int yybot = *yybottom;
    YYFPRINTF(stderr, " %d", yybot);
  }
  YYFPRINTF(stderr, "\n");
}

#define YY_STACK_PRINT(Bottom, Top)               \
  do {                                            \
    if (yydebug) yy_stack_print((Bottom), (Top)); \
  } while (0)

/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void yy_reduce_print(yy_state_t* yyssp, YYSTYPE* yyvsp, int yyrule) {
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF(stderr, "Reducing stack by rule %d (line %d):\n", yyrule - 1,
            yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++) {
    YYFPRINTF(stderr, "   $%d = ", yyi + 1);
    yy_symbol_print(stderr, YY_ACCESSING_SYMBOL(+yyssp[yyi + 1 - yynrhs]),
                    &yyvsp[(yyi + 1) - (yynrhs)]);
    YYFPRINTF(stderr, "\n");
  }
}

#define YY_REDUCE_PRINT(Rule)                         \
  do {                                                \
    if (yydebug) yy_reduce_print(yyssp, yyvsp, Rule); \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
#define YYDPRINTF(Args) ((void)0)
#define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
#define YY_STACK_PRINT(Bottom, Top)
#define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
#define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Context of a parse error.  */
typedef struct {
  yy_state_t* yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int yypcontext_expected_tokens(const yypcontext_t* yyctx,
                                      yysymbol_kind_t yyarg[], int yyargn) {
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default(yyn)) {
    /* Start YYX at -YYN if negative to avoid negative indexes in
       YYCHECK.  In other words, skip the first -YYN actions for
       this state because they are default actions.  */
    int yyxbegin = yyn < 0 ? -yyn : 0;
    /* Stay within bounds of both yycheck and yytname.  */
    int yychecklim = YYLAST - yyn + 1;
    int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
    int yyx;
    for (yyx = yyxbegin; yyx < yyxend; ++yyx)
      if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror &&
          !yytable_value_is_error(yytable[yyx + yyn])) {
        if (!yyarg)
          ++yycount;
        else if (yycount == yyargn)
          return 0;
        else
          yyarg[yycount++] = YY_CAST(yysymbol_kind_t, yyx);
      }
  }
  if (yyarg && yycount == 0 && 0 < yyargn) yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}

#ifndef yystrlen
#if defined __GLIBC__ && defined _STRING_H
#define yystrlen(S) (YY_CAST(YYPTRDIFF_T, strlen(S)))
#else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T yystrlen(const char* yystr) {
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++) continue;
  return yylen;
}
#endif
#endif

#ifndef yystpcpy
#if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#define yystpcpy stpcpy
#else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char* yystpcpy(char* yydest, const char* yysrc) {
  char* yyd = yydest;
  const char* yys = yysrc;

  while ((*yyd++ = *yys++) != '\0') continue;

  return yyd - 1;
}
#endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T yytnamerr(char* yyres, const char* yystr) {
  if (*yystr == '"') {
    YYPTRDIFF_T yyn = 0;
    char const* yyp = yystr;
    for (;;) switch (*++yyp) {
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
          if (yyres) yyres[yyn] = *yyp;
          yyn++;
          break;

        case '"':
          if (yyres) yyres[yyn] = '\0';
          return yyn;
      }
  do_not_strip_quotes:;
  }

  if (yyres)
    return yystpcpy(yyres, yystr) - yyres;
  else
    return yystrlen(yystr);
}
#endif

static int yy_syntax_error_arguments(const yypcontext_t* yyctx,
                                     yysymbol_kind_t yyarg[], int yyargn) {
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY) {
    int yyn;
    if (yyarg) yyarg[yycount] = yyctx->yytoken;
    ++yycount;
    yyn = yypcontext_expected_tokens(yyctx, yyarg ? yyarg + 1 : yyarg,
                                     yyargn - 1);
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
static int yysyntax_error(YYPTRDIFF_T* yymsg_alloc, char** yymsg,
                          const yypcontext_t* yyctx) {
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char* yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments(yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM) return YYENOMEM;

  switch (yycount) {
#define YYCASE_(N, S) \
  case N:             \
    yyformat = S;     \
    break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(
          5,
          YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
  }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen(yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi) {
      YYPTRDIFF_T yysize1 = yysize + yytnamerr(YY_NULLPTR, yytname[yyarg[yyi]]);
      if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
        yysize = yysize1;
      else
        return YYENOMEM;
    }
  }

  if (*yymsg_alloc < yysize) {
    *yymsg_alloc = 2 * yysize;
    if (!(yysize <= *yymsg_alloc && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
      *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
    return -1;
  }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char* yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount) {
        yyp += yytnamerr(yyp, yytname[yyarg[yyi++]]);
        yyformat += 2;
      } else {
        ++yyp;
        ++yyformat;
      }
  }
  return 0;
}

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void yydestruct(const char* yymsg, yysymbol_kind_t yykind,
                       YYSTYPE* yyvaluep) {
  YY_USE(yyvaluep);
  if (!yymsg) yymsg = "Deleting";
  YY_SYMBOL_PRINT(yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE(yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;

/*----------.
| yyparse.  |
`----------*/

int yyparse(void) {
  yy_state_fast_t yystate = 0;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus = 0;

  /* Refer to the stacks through separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* Their size.  */
  YYPTRDIFF_T yystacksize = YYINITDEPTH;

  /* The state stack: array, bottom, top.  */
  yy_state_t yyssa[YYINITDEPTH];
  yy_state_t* yyss = yyssa;
  yy_state_t* yyssp = yyss;

  /* The semantic value stack: array, bottom, top.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE* yyvs = yyvsa;
  YYSTYPE* yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char* yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N) (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  YYDPRINTF((stderr, "Entering state %d\n", yystate));
  YY_ASSERT(0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST(yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT(yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
  {
    /* Get the current used size of the three stacks, in elements.  */
    YYPTRDIFF_T yysize = yyssp - yyss + 1;

#if defined yyoverflow
    {
      /* Give user a chance to reallocate the stack.  Use copies of
         these so that the &'s don't force the real ones into
         memory.  */
      yy_state_t* yyss1 = yyss;
      YYSTYPE* yyvs1 = yyvs;

      /* Each stack pointer address is followed by the size of the
         data in use in that stack, in bytes.  This used to be a
         conditional around just the two extra args, but that might
         be undefined if yyoverflow is a macro.  */
      yyoverflow(YY_("memory exhausted"), &yyss1, yysize * YYSIZEOF(*yyssp),
                 &yyvs1, yysize * YYSIZEOF(*yyvsp), &yystacksize);
      yyss = yyss1;
      yyvs = yyvs1;
    }
#else /* defined YYSTACK_RELOCATE */
    /* Extend the stack our own way.  */
    if (YYMAXDEPTH <= yystacksize) YYNOMEM;
    yystacksize *= 2;
    if (YYMAXDEPTH < yystacksize) yystacksize = YYMAXDEPTH;

    {
      yy_state_t* yyss1 = yyss;
      union yyalloc* yyptr =
          YY_CAST(union yyalloc*,
                  YYSTACK_ALLOC(YY_CAST(YYSIZE_T, YYSTACK_BYTES(yystacksize))));
      if (!yyptr) YYNOMEM;
      YYSTACK_RELOCATE(yyss_alloc, yyss);
      YYSTACK_RELOCATE(yyvs_alloc, yyvs);
#undef YYSTACK_RELOCATE
      if (yyss1 != yyssa) YYSTACK_FREE(yyss1);
    }
#endif

    yyssp = yyss + yysize - 1;
    yyvsp = yyvs + yysize - 1;

    YY_IGNORE_USELESS_CAST_BEGIN
    YYDPRINTF(
        (stderr, "Stack size increased to %ld\n", YY_CAST(long, yystacksize)));
    YY_IGNORE_USELESS_CAST_END

    if (yyss + yystacksize - 1 <= yyssp) YYABORT;
  }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL) YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default(yyn)) goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY) {
    YYDPRINTF((stderr, "Reading a token\n"));
    yychar = yylex();
  }

  if (yychar <= YYEOF) {
    yychar = YYEOF;
    yytoken = YYSYMBOL_YYEOF;
    YYDPRINTF((stderr, "Now at end of input.\n"));
  } else if (yychar == YYerror) {
    /* The scanner already issued an error message, process directly
       to error recovery.  But do not keep the error token as
       lookahead, it is too special and may lead us to an endless
       loop in error recovery. */
    yychar = YYUNDEF;
    yytoken = YYSYMBOL_YYerror;
    goto yyerrlab1;
  } else {
    yytoken = YYTRANSLATE(yychar);
    YY_SYMBOL_PRINT("Next token is", yytoken, &yylval, &yylloc);
  }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken) goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0) {
    if (yytable_value_is_error(yyn)) goto yyerrlab;
    yyn = -yyn;
    goto yyreduce;
  }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus) yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;

/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0) goto yyerrlab;
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
  yyval = yyvsp[1 - yylen];

  YY_REDUCE_PRINT(yyn);
  switch (yyn) {
    case 2: /* program: %empty  */
#line 117 "parser_rules.y"
    {
    }
#line 1630 "parser_rules.y.tab.c"
    break;

    case 3: /* program: statement  */
#line 119 "parser_rules.y"
    {
      vec_push(program_root, (yyvsp[0].node));
    }
#line 1636 "parser_rules.y.tab.c"
    break;

    case 4: /* program: program statement  */
#line 121 "parser_rules.y"
    {
      vec_push(program_root, (yyvsp[0].node));
    }
#line 1642 "parser_rules.y.tab.c"
    break;

    case 22: /* block: TOKEN_LBRACE statement TOKEN_RBRACE  */
#line 146 "parser_rules.y"
    {
      (yyval.node) = (yyvsp[-1].node);
    }
#line 1648 "parser_rules.y.tab.c"
    break;

    case 23: /* block: statement  */
#line 148 "parser_rules.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 1654 "parser_rules.y.tab.c"
    break;

    case 24: /* indicator_stmt: TOKEN_INDICATOR TOKEN_LPAREN TOKEN_STRING
                TOKEN_RPAREN  */
#line 155 "parser_rules.y"
    {
      (yyval.node) = new_indicator_node((yyvsp[-1].sval));
    }
#line 1660 "parser_rules.y.tab.c"
    break;

    case 25: /* strategy_stmt: TOKEN_STRATEGY TOKEN_LPAREN TOKEN_STRING
                TOKEN_RPAREN  */
#line 160 "parser_rules.y"
    {
      (yyval.node) = new_strategy_node((yyvsp[-1].sval));
    }
#line 1666 "parser_rules.y.tab.c"
    break;

    case 26: /* if_stmt: TOKEN_IF TOKEN_LPAREN expr TOKEN_RPAREN block  */
#line 165 "parser_rules.y"
    {
      (yyval.node) = new_if_node((yyvsp[-2].node), (yyvsp[0].node), NULL);
    }
#line 1672 "parser_rules.y.tab.c"
    break;

    case 27: /* if_stmt: TOKEN_IF TOKEN_LPAREN expr TOKEN_RPAREN block
                TOKEN_ELSE block  */
#line 167 "parser_rules.y"
    {
      (yyval.node) =
          new_if_node((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1678 "parser_rules.y.tab.c"
    break;

    case 28: /* for_stmt: TOKEN_FOR TOKEN_IDENTIFIER TOKEN_ASSIGN expr TOKEN_TO
                expr block  */
#line 172 "parser_rules.y"
    {
      (yyval.node) = new_for_node((yyvsp[-5].sval), (yyvsp[-3].node),
                                  (yyvsp[-1].node), NULL, (yyvsp[0].node));
    }
#line 1684 "parser_rules.y.tab.c"
    break;

    case 29: /* for_stmt: TOKEN_FOR TOKEN_IDENTIFIER TOKEN_ASSIGN expr TOKEN_TO
                expr TOKEN_STEP expr block  */
#line 174 "parser_rules.y"
    {
      (yyval.node) =
          new_for_node((yyvsp[-7].sval), (yyvsp[-5].node), (yyvsp[-3].node),
                       (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1690 "parser_rules.y.tab.c"
    break;

    case 30: /* for_stmt: TOKEN_FOR expr block  */
#line 176 "parser_rules.y"
    {
      (yyval.node) =
          new_for_node(NULL, (yyvsp[-1].node), NULL, NULL, (yyvsp[0].node));
    }
#line 1696 "parser_rules.y.tab.c"
    break;

    case 31: /* while_stmt: TOKEN_WHILE expr block  */
#line 181 "parser_rules.y"
    {
      (yyval.node) = new_while_node((yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1702 "parser_rules.y.tab.c"
    break;

    case 32: /* return_stmt: TOKEN_RETURN expr  */
#line 186 "parser_rules.y"
    {
      (yyval.node) = new_return_node((yyvsp[0].node));
    }
#line 1708 "parser_rules.y.tab.c"
    break;

    case 33: /* return_stmt: TOKEN_RETURN  */
#line 188 "parser_rules.y"
    {
      (yyval.node) = new_return_node(NULL);
    }
#line 1714 "parser_rules.y.tab.c"
    break;

    case 34: /* break_stmt: TOKEN_BREAK  */
#line 193 "parser_rules.y"
    {
      (yyval.node) = new_break_node();
    }
#line 1720 "parser_rules.y.tab.c"
    break;

    case 35: /* continue_stmt: TOKEN_CONTINUE  */
#line 198 "parser_rules.y"
    {
      (yyval.node) = new_continue_node();
    }
#line 1726 "parser_rules.y.tab.c"
    break;

    case 36: /* switch_stmt: TOKEN_SWITCH expr block  */
#line 203 "parser_rules.y"
    {
      (yyval.node) = new_switch_node((yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1732 "parser_rules.y.tab.c"
    break;

    case 37: /* case_stmt: TOKEN_CASE expr TOKEN_COLON block  */
#line 208 "parser_rules.y"
    {
      (yyval.node) = new_case_node((yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1738 "parser_rules.y.tab.c"
    break;

    case 38: /* case_stmt: TOKEN_CASE expr TOKEN_COMMA expr TOKEN_COLON block */
#line 210 "parser_rules.y"
    {
      (yyval.node) = new_case_node_range((yyvsp[-4].node), (yyvsp[-2].node),
                                         (yyvsp[0].node));
    }
#line 1744 "parser_rules.y.tab.c"
    break;

    case 39: /* default_stmt: TOKEN_DEFAULT TOKEN_COLON block  */
#line 215 "parser_rules.y"
    {
      (yyval.node) = new_default_node((yyvsp[0].node));
    }
#line 1750 "parser_rules.y.tab.c"
    break;

    case 40: /* var_stmt: TOKEN_VAR TOKEN_IDENTIFIER TOKEN_ASSIGN expr  */
#line 220 "parser_rules.y"
    {
      (yyval.node) = new_var_node((yyvsp[-2].sval));
    }
#line 1756 "parser_rules.y.tab.c"
    break;

    case 41: /* var_stmt: TOKEN_VAR TOKEN_IDENTIFIER  */
#line 222 "parser_rules.y"
    {
      (yyval.node) = new_var_node((yyvsp[0].sval));
    }
#line 1762 "parser_rules.y.tab.c"
    break;

    case 42: /* const_stmt: TOKEN_CONST TOKEN_IDENTIFIER TOKEN_ASSIGN expr  */
#line 227 "parser_rules.y"
    {
      (yyval.node) = new_const_node((yyvsp[-2].sval), (yyvsp[0].node));
    }
#line 1768 "parser_rules.y.tab.c"
    break;

    case 43: /* simple_stmt: TOKEN_SIMPLE TOKEN_IDENTIFIER  */
#line 232 "parser_rules.y"
    {
      (yyval.node) = new_simple_node((yyvsp[0].sval));
    }
#line 1774 "parser_rules.y.tab.c"
    break;

    case 44: /* import_stmt: TOKEN_IMPORT TOKEN_STRING  */
#line 237 "parser_rules.y"
    {
      (yyval.node) = new_import_node((yyvsp[0].sval));
    }
#line 1780 "parser_rules.y.tab.c"
    break;

    case 45: /* assignment_stmt: TOKEN_IDENTIFIER TOKEN_ASSIGN expr  */
#line 242 "parser_rules.y"
    {
      (yyval.node) = new_assign_node((yyvsp[-2].sval), (yyvsp[0].node));
    }
#line 1786 "parser_rules.y.tab.c"
    break;

    case 46: /* assignment_re_stmt: TOKEN_IDENTIFIER TOKEN_ASSIGN_RE expr  */
#line 247 "parser_rules.y"
    {
      (yyval.node) = new_assign_re_node((yyvsp[-2].sval), (yyvsp[0].node));
    }
#line 1792 "parser_rules.y.tab.c"
    break;

    case 47: /* expr: TOKEN_NUMBER  */
#line 253 "parser_rules.y"
    {
      (yyval.node) = new_number_node((yyvsp[0].ival));
    }
#line 1798 "parser_rules.y.tab.c"
    break;

    case 48: /* expr: TOKEN_IDENTIFIER  */
#line 255 "parser_rules.y"
    {
      (yyval.node) = new_var_node((yyvsp[0].sval));
    }
#line 1804 "parser_rules.y.tab.c"
    break;

    case 49: /* expr: TOKEN_STRING  */
#line 257 "parser_rules.y"
    {
      (yyval.node) = new_string_node((yyvsp[0].sval));
    }
#line 1810 "parser_rules.y.tab.c"
    break;

    case 50: /* expr: expr '+' expr  */
#line 259 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("+", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1816 "parser_rules.y.tab.c"
    break;

    case 51: /* expr: expr '-' expr  */
#line 261 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("-", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1822 "parser_rules.y.tab.c"
    break;

    case 52: /* expr: expr '*' expr  */
#line 263 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("*", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1828 "parser_rules.y.tab.c"
    break;

    case 53: /* expr: expr '/' expr  */
#line 265 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("/", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1834 "parser_rules.y.tab.c"
    break;

    case 54: /* expr: expr '%' expr  */
#line 267 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("%", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1840 "parser_rules.y.tab.c"
    break;

    case 55: /* expr: expr TOKEN_LOG_AND expr  */
#line 269 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("&&", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1846 "parser_rules.y.tab.c"
    break;

    case 56: /* expr: expr TOKEN_LOG_OR expr  */
#line 271 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("||", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1852 "parser_rules.y.tab.c"
    break;

    case 57: /* expr: expr TOKEN_EQ expr  */
#line 273 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("==", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1858 "parser_rules.y.tab.c"
    break;

    case 58: /* expr: expr TOKEN_DONT_EQ expr  */
#line 275 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("!=", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1864 "parser_rules.y.tab.c"
    break;

    case 59: /* expr: expr TOKEN_GT expr  */
#line 277 "parser_rules.y"
    {
      (yyval.node) = new_binop_node(">", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1870 "parser_rules.y.tab.c"
    break;

    case 60: /* expr: expr TOKEN_LT expr  */
#line 279 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("<", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1876 "parser_rules.y.tab.c"
    break;

    case 61: /* expr: expr TOKEN_GT_OR_EQ expr  */
#line 281 "parser_rules.y"
    {
      (yyval.node) = new_binop_node(">=", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1882 "parser_rules.y.tab.c"
    break;

    case 62: /* expr: expr TOKEN_LT_OR_EQ expr  */
#line 283 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("<=", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1888 "parser_rules.y.tab.c"
    break;

    case 63: /* expr: expr TOKEN_BIT_AND expr  */
#line 285 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("&", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1894 "parser_rules.y.tab.c"
    break;

    case 64: /* expr: expr TOKEN_BIT_OR expr  */
#line 287 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("|", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1900 "parser_rules.y.tab.c"
    break;

    case 65: /* expr: expr TOKEN_BIT_XOR expr  */
#line 289 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("^", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1906 "parser_rules.y.tab.c"
    break;

    case 66: /* expr: expr TOKEN_BIT_SHL expr  */
#line 291 "parser_rules.y"
    {
      (yyval.node) = new_binop_node("<<", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1912 "parser_rules.y.tab.c"
    break;

    case 67: /* expr: expr TOKEN_BIT_SHR expr  */
#line 293 "parser_rules.y"
    {
      (yyval.node) = new_binop_node(">>", (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1918 "parser_rules.y.tab.c"
    break;

    case 68: /* expr: TOKEN_LOG_NOT expr  */
#line 295 "parser_rules.y"
    {
      (yyval.node) = new_unop_node("!", (yyvsp[0].node));
    }
#line 1924 "parser_rules.y.tab.c"
    break;

    case 69: /* expr: TOKEN_BIT_NOT expr  */
#line 297 "parser_rules.y"
    {
      (yyval.node) = new_unop_node("~", (yyvsp[0].node));
    }
#line 1930 "parser_rules.y.tab.c"
    break;

    case 70: /* expr: '-' expr  */
#line 299 "parser_rules.y"
    {
      (yyval.node) = new_unop_node("-", (yyvsp[0].node));
    }
#line 1936 "parser_rules.y.tab.c"
    break;

    case 71: /* expr: '+' expr  */
#line 301 "parser_rules.y"
    {
      (yyval.node) = new_unop_node("+", (yyvsp[0].node));
    }
#line 1942 "parser_rules.y.tab.c"
    break;

    case 72: /* expr: TOKEN_LPAREN expr TOKEN_RPAREN  */
#line 303 "parser_rules.y"
    {
      (yyval.node) = (yyvsp[-1].node);
    }
#line 1948 "parser_rules.y.tab.c"
    break;

#line 1952 "parser_rules.y.tab.c"

    default:
      break;
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
  YY_SYMBOL_PRINT("-> $$ =", YY_CAST(yysymbol_kind_t, yyr1[yyn]), &yyval,
                  &yyloc);

  YYPOPSTACK(yylen);
  yylen = 0;

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE(yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus) {
    ++yynerrs;
    {
      yypcontext_t yyctx = {yyssp, yytoken};
      char const* yymsgp = YY_("syntax error");
      int yysyntax_error_status;
      yysyntax_error_status = yysyntax_error(&yymsg_alloc, &yymsg, &yyctx);
      if (yysyntax_error_status == 0)
        yymsgp = yymsg;
      else if (yysyntax_error_status == -1) {
        if (yymsg != yymsgbuf) YYSTACK_FREE(yymsg);
        yymsg = YY_CAST(char*, YYSTACK_ALLOC(YY_CAST(YYSIZE_T, yymsg_alloc)));
        if (yymsg) {
          yysyntax_error_status = yysyntax_error(&yymsg_alloc, &yymsg, &yyctx);
          yymsgp = yymsg;
        } else {
          yymsg = yymsgbuf;
          yymsg_alloc = sizeof yymsgbuf;
          yysyntax_error_status = YYENOMEM;
        }
      }
      yyerror(yymsgp);
      if (yysyntax_error_status == YYENOMEM) YYNOMEM;
    }
  }

  if (yyerrstatus == 3) {
    /* If just tried and failed to reuse lookahead token after an
       error, discard it.  */

    if (yychar <= YYEOF) {
      /* Return failure if at end of input.  */
      if (yychar == YYEOF) YYABORT;
    } else {
      yydestruct("Error: discarding", yytoken, &yylval);
      yychar = YYEMPTY;
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
  if (0) YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK(yylen);
  yylen = 0;
  YY_STACK_PRINT(yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;

/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3; /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;) {
    yyn = yypact[yystate];
    if (!yypact_value_is_default(yyn)) {
      yyn += YYSYMBOL_YYerror;
      if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror) {
        yyn = yytable[yyn];
        if (0 < yyn) break;
      }
    }

    /* Pop the current state because it cannot handle the error token.  */
    if (yyssp == yyss) YYABORT;

    yydestruct("Error: popping", YY_ACCESSING_SYMBOL(yystate), yyvsp);
    YYPOPSTACK(1);
    yystate = *yyssp;
    YY_STACK_PRINT(yyss, yyssp);
  }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Shift the error token.  */
  YY_SYMBOL_PRINT("Shifting", YY_ACCESSING_SYMBOL(yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;

/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;

/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror(YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;

/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY) {
    /* Make sure we have latest lookahead translation.  See comments at
       user semantic actions for why this is necessary.  */
    yytoken = YYTRANSLATE(yychar);
    yydestruct("Cleanup: discarding lookahead", yytoken, &yylval);
  }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK(yylen);
  YY_STACK_PRINT(yyss, yyssp);
  while (yyssp != yyss) {
    yydestruct("Cleanup: popping", YY_ACCESSING_SYMBOL(+*yyssp), yyvsp);
    YYPOPSTACK(1);
  }
#ifndef yyoverflow
  if (yyss != yyssa) YYSTACK_FREE(yyss);
#endif
  if (yymsg != yymsgbuf) YYSTACK_FREE(yymsg);
  return yyresult;
}

#line 306 "parser_rules.y"
