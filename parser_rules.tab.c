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
#line 15 "parser_rules.y"

extern void yyerror(const char *s);

#line 75 "parser_rules.tab.c"

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

#include "parser_rules.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LOWEST_PREC = 3,                /* LOWEST_PREC  */
  YYSYMBOL_indicator_function = 4,         /* indicator_function  */
  YYSYMBOL_strategy_function = 5,          /* strategy_function  */
  YYSYMBOL_if_statement = 6,               /* if_statement  */
  YYSYMBOL_else_statement = 7,             /* else_statement  */
  YYSYMBOL_for_statement = 8,              /* for_statement  */
  YYSYMBOL_step = 9,                       /* step  */
  YYSYMBOL_to = 10,                        /* to  */
  YYSYMBOL_return_statement = 11,          /* return_statement  */
  YYSYMBOL_while_statement = 12,           /* while_statement  */
  YYSYMBOL_break_statement = 13,           /* break_statement  */
  YYSYMBOL_continue_statement = 14,        /* continue_statement  */
  YYSYMBOL_switch_statement = 15,          /* switch_statement  */
  YYSYMBOL_case_statement = 16,            /* case_statement  */
  YYSYMBOL_default_statement = 17,         /* default_statement  */
  YYSYMBOL_var = 18,                       /* var  */
  YYSYMBOL_const_statement = 19,           /* const_statement  */
  YYSYMBOL_simple = 20,                    /* simple  */
  YYSYMBOL_logical_and = 21,               /* logical_and  */
  YYSYMBOL_logical_or = 22,                /* logical_or  */
  YYSYMBOL_logical_not = 23,               /* logical_not  */
  YYSYMBOL_dont_equal = 24,                /* dont_equal  */
  YYSYMBOL_bitwise_and = 25,               /* bitwise_and  */
  YYSYMBOL_bitwise_or = 26,                /* bitwise_or  */
  YYSYMBOL_bitwise_xor = 27,               /* bitwise_xor  */
  YYSYMBOL_bitwise_not = 28,               /* bitwise_not  */
  YYSYMBOL_bitwise_shift_to_left = 29,     /* bitwise_shift_to_left  */
  YYSYMBOL_bitwise_shift_to_right = 30,    /* bitwise_shift_to_right  */
  YYSYMBOL_semicolon = 31,                 /* semicolon  */
  YYSYMBOL_import_statement = 32,          /* import_statement  */
  YYSYMBOL_as = 33,                        /* as  */
  YYSYMBOL_input_func = 34,                /* input_func  */
  YYSYMBOL_int_type = 35,                  /* int_type  */
  YYSYMBOL_bool_type = 36,                 /* bool_type  */
  YYSYMBOL_float_type = 37,                /* float_type  */
  YYSYMBOL_color_type = 38,                /* color_type  */
  YYSYMBOL_string_as_type = 39,            /* string_as_type  */
  YYSYMBOL_left_paren = 40,                /* left_paren  */
  YYSYMBOL_right_paren = 41,               /* right_paren  */
  YYSYMBOL_func_paren = 42,                /* func_paren  */
  YYSYMBOL_left_quad_brace = 43,           /* left_quad_brace  */
  YYSYMBOL_right_quad_brace = 44,          /* right_quad_brace  */
  YYSYMBOL_left_brace = 45,                /* left_brace  */
  YYSYMBOL_right_brace = 46,               /* right_brace  */
  YYSYMBOL_assign = 47,                    /* assign  */
  YYSYMBOL_re_assign = 48,                 /* re_assign  */
  YYSYMBOL_equals = 49,                    /* equals  */
  YYSYMBOL_greater_than = 50,              /* greater_than  */
  YYSYMBOL_lesser_than = 51,               /* lesser_than  */
  YYSYMBOL_plus = 52,                      /* plus  */
  YYSYMBOL_minus = 53,                     /* minus  */
  YYSYMBOL_multiply = 54,                  /* multiply  */
  YYSYMBOL_divide = 55,                    /* divide  */
  YYSYMBOL_divide_with_remind = 56,        /* divide_with_remind  */
  YYSYMBOL_greater_than_or_equals = 57,    /* greater_than_or_equals  */
  YYSYMBOL_lesser_than_or_equals = 58,     /* lesser_than_or_equals  */
  YYSYMBOL_bitwise_and_with_equals = 59,   /* bitwise_and_with_equals  */
  YYSYMBOL_bitwise_or_with_equals = 60,    /* bitwise_or_with_equals  */
  YYSYMBOL_bitwise_xor_with_equals = 61,   /* bitwise_xor_with_equals  */
  YYSYMBOL_bitwise_not_with_equals = 62,   /* bitwise_not_with_equals  */
  YYSYMBOL_bitwise_shift_right_with_equals = 63, /* bitwise_shift_right_with_equals  */
  YYSYMBOL_bitwise_shift_left_with_equals = 64, /* bitwise_shift_left_with_equals  */
  YYSYMBOL_comma = 65,                     /* comma  */
  YYSYMBOL_dot = 66,                       /* dot  */
  YYSYMBOL_colon = 67,                     /* colon  */
  YYSYMBOL_number = 68,                    /* number  */
  YYSYMBOL_identifier = 69,                /* identifier  */
  YYSYMBOL_string = 70,                    /* string  */
  YYSYMBOL_PREC_SINGLE_NAME = 71,          /* PREC_SINGLE_NAME  */
  YYSYMBOL_PREC_TYPE_NAME = 72,            /* PREC_TYPE_NAME  */
  YYSYMBOL_PREC_FUNC = 73,                 /* PREC_FUNC  */
  YYSYMBOL_PREC_CALL = 74,                 /* PREC_CALL  */
  YYSYMBOL_YYACCEPT = 75,                  /* $accept  */
  YYSYMBOL_program = 76,                   /* program  */
  YYSYMBOL_statement = 77,                 /* statement  */
  YYSYMBOL_block = 78,                     /* block  */
  YYSYMBOL_stmt_list = 79,                 /* stmt_list  */
  YYSYMBOL_stmt_block = 80,                /* stmt_block  */
  YYSYMBOL_if_body = 81,                   /* if_body  */
  YYSYMBOL_indicator_stmt = 82,            /* indicator_stmt  */
  YYSYMBOL_strategy_stmt = 83,             /* strategy_stmt  */
  YYSYMBOL_if_stmt = 84,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 85,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 86,                /* while_stmt  */
  YYSYMBOL_func_stmt = 87,                 /* func_stmt  */
  YYSYMBOL_opt_arg_list = 88,              /* opt_arg_list  */
  YYSYMBOL_arg_list = 89,                  /* arg_list  */
  YYSYMBOL_func_type = 90,                 /* func_type  */
  YYSYMBOL_pine_type = 91,                 /* pine_type  */
  YYSYMBOL_return_stmt_expr = 92,          /* return_stmt_expr  */
  YYSYMBOL_break_stmt = 93,                /* break_stmt  */
  YYSYMBOL_continue_stmt = 94,             /* continue_stmt  */
  YYSYMBOL_switch_stmt = 95,               /* switch_stmt  */
  YYSYMBOL_case_list = 96,                 /* case_list  */
  YYSYMBOL_case_stmt = 97,                 /* case_stmt  */
  YYSYMBOL_default_case = 98,              /* default_case  */
  YYSYMBOL_switch_block_stmt = 99,         /* switch_block_stmt  */
  YYSYMBOL_switch_block_stmts = 100,       /* switch_block_stmts  */
  YYSYMBOL_call_arg_stmt = 101,            /* call_arg_stmt  */
  YYSYMBOL_call_list = 102,                /* call_list  */
  YYSYMBOL_call_stmt = 103,                /* call_stmt  */
  YYSYMBOL_var_stmt = 104,                 /* var_stmt  */
  YYSYMBOL_const_stmt = 105,               /* const_stmt  */
  YYSYMBOL_simple_stmt = 106,              /* simple_stmt  */
  YYSYMBOL_import_stmt = 107,              /* import_stmt  */
  YYSYMBOL_assignment_stmt = 108,          /* assignment_stmt  */
  YYSYMBOL_assignment_re_stmt = 109,       /* assignment_re_stmt  */
  YYSYMBOL_expr = 110                      /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 8 "parser_rules.y"

#include "vector.h"
extern int yylex(void);
extern void yyerror(const char* s);
extern Vector* program_root;

#line 227 "parser_rules.tab.c"

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
typedef yytype_uint8 yy_state_t;

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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  66
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1039

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   329


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   138,   138,   140,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   166,   171,   173,   178,   182,   184,   189,   194,
     199,   201,   207,   209,   211,   216,   221,   226,   229,   233,
     242,   247,   249,   251,   253,   255,   257,   262,   264,   266,
     268,   270,   272,   277,   282,   287,   292,   297,   303,   309,
     316,   321,   327,   331,   333,   338,   340,   345,   347,   350,
     354,   358,   360,   362,   367,   369,   374,   376,   378,   383,
     388,   390,   392,   397,   399,   401,   407,   409,   411,   413,
     415,   417,   419,   421,   423,   425,   427,   429,   431,   433,
     435,   437,   439,   441,   443,   445,   447,   449,   451,   453,
     455,   457,   459,   461
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
  "\"end of file\"", "error", "\"invalid token\"", "LOWEST_PREC",
  "indicator_function", "strategy_function", "if_statement",
  "else_statement", "for_statement", "step", "to", "return_statement",
  "while_statement", "break_statement", "continue_statement",
  "switch_statement", "case_statement", "default_statement", "var",
  "const_statement", "simple", "logical_and", "logical_or", "logical_not",
  "dont_equal", "bitwise_and", "bitwise_or", "bitwise_xor", "bitwise_not",
  "bitwise_shift_to_left", "bitwise_shift_to_right", "semicolon",
  "import_statement", "as", "input_func", "int_type", "bool_type",
  "float_type", "color_type", "string_as_type", "left_paren",
  "right_paren", "func_paren", "left_quad_brace", "right_quad_brace",
  "left_brace", "right_brace", "assign", "re_assign", "equals",
  "greater_than", "lesser_than", "plus", "minus", "multiply", "divide",
  "divide_with_remind", "greater_than_or_equals", "lesser_than_or_equals",
  "bitwise_and_with_equals", "bitwise_or_with_equals",
  "bitwise_xor_with_equals", "bitwise_not_with_equals",
  "bitwise_shift_right_with_equals", "bitwise_shift_left_with_equals",
  "comma", "dot", "colon", "number", "identifier", "string",
  "PREC_SINGLE_NAME", "PREC_TYPE_NAME", "PREC_FUNC", "PREC_CALL",
  "$accept", "program", "statement", "block", "stmt_list", "stmt_block",
  "if_body", "indicator_stmt", "strategy_stmt", "if_stmt", "for_stmt",
  "while_stmt", "func_stmt", "opt_arg_list", "arg_list", "func_type",
  "pine_type", "return_stmt_expr", "break_stmt", "continue_stmt",
  "switch_stmt", "case_list", "case_stmt", "default_case",
  "switch_block_stmt", "switch_block_stmts", "call_arg_stmt", "call_list",
  "call_stmt", "var_stmt", "const_stmt", "simple_stmt", "import_stmt",
  "assignment_stmt", "assignment_re_stmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-182)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     354,   -17,   -11,     6,     8,   -18,    13,  -182,  -182,    15,
      -8,    -7,    17,   -18,   -18,    14,   -18,   -18,   -18,   -18,
    -182,    72,  -182,    90,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,   496,    18,    19,   -18,   444,  -182,   876,   -18,
     -18,    40,    52,    60,    74,    74,  -182,   534,   572,    74,
      74,   -18,   -20,   463,   463,    46,  -182,  -182,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,    80,
      84,   610,    77,   648,   686,   724,   463,   463,   463,  -182,
    -182,   -35,  -182,   876,  -182,  -182,  -182,  -182,  -182,  -182,
      89,    67,  -182,   -12,   -38,  -182,   876,  -182,   876,    94,
     949,   914,   983,   118,   893,   346,   163,   163,   762,   876,
     876,   983,   983,   983,    73,    73,    74,    74,    74,   983,
     983,  -182,  -182,   182,   -18,    92,    92,    95,  -182,   876,
    -182,   876,  -182,   876,  -182,   -18,    92,   -20,   -20,   -20,
    -182,   -18,  -182,   354,  -182,  -182,   134,   425,  -182,  -182,
    -182,  -182,  -182,  -182,    96,    -9,   -34,  -182,   225,  -182,
     182,   -18,    83,    76,   -20,  -182,  -182,  -182,  -182,  -182,
     387,   104,  -182,   108,   800,  -182,   105,   -18,    92,   354,
    -182,   354,    88,   838,  -182,  -182,  -182,   268,   311,  -182,
      92,   131,  -182,   132,  -182,  -182,  -182
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,     0,     2,     4,     5,     6,     7,     8,
      16,     9,    10,    11,    12,    17,    13,    14,    15,    18,
      19,    20,    21,     0,     0,     0,     0,    87,    53,     0,
       0,    72,     0,    76,   107,   108,    79,     0,     0,   110,
     109,    69,    38,     0,     0,     0,     1,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,   111,
     113,     0,    67,    70,    47,    48,    50,    51,    49,    52,
       0,    37,    40,    42,    87,    81,    80,    84,    83,     0,
      94,    95,    97,   102,   103,   104,   105,   106,     0,    82,
      85,    96,    98,    99,    89,    90,    91,    92,    93,   100,
     101,    28,    29,     0,     0,     0,     0,     0,    73,    71,
      75,    74,    78,    77,    65,     0,     0,     0,     0,     0,
      41,    69,   112,     0,    27,    26,    30,     0,    34,    35,
      58,    68,    36,    39,     0,    44,     0,    25,     0,    24,
       0,     0,    61,     0,     0,    43,    66,    22,    23,    31,
       0,     0,    57,     0,     0,    45,     0,     0,     0,     0,
      56,     0,     0,     0,    32,    62,    63,     0,     0,    46,
       0,     0,    64,     0,    33,    60,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,     1,  -113,  -182,   -13,   -14,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -137,     9,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -181,   -32,   -60,    21,    12,  -182,
    -182,  -182,  -182,  -182,  -182,    -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    23,   205,   165,   178,   179,   166,    25,    26,    27,
      28,    29,    30,   110,   111,   112,   113,    31,    32,    33,
      34,   182,   192,   193,   206,   207,    35,   101,   102,    36,
      37,    38,    39,    40,    41,    42
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      48,    24,    61,   115,   117,    13,   154,   186,    54,    55,
      14,    57,    58,    59,    60,   104,   105,   106,   107,   108,
     173,   174,    16,    43,    67,    17,   212,   212,    65,    44,
     155,   155,   168,   169,    18,    19,   148,   150,   152,   158,
      91,    93,   184,   172,    94,    95,    45,   196,    46,   109,
      20,    47,    22,    49,   159,    50,   103,   160,   116,   118,
     185,    51,    52,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,    56,   204,    53,    96,    89,    90,
      66,   149,   151,   153,     1,     2,     3,   214,     4,    97,
     191,     5,     6,     7,     8,     9,    13,    98,    10,    11,
      12,    14,    61,    13,    62,   119,    76,    76,    14,    63,
      64,   141,    15,    16,   144,   142,    17,    84,    85,    86,
      16,   156,   157,    17,   161,    18,    19,   163,    65,   167,
     170,   180,    18,    19,   164,   195,   183,    74,    75,   199,
     103,    20,    47,    22,   200,   202,   103,   209,    20,    21,
      22,    76,   215,   216,   177,   188,   189,   171,   175,   208,
      82,    83,    84,    85,    86,     0,   190,   194,     0,   177,
       0,   164,   176,     0,     0,     0,     1,     2,     3,     0,
       4,     0,   203,     5,     6,     7,     8,     9,     0,     0,
      10,    11,    12,     0,     0,    13,    76,     0,     0,     0,
      14,     0,     0,     0,    15,    82,    83,    84,    85,    86,
       0,     0,    16,     0,     0,    17,     0,   163,     0,     1,
       2,     3,     0,     4,    18,    19,     5,     6,     7,     8,
       9,     0,     0,    10,    11,    12,     0,     0,    13,     0,
      20,    21,    22,    14,     0,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,    16,     0,     0,    17,     0,
       0,   187,     1,     2,     3,     0,     4,    18,    19,     5,
       6,     7,     8,     9,     0,     0,    10,    11,    12,     0,
       0,    13,     0,    20,    21,    22,    14,     0,     0,     0,
      15,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,    17,     0,     0,   211,     1,     2,     3,     0,     4,
      18,    19,     5,     6,     7,     8,     9,     0,     0,    10,
      11,    12,     0,     0,    13,     0,    20,    21,    22,    14,
       0,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,    17,     0,     0,   213,     1,     2,
       3,     0,     4,    18,    19,     5,     6,     7,     8,     9,
       0,    71,    10,    11,    12,    74,    75,    13,     0,    20,
      21,    22,    14,     0,     0,     0,    15,     0,     0,    76,
       0,     0,     0,     0,    16,     0,   197,    17,    82,    83,
      84,    85,    86,     0,     0,     0,    18,    19,    68,    69,
       0,    70,    71,    72,    73,     0,    74,    75,     0,     0,
       0,     0,    20,    21,    22,     0,     0,     0,   198,     0,
      76,     0,     0,     0,     0,   181,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    68,    69,     0,    70,
      71,    72,    73,     0,    74,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    76,     0,
       0,     0,    14,     0,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    16,     0,    13,    17,     0,     0,
       0,    14,     0,     0,     0,     0,    18,    19,     0,     0,
       0,     0,     0,    16,     0,     0,    17,     0,     0,     0,
       0,     0,    20,    92,    22,    18,    19,    68,    69,     0,
      70,    71,    72,    73,     0,    74,    75,     0,     0,     0,
       0,    20,   114,    22,     0,     0,     0,     0,     0,    76,
       0,     0,     0,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    68,    69,     0,    70,    71,
      72,    73,     0,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,    76,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    68,    69,     0,    70,    71,    72,    73,
       0,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,   100,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    68,    69,     0,    70,    71,    72,    73,     0,    74,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,     0,    76,     0,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    68,
      69,     0,    70,    71,    72,    73,     0,    74,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   145,
       0,    76,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    68,    69,     0,
      70,    71,    72,    73,     0,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,     0,    76,
       0,     0,     0,     0,     0,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    68,    69,     0,    70,    71,
      72,    73,     0,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   147,     0,    76,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    68,    69,     0,    70,    71,    72,    73,
       0,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,   162,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    68,    69,     0,    70,    71,    72,    73,     0,    74,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,   201,     0,     0,     0,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    68,
      69,     0,    70,    71,    72,    73,     0,    74,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   210,
       0,    76,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    68,    69,     0,
      70,    71,    72,    73,     0,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    76,
      73,     0,    74,    75,     0,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    68,    76,     0,    70,    71,
      72,    73,     0,    74,    75,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    70,    71,    72,    73,     0,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    71,    72,
      73,     0,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,    82,    83,    84,    85,    86
};

static const yytype_int16 yycheck[] =
{
       5,     0,    40,    63,    64,    23,    41,    41,    13,    14,
      28,    16,    17,    18,    19,    35,    36,    37,    38,    39,
     157,   158,    40,    40,    23,    43,   207,   208,    66,    40,
      65,    65,   145,   146,    52,    53,    96,    97,    98,    51,
      45,    46,    51,   156,    49,    50,    40,   184,    40,    69,
      68,    69,    70,    40,    66,    40,    61,    69,    63,    64,
      69,    69,    69,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    70,   198,    69,    47,    70,    70,
       0,    96,    97,    98,     4,     5,     6,   210,     8,    47,
      17,    11,    12,    13,    14,    15,    23,    47,    18,    19,
      20,    28,    40,    23,    42,    69,    43,    43,    28,    47,
      48,    41,    32,    40,    47,    41,    43,    54,    55,    56,
      40,    42,    65,    43,    40,    52,    53,    45,    66,   144,
      45,     7,    52,    53,   143,    69,    50,    29,    30,    45,
     155,    68,    69,    70,    46,    50,   161,    69,    68,    69,
      70,    43,    31,    31,   163,   178,   180,   155,   159,   201,
      52,    53,    54,    55,    56,    -1,   181,   182,    -1,   178,
      -1,   180,   161,    -1,    -1,    -1,     4,     5,     6,    -1,
       8,    -1,   197,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    20,    -1,    -1,    23,    43,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    52,    53,    54,    55,    56,
      -1,    -1,    40,    -1,    -1,    43,    -1,    45,    -1,     4,
       5,     6,    -1,     8,    52,    53,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    20,    -1,    -1,    23,    -1,
      68,    69,    70,    28,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,
      -1,    46,     4,     5,     6,    -1,     8,    52,    53,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    20,    -1,
      -1,    23,    -1,    68,    69,    70,    28,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,    -1,    46,     4,     5,     6,    -1,     8,
      52,    53,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    20,    -1,    -1,    23,    -1,    68,    69,    70,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    46,     4,     5,
       6,    -1,     8,    52,    53,    11,    12,    13,    14,    15,
      -1,    25,    18,    19,    20,    29,    30,    23,    -1,    68,
      69,    70,    28,    -1,    -1,    -1,    32,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    40,    -1,     9,    43,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    52,    53,    21,    22,
      -1,    24,    25,    26,    27,    -1,    29,    30,    -1,    -1,
      -1,    -1,    68,    69,    70,    -1,    -1,    -1,    41,    -1,
      43,    -1,    -1,    -1,    -1,    10,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    21,    22,    -1,    24,
      25,    26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    43,    -1,
      -1,    -1,    28,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    40,    -1,    23,    43,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    52,    53,    21,    22,    -1,
      24,    25,    26,    27,    -1,    29,    30,    -1,    -1,    -1,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    21,    22,    -1,    24,    25,
      26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    21,    22,    -1,    24,    25,    26,    27,
      -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    21,    22,    -1,    24,    25,    26,    27,    -1,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    21,
      22,    -1,    24,    25,    26,    27,    -1,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    21,    22,    -1,
      24,    25,    26,    27,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    21,    22,    -1,    24,    25,
      26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    21,    22,    -1,    24,    25,    26,    27,
      -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    21,    22,    -1,    24,    25,    26,    27,    -1,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    21,
      22,    -1,    24,    25,    26,    27,    -1,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    21,    22,    -1,
      24,    25,    26,    27,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    43,
      27,    -1,    29,    30,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    21,    43,    -1,    24,    25,
      26,    27,    -1,    29,    30,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    24,    25,    26,    27,    -1,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    25,    26,
      27,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,     8,    11,    12,    13,    14,    15,
      18,    19,    20,    23,    28,    32,    40,    43,    52,    53,
      68,    69,    70,    76,    77,    82,    83,    84,    85,    86,
      87,    92,    93,    94,    95,   101,   104,   105,   106,   107,
     108,   109,   110,    40,    40,    40,    40,    69,   110,    40,
      40,    69,    69,    69,   110,   110,    70,   110,   110,   110,
     110,    40,    42,    47,    48,    66,     0,    77,    21,    22,
      24,    25,    26,    27,    29,    30,    43,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    70,
      70,   110,    69,   110,   110,   110,    47,    47,    47,    41,
      44,   102,   103,   110,    35,    36,    37,    38,    39,    69,
      88,    89,    90,    91,    69,   101,   110,   101,   110,    69,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,    41,    41,    41,    47,    41,    41,    41,   101,   110,
     101,   110,   101,   110,    41,    65,    42,    65,    51,    66,
      69,    40,    44,    45,    77,    78,    81,   110,    78,    78,
      45,   103,    78,    90,    90,    91,   102,    77,    79,    80,
       7,    10,    96,    50,    51,    69,    41,    46,    80,    81,
     110,    17,    97,    98,   110,    69,    90,     9,    41,    45,
      46,    45,    50,   110,    78,    77,    99,   100,   100,    69,
      41,    46,    99,    46,    78,    31,    31
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    75,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    78,    79,    79,    80,    81,    81,    82,    83,
      84,    84,    85,    85,    85,    86,    87,    88,    88,    89,
      89,    90,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    93,    94,    95,    96,    96,    97,
      98,    98,    99,   100,   100,   101,   101,   102,   102,   102,
     103,   104,   104,   104,   105,   105,   106,   106,   106,   107,
     108,   108,   108,   109,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     1,     1,     4,     4,
       5,     7,     9,    11,     5,     5,     5,     1,     0,     3,
       1,     2,     1,     4,     3,     5,     7,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     8,     2,     0,     5,
       5,     0,     1,     1,     2,     4,     6,     1,     3,     0,
       1,     4,     2,     4,     4,     4,     2,     4,     4,     2,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     4,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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

int
yyparse (void)
{
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
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: statement  */
#line 139 "parser_rules.y"
    { vec_push(program_root,(yyvsp[0].node)); }
#line 1777 "parser_rules.tab.c"
    break;

  case 3: /* program: program statement  */
#line 141 "parser_rules.y"
      {vec_push(program_root, (yyvsp[0].node));}
#line 1783 "parser_rules.tab.c"
    break;

  case 22: /* block: left_brace stmt_list right_brace  */
#line 167 "parser_rules.y"
    { (yyval.node) = new_stmt_node((yyvsp[-1].node)); }
#line 1789 "parser_rules.tab.c"
    break;

  case 23: /* stmt_list: stmt_list stmt_block  */
#line 172 "parser_rules.y"
    { (yyvsp[0].node)->block_node.next = (yyvsp[-1].node);(yyval.node) = (yyvsp[0].node); }
#line 1795 "parser_rules.tab.c"
    break;

  case 24: /* stmt_list: stmt_block  */
#line 174 "parser_rules.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1801 "parser_rules.tab.c"
    break;

  case 25: /* stmt_block: statement  */
#line 179 "parser_rules.y"
  { (yyval.node) = new_block_node((yyvsp[0].node));}
#line 1807 "parser_rules.tab.c"
    break;

  case 26: /* if_body: block  */
#line 183 "parser_rules.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1813 "parser_rules.tab.c"
    break;

  case 27: /* if_body: statement  */
#line 185 "parser_rules.y"
    { (yyval.node) = new_block_node((yyvsp[0].node)); }
#line 1819 "parser_rules.tab.c"
    break;

  case 28: /* indicator_stmt: indicator_function left_paren string right_paren  */
#line 190 "parser_rules.y"
    { (yyval.node) = new_indicator_node((yyvsp[-1].sval)); }
#line 1825 "parser_rules.tab.c"
    break;

  case 29: /* strategy_stmt: strategy_function left_paren string right_paren  */
#line 195 "parser_rules.y"
    { (yyval.node) = new_strategy_node((yyvsp[-1].sval)); }
#line 1831 "parser_rules.tab.c"
    break;

  case 30: /* if_stmt: if_statement left_paren expr right_paren if_body  */
#line 200 "parser_rules.y"
    { (yyval.node) = new_if_node((yyvsp[-2].node),(yyvsp[0].node),NULL); }
#line 1837 "parser_rules.tab.c"
    break;

  case 31: /* if_stmt: if_statement left_paren expr right_paren if_body else_statement if_body  */
#line 202 "parser_rules.y"
    { (yyval.node) = new_if_node((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1843 "parser_rules.tab.c"
    break;

  case 32: /* for_stmt: for_statement left_paren identifier assign expr to expr right_paren block  */
#line 208 "parser_rules.y"
    { (yyval.node) = new_for_node((yyvsp[-6].sval), (yyvsp[-4].node), (yyvsp[-2].node), NULL, (yyvsp[0].node)); }
#line 1849 "parser_rules.tab.c"
    break;

  case 33: /* for_stmt: for_statement left_paren identifier assign expr to expr step expr right_paren block  */
#line 210 "parser_rules.y"
    { (yyval.node) = new_for_node((yyvsp[-8].sval), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1855 "parser_rules.tab.c"
    break;

  case 34: /* for_stmt: for_statement left_paren expr right_paren block  */
#line 212 "parser_rules.y"
    { (yyval.node) = new_for_node(NULL, (yyvsp[-2].node), NULL, NULL, (yyvsp[0].node)); }
#line 1861 "parser_rules.tab.c"
    break;

  case 35: /* while_stmt: while_statement left_paren expr right_paren block  */
#line 217 "parser_rules.y"
    { (yyval.node) = new_while_node((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1867 "parser_rules.tab.c"
    break;

  case 36: /* func_stmt: identifier func_paren opt_arg_list func_paren block  */
#line 222 "parser_rules.y"
   { (yyval.node) = new_func_node((yyvsp[-4].sval),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1873 "parser_rules.tab.c"
    break;

  case 37: /* opt_arg_list: arg_list  */
#line 227 "parser_rules.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1879 "parser_rules.tab.c"
    break;

  case 38: /* opt_arg_list: %empty  */
#line 229 "parser_rules.y"
    { (yyval.node) = NULL; }
#line 1885 "parser_rules.tab.c"
    break;

  case 39: /* arg_list: arg_list comma func_type  */
#line 234 "parser_rules.y"
    { if((yyvsp[0].node)->type == AST_FUNC_ARG) {

    (yyvsp[0].node)->func_arg.next = (yyvsp[-2].node); (yyval.node) = (yyvsp[0].node); 
    }
    else if((yyvsp[0].node)->type == AST_ARR_FUNC_ARG) {
    (yyvsp[0].node)->func_containter_arg.next = (yyvsp[-2].node); (yyval.node) = (yyvsp[0].node);
    }
    }
#line 1898 "parser_rules.tab.c"
    break;

  case 40: /* arg_list: func_type  */
#line 243 "parser_rules.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1904 "parser_rules.tab.c"
    break;

  case 41: /* func_type: pine_type identifier  */
#line 248 "parser_rules.y"
  { (yyval.node) = new_func_type_node((yyvsp[-1].sval),(yyvsp[0].sval));}
#line 1910 "parser_rules.tab.c"
    break;

  case 42: /* func_type: pine_type  */
#line 250 "parser_rules.y"
  { (yyval.node) = new_func_type_node(NULL,(yyvsp[0].sval)); }
#line 1916 "parser_rules.tab.c"
    break;

  case 43: /* func_type: pine_type dot pine_type identifier  */
#line 252 "parser_rules.y"
  { (yyval.node) = new_func_type_dot_node((yyvsp[-3].sval),(yyvsp[-1].sval),(yyvsp[0].sval));}
#line 1922 "parser_rules.tab.c"
    break;

  case 44: /* func_type: pine_type dot pine_type  */
#line 254 "parser_rules.y"
  { (yyval.node) = new_func_type_dot_node((yyvsp[-2].sval),(yyvsp[0].sval),NULL);}
#line 1928 "parser_rules.tab.c"
    break;

  case 45: /* func_type: pine_type lesser_than func_type greater_than identifier  */
#line 256 "parser_rules.y"
   { (yyval.node) = new_array_func_type_node((yyvsp[-4].sval),(yyvsp[-2].node),(yyvsp[0].sval));}
#line 1934 "parser_rules.tab.c"
    break;

  case 46: /* func_type: pine_type dot pine_type lesser_than func_type greater_than identifier  */
#line 258 "parser_rules.y"
   { (yyval.node) = new_array_func_type_dot_node((yyvsp[-6].sval),(yyvsp[-4].sval),(yyvsp[-2].node),(yyvsp[0].sval));}
#line 1940 "parser_rules.tab.c"
    break;

  case 47: /* pine_type: int_type  */
#line 263 "parser_rules.y"
  { (yyval.sval) = new_type_name(int_type);}
#line 1946 "parser_rules.tab.c"
    break;

  case 48: /* pine_type: bool_type  */
#line 265 "parser_rules.y"
  { (yyval.sval) = new_type_name(bool_type);}
#line 1952 "parser_rules.tab.c"
    break;

  case 49: /* pine_type: string_as_type  */
#line 267 "parser_rules.y"
  { (yyval.sval) = new_type_name(string_as_type);}
#line 1958 "parser_rules.tab.c"
    break;

  case 50: /* pine_type: float_type  */
#line 269 "parser_rules.y"
  { (yyval.sval) = new_type_name(float_type);}
#line 1964 "parser_rules.tab.c"
    break;

  case 51: /* pine_type: color_type  */
#line 271 "parser_rules.y"
  { (yyval.sval) = new_type_name(color_type);}
#line 1970 "parser_rules.tab.c"
    break;

  case 52: /* pine_type: identifier  */
#line 273 "parser_rules.y"
  { (yyval.sval) = (yyvsp[0].sval);}
#line 1976 "parser_rules.tab.c"
    break;

  case 53: /* return_stmt_expr: return_statement expr  */
#line 278 "parser_rules.y"
    { (yyval.node) = new_return_node((yyvsp[0].node)); }
#line 1982 "parser_rules.tab.c"
    break;

  case 54: /* break_stmt: break_statement  */
#line 283 "parser_rules.y"
    { (yyval.node) = new_break_node(); }
#line 1988 "parser_rules.tab.c"
    break;

  case 55: /* continue_stmt: continue_statement  */
#line 288 "parser_rules.y"
    { (yyval.node) = new_continue_node(); }
#line 1994 "parser_rules.tab.c"
    break;

  case 56: /* switch_stmt: switch_statement left_paren expr right_paren left_brace case_list default_case right_brace  */
#line 293 "parser_rules.y"
    { (yyval.node) = new_switch_node((yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2000 "parser_rules.tab.c"
    break;

  case 57: /* case_list: case_list case_stmt  */
#line 298 "parser_rules.y"
    {
        (yyvsp[0].node)->switch_case.next = (yyvsp[-1].node);
        (yyval.node) = (yyvsp[0].node);
    }
#line 2009 "parser_rules.tab.c"
    break;

  case 58: /* case_list: %empty  */
#line 303 "parser_rules.y"
    {
        (yyval.node) = NULL;
    }
#line 2017 "parser_rules.tab.c"
    break;

  case 59: /* case_stmt: expr left_brace switch_block_stmts right_brace semicolon  */
#line 310 "parser_rules.y"
    {
        (yyval.node) = new_case_node((yyvsp[-4].node), (yyvsp[-2].node));
    }
#line 2025 "parser_rules.tab.c"
    break;

  case 60: /* default_case: default_statement left_brace switch_block_stmts right_brace semicolon  */
#line 317 "parser_rules.y"
    {
        (yyval.node) = new_default_node((yyvsp[-2].node));
    }
#line 2033 "parser_rules.tab.c"
    break;

  case 61: /* default_case: %empty  */
#line 321 "parser_rules.y"
    {
        (yyval.node) = NULL;
    }
#line 2041 "parser_rules.tab.c"
    break;

  case 62: /* switch_block_stmt: statement  */
#line 328 "parser_rules.y"
   { (yyval.node) = (yyvsp[0].node); }
#line 2047 "parser_rules.tab.c"
    break;

  case 63: /* switch_block_stmts: switch_block_stmt  */
#line 332 "parser_rules.y"
   { (yyval.node) = new_block_node((yyvsp[0].node)); }
#line 2053 "parser_rules.tab.c"
    break;

  case 64: /* switch_block_stmts: switch_block_stmts switch_block_stmt  */
#line 334 "parser_rules.y"
   { (yyval.node) = new_switch_block_node((yyvsp[-1].node), new_block_node((yyvsp[0].node))); }
#line 2059 "parser_rules.tab.c"
    break;

  case 65: /* call_arg_stmt: identifier left_paren call_list right_paren  */
#line 339 "parser_rules.y"
   { (yyval.node) = new_call_node((yyvsp[-3].sval),(yyvsp[-1].node)); }
#line 2065 "parser_rules.tab.c"
    break;

  case 66: /* call_arg_stmt: identifier dot identifier left_paren call_list right_paren  */
#line 341 "parser_rules.y"
   { (yyval.node) = new_call_node_dot((yyvsp[-5].sval),(yyvsp[-3].sval),(yyvsp[-1].node));}
#line 2071 "parser_rules.tab.c"
    break;

  case 67: /* call_list: call_stmt  */
#line 346 "parser_rules.y"
   { (yyval.node) = (yyvsp[0].node); }
#line 2077 "parser_rules.tab.c"
    break;

  case 68: /* call_list: call_list comma call_stmt  */
#line 348 "parser_rules.y"
   { (yyvsp[0].node)->call_arg.next = (yyvsp[-2].node); (yyval.node) = (yyvsp[0].node); }
#line 2083 "parser_rules.tab.c"
    break;

  case 69: /* call_list: %empty  */
#line 350 "parser_rules.y"
   { (yyval.node) = NULL;}
#line 2089 "parser_rules.tab.c"
    break;

  case 70: /* call_stmt: expr  */
#line 355 "parser_rules.y"
  { (yyval.node) = new_call_arg_node((yyvsp[0].node)); }
#line 2095 "parser_rules.tab.c"
    break;

  case 71: /* var_stmt: var identifier assign expr  */
#line 359 "parser_rules.y"
    { (yyval.node) = new_var_node((yyvsp[-2].sval)); }
#line 2101 "parser_rules.tab.c"
    break;

  case 72: /* var_stmt: var identifier  */
#line 361 "parser_rules.y"
    { (yyval.node) = new_var_node((yyvsp[0].sval)); }
#line 2107 "parser_rules.tab.c"
    break;

  case 73: /* var_stmt: var identifier assign call_arg_stmt  */
#line 363 "parser_rules.y"
     { (yyval.node) = new_var_node((yyvsp[-2].sval)); }
#line 2113 "parser_rules.tab.c"
    break;

  case 74: /* const_stmt: const_statement identifier assign expr  */
#line 368 "parser_rules.y"
    { (yyval.node) = new_const_node((yyvsp[-2].sval), (yyvsp[0].node)); }
#line 2119 "parser_rules.tab.c"
    break;

  case 75: /* const_stmt: const_statement identifier assign call_arg_stmt  */
#line 370 "parser_rules.y"
    { (yyval.node) = new_const_node((yyvsp[-2].sval), (yyvsp[0].node));}
#line 2125 "parser_rules.tab.c"
    break;

  case 76: /* simple_stmt: simple identifier  */
#line 375 "parser_rules.y"
    { (yyval.node) = new_simple_node((yyvsp[0].sval)); }
#line 2131 "parser_rules.tab.c"
    break;

  case 77: /* simple_stmt: simple identifier assign expr  */
#line 377 "parser_rules.y"
    { (yyval.node) = new_simple_node((yyvsp[-2].sval)); }
#line 2137 "parser_rules.tab.c"
    break;

  case 78: /* simple_stmt: simple identifier assign call_arg_stmt  */
#line 379 "parser_rules.y"
    { (yyval.node) = new_simple_node((yyvsp[-2].sval)); }
#line 2143 "parser_rules.tab.c"
    break;

  case 79: /* import_stmt: import_statement string  */
#line 384 "parser_rules.y"
     { (yyval.node) = new_import_node((yyvsp[0].sval)); }
#line 2149 "parser_rules.tab.c"
    break;

  case 80: /* assignment_stmt: identifier assign expr  */
#line 389 "parser_rules.y"
    { (yyval.node) = new_assign_node((yyvsp[-2].sval), (yyvsp[0].node)); }
#line 2155 "parser_rules.tab.c"
    break;

  case 81: /* assignment_stmt: identifier assign call_arg_stmt  */
#line 391 "parser_rules.y"
    { (yyval.node) = new_assign_node((yyvsp[-2].sval),(yyvsp[0].node)); }
#line 2161 "parser_rules.tab.c"
    break;

  case 82: /* assignment_stmt: expr assign expr  */
#line 393 "parser_rules.y"
    { (yyval.node) = new_expr_assign_node((yyvsp[-2].node),(yyvsp[0].node)); }
#line 2167 "parser_rules.tab.c"
    break;

  case 83: /* assignment_re_stmt: identifier re_assign expr  */
#line 398 "parser_rules.y"
    { (yyval.node) = new_assign_re_node((yyvsp[-2].sval), (yyvsp[0].node)); }
#line 2173 "parser_rules.tab.c"
    break;

  case 84: /* assignment_re_stmt: identifier re_assign call_arg_stmt  */
#line 400 "parser_rules.y"
    { (yyval.node) = new_assign_re_node((yyvsp[-2].sval),(yyvsp[0].node)) ; }
#line 2179 "parser_rules.tab.c"
    break;

  case 85: /* assignment_re_stmt: expr re_assign expr  */
#line 402 "parser_rules.y"
    { (yyval.node) = new_assign_expr_re_node((yyvsp[-2].node),(yyvsp[0].node)); }
#line 2185 "parser_rules.tab.c"
    break;

  case 86: /* expr: number  */
#line 408 "parser_rules.y"
    { (yyval.node) = new_number_node((yyvsp[0].ival)); }
#line 2191 "parser_rules.tab.c"
    break;

  case 87: /* expr: identifier  */
#line 410 "parser_rules.y"
    { (yyval.node) = new_var_node((yyvsp[0].sval)); }
#line 2197 "parser_rules.tab.c"
    break;

  case 88: /* expr: string  */
#line 412 "parser_rules.y"
    { (yyval.node) = new_string_node((yyvsp[0].sval)); }
#line 2203 "parser_rules.tab.c"
    break;

  case 89: /* expr: expr plus expr  */
#line 414 "parser_rules.y"
    { (yyval.node) = new_binop_node("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2209 "parser_rules.tab.c"
    break;

  case 90: /* expr: expr minus expr  */
#line 416 "parser_rules.y"
    { (yyval.node) = new_binop_node("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2215 "parser_rules.tab.c"
    break;

  case 91: /* expr: expr multiply expr  */
#line 418 "parser_rules.y"
    { (yyval.node) = new_binop_node("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2221 "parser_rules.tab.c"
    break;

  case 92: /* expr: expr divide expr  */
#line 420 "parser_rules.y"
    { (yyval.node) = new_binop_node("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2227 "parser_rules.tab.c"
    break;

  case 93: /* expr: expr divide_with_remind expr  */
#line 422 "parser_rules.y"
    { (yyval.node) = new_binop_node("%", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2233 "parser_rules.tab.c"
    break;

  case 94: /* expr: expr logical_and expr  */
#line 424 "parser_rules.y"
    { (yyval.node) = new_binop_node("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2239 "parser_rules.tab.c"
    break;

  case 95: /* expr: expr logical_or expr  */
#line 426 "parser_rules.y"
    { (yyval.node) = new_binop_node("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2245 "parser_rules.tab.c"
    break;

  case 96: /* expr: expr equals expr  */
#line 428 "parser_rules.y"
    { (yyval.node) = new_binop_node("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2251 "parser_rules.tab.c"
    break;

  case 97: /* expr: expr dont_equal expr  */
#line 430 "parser_rules.y"
    { (yyval.node) = new_binop_node("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2257 "parser_rules.tab.c"
    break;

  case 98: /* expr: expr greater_than expr  */
#line 432 "parser_rules.y"
    { (yyval.node) = new_binop_node(">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2263 "parser_rules.tab.c"
    break;

  case 99: /* expr: expr lesser_than expr  */
#line 434 "parser_rules.y"
    { (yyval.node) = new_binop_node("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2269 "parser_rules.tab.c"
    break;

  case 100: /* expr: expr greater_than_or_equals expr  */
#line 436 "parser_rules.y"
    { (yyval.node) = new_binop_node(">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2275 "parser_rules.tab.c"
    break;

  case 101: /* expr: expr lesser_than_or_equals expr  */
#line 438 "parser_rules.y"
    { (yyval.node) = new_binop_node("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2281 "parser_rules.tab.c"
    break;

  case 102: /* expr: expr bitwise_and expr  */
#line 440 "parser_rules.y"
    { (yyval.node) = new_binop_node("&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2287 "parser_rules.tab.c"
    break;

  case 103: /* expr: expr bitwise_or expr  */
#line 442 "parser_rules.y"
    { (yyval.node) = new_binop_node("|", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2293 "parser_rules.tab.c"
    break;

  case 104: /* expr: expr bitwise_xor expr  */
#line 444 "parser_rules.y"
    { (yyval.node) = new_binop_node("^", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2299 "parser_rules.tab.c"
    break;

  case 105: /* expr: expr bitwise_shift_to_left expr  */
#line 446 "parser_rules.y"
    { (yyval.node) = new_binop_node("<<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2305 "parser_rules.tab.c"
    break;

  case 106: /* expr: expr bitwise_shift_to_right expr  */
#line 448 "parser_rules.y"
    { (yyval.node) = new_binop_node(">>", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2311 "parser_rules.tab.c"
    break;

  case 107: /* expr: logical_not expr  */
#line 450 "parser_rules.y"
    { (yyval.node) = new_unop_node("!", (yyvsp[0].node)); }
#line 2317 "parser_rules.tab.c"
    break;

  case 108: /* expr: bitwise_not expr  */
#line 452 "parser_rules.y"
    { (yyval.node) = new_unop_node("~", (yyvsp[0].node)); }
#line 2323 "parser_rules.tab.c"
    break;

  case 109: /* expr: minus expr  */
#line 454 "parser_rules.y"
    { (yyval.node) = new_unop_node("-", (yyvsp[0].node)); }
#line 2329 "parser_rules.tab.c"
    break;

  case 110: /* expr: plus expr  */
#line 456 "parser_rules.y"
    { (yyval.node) = new_unop_node("+", (yyvsp[0].node)); }
#line 2335 "parser_rules.tab.c"
    break;

  case 111: /* expr: left_paren expr right_paren  */
#line 458 "parser_rules.y"
    { (yyval.node) = new_paren_expr_node((yyvsp[-1].node)); }
#line 2341 "parser_rules.tab.c"
    break;

  case 112: /* expr: expr left_quad_brace expr right_quad_brace  */
#line 460 "parser_rules.y"
    { (yyval.node) = new_index_node((yyvsp[-3].node),(yyvsp[-1].node)); }
#line 2347 "parser_rules.tab.c"
    break;

  case 113: /* expr: left_quad_brace expr right_quad_brace  */
#line 462 "parser_rules.y"
    { (yyval.node) = new_quad_brace_expr_node((yyvsp[-1].node)); }
#line 2353 "parser_rules.tab.c"
    break;


#line 2357 "parser_rules.tab.c"

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
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
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
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
  if (0)
    YYERROR;
  ++yynerrs;

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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
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

#line 465 "parser_rules.y"

