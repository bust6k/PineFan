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
extern int func_cnt;

#line 76 "parser_rules.tab.c"

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
  YYSYMBOL_varip = 19,                     /* varip  */
  YYSYMBOL_const_statement = 20,           /* const_statement  */
  YYSYMBOL_simple = 21,                    /* simple  */
  YYSYMBOL_logical_and = 22,               /* logical_and  */
  YYSYMBOL_logical_or = 23,                /* logical_or  */
  YYSYMBOL_logical_not = 24,               /* logical_not  */
  YYSYMBOL_dont_equal = 25,                /* dont_equal  */
  YYSYMBOL_question_sign = 26,             /* question_sign  */
  YYSYMBOL_bitwise_and = 27,               /* bitwise_and  */
  YYSYMBOL_bitwise_or = 28,                /* bitwise_or  */
  YYSYMBOL_bitwise_xor = 29,               /* bitwise_xor  */
  YYSYMBOL_bitwise_not = 30,               /* bitwise_not  */
  YYSYMBOL_bitwise_shift_to_left = 31,     /* bitwise_shift_to_left  */
  YYSYMBOL_bitwise_shift_to_right = 32,    /* bitwise_shift_to_right  */
  YYSYMBOL_semicolon = 33,                 /* semicolon  */
  YYSYMBOL_import_statement = 34,          /* import_statement  */
  YYSYMBOL_as = 35,                        /* as  */
  YYSYMBOL_input_func = 36,                /* input_func  */
  YYSYMBOL_int_type = 37,                  /* int_type  */
  YYSYMBOL_bool_type = 38,                 /* bool_type  */
  YYSYMBOL_float_type = 39,                /* float_type  */
  YYSYMBOL_color_type = 40,                /* color_type  */
  YYSYMBOL_string_as_type = 41,            /* string_as_type  */
  YYSYMBOL_left_paren = 42,                /* left_paren  */
  YYSYMBOL_right_paren = 43,               /* right_paren  */
  YYSYMBOL_func_paren = 44,                /* func_paren  */
  YYSYMBOL_left_quad_brace = 45,           /* left_quad_brace  */
  YYSYMBOL_right_quad_brace = 46,          /* right_quad_brace  */
  YYSYMBOL_left_brace = 47,                /* left_brace  */
  YYSYMBOL_right_brace = 48,               /* right_brace  */
  YYSYMBOL_assign = 49,                    /* assign  */
  YYSYMBOL_re_assign = 50,                 /* re_assign  */
  YYSYMBOL_equals = 51,                    /* equals  */
  YYSYMBOL_greater_than = 52,              /* greater_than  */
  YYSYMBOL_lesser_than = 53,               /* lesser_than  */
  YYSYMBOL_plus_and_assign = 54,           /* plus_and_assign  */
  YYSYMBOL_minus_and_assign = 55,          /* minus_and_assign  */
  YYSYMBOL_multiply_and_assign = 56,       /* multiply_and_assign  */
  YYSYMBOL_divide_and_assign = 57,         /* divide_and_assign  */
  YYSYMBOL_remind_and_assign = 58,         /* remind_and_assign  */
  YYSYMBOL_plus = 59,                      /* plus  */
  YYSYMBOL_minus = 60,                     /* minus  */
  YYSYMBOL_multiply = 61,                  /* multiply  */
  YYSYMBOL_divide = 62,                    /* divide  */
  YYSYMBOL_divide_with_remind = 63,        /* divide_with_remind  */
  YYSYMBOL_greater_than_or_equals = 64,    /* greater_than_or_equals  */
  YYSYMBOL_lesser_than_or_equals = 65,     /* lesser_than_or_equals  */
  YYSYMBOL_bitwise_and_with_equals = 66,   /* bitwise_and_with_equals  */
  YYSYMBOL_bitwise_or_with_equals = 67,    /* bitwise_or_with_equals  */
  YYSYMBOL_bitwise_xor_with_equals = 68,   /* bitwise_xor_with_equals  */
  YYSYMBOL_bitwise_not_with_equals = 69,   /* bitwise_not_with_equals  */
  YYSYMBOL_bitwise_shift_right_with_equals = 70, /* bitwise_shift_right_with_equals  */
  YYSYMBOL_bitwise_shift_left_with_equals = 71, /* bitwise_shift_left_with_equals  */
  YYSYMBOL_comma = 72,                     /* comma  */
  YYSYMBOL_dot = 73,                       /* dot  */
  YYSYMBOL_colon = 74,                     /* colon  */
  YYSYMBOL_number = 75,                    /* number  */
  YYSYMBOL_identifier = 76,                /* identifier  */
  YYSYMBOL_string = 77,                    /* string  */
  YYSYMBOL_PREC_SINGLE_NAME = 78,          /* PREC_SINGLE_NAME  */
  YYSYMBOL_PREC_TYPE_NAME = 79,            /* PREC_TYPE_NAME  */
  YYSYMBOL_PREC_FUNC = 80,                 /* PREC_FUNC  */
  YYSYMBOL_PREC_CALL = 81,                 /* PREC_CALL  */
  YYSYMBOL_PREC_TERNARY_IDENT = 82,        /* PREC_TERNARY_IDENT  */
  YYSYMBOL_YYACCEPT = 83,                  /* $accept  */
  YYSYMBOL_program = 84,                   /* program  */
  YYSYMBOL_statement = 85,                 /* statement  */
  YYSYMBOL_block = 86,                     /* block  */
  YYSYMBOL_stmt_list = 87,                 /* stmt_list  */
  YYSYMBOL_stmt_block = 88,                /* stmt_block  */
  YYSYMBOL_if_body = 89,                   /* if_body  */
  YYSYMBOL_indicator_stmt = 90,            /* indicator_stmt  */
  YYSYMBOL_strategy_stmt = 91,             /* strategy_stmt  */
  YYSYMBOL_if_stmt = 92,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 93,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 94,                /* while_stmt  */
  YYSYMBOL_func_stmt = 95,                 /* func_stmt  */
  YYSYMBOL_opt_arg_list = 96,              /* opt_arg_list  */
  YYSYMBOL_arg_list = 97,                  /* arg_list  */
  YYSYMBOL_func_type = 98,                 /* func_type  */
  YYSYMBOL_pine_type = 99,                 /* pine_type  */
  YYSYMBOL_return_stmt_expr = 100,         /* return_stmt_expr  */
  YYSYMBOL_break_stmt = 101,               /* break_stmt  */
  YYSYMBOL_continue_stmt = 102,            /* continue_stmt  */
  YYSYMBOL_switch_stmt = 103,              /* switch_stmt  */
  YYSYMBOL_case_list = 104,                /* case_list  */
  YYSYMBOL_case_stmt = 105,                /* case_stmt  */
  YYSYMBOL_default_case = 106,             /* default_case  */
  YYSYMBOL_switch_block_stmt = 107,        /* switch_block_stmt  */
  YYSYMBOL_switch_block_stmts = 108,       /* switch_block_stmts  */
  YYSYMBOL_dot_expr = 109,                 /* dot_expr  */
  YYSYMBOL_call_arg_stmt = 110,            /* call_arg_stmt  */
  YYSYMBOL_call_list = 111,                /* call_list  */
  YYSYMBOL_call_stmt = 112,                /* call_stmt  */
  YYSYMBOL_var_stmt = 113,                 /* var_stmt  */
  YYSYMBOL_varip_stmt = 114,               /* varip_stmt  */
  YYSYMBOL_const_stmt = 115,               /* const_stmt  */
  YYSYMBOL_simple_stmt = 116,              /* simple_stmt  */
  YYSYMBOL_import_stmt = 117,              /* import_stmt  */
  YYSYMBOL_assignment_stmt = 118,          /* assignment_stmt  */
  YYSYMBOL_assignment_re_stmt = 119,       /* assignment_re_stmt  */
  YYSYMBOL_compound_assign_stmt = 120,     /* compound_assign_stmt  */
  YYSYMBOL_expr = 121                      /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 8 "parser_rules.y"

#include "vector.h"
extern int yylex(void);
extern void yyerror(const char* s);
extern Vector* program_root;

#line 239 "parser_rules.tab.c"

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
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1257

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  253

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   337


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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   149,   149,   151,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   178,   183,   185,   190,   194,   196,   201,
     206,   211,   213,   219,   221,   223,   228,   233,   238,   241,
     245,   254,   259,   261,   263,   265,   267,   269,   274,   276,
     278,   280,   282,   284,   288,   293,   298,   303,   308,   314,
     320,   327,   332,   338,   342,   344,   349,   354,   356,   361,
     363,   366,   370,   374,   376,   380,   382,   384,   388,   390,
     395,   397,   399,   404,   409,   411,   413,   415,   420,   422,
     424,   426,   431,   433,   435,   437,   439,   441,   443,   445,
     447,   449,   454,   456,   458,   460,   462,   464,   466,   468,
     470,   472,   474,   476,   478,   480,   482,   484,   486,   488,
     490,   492,   494,   496,   498,   500,   502,   504,   506,   508,
     510,   512
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
  "varip", "const_statement", "simple", "logical_and", "logical_or",
  "logical_not", "dont_equal", "question_sign", "bitwise_and",
  "bitwise_or", "bitwise_xor", "bitwise_not", "bitwise_shift_to_left",
  "bitwise_shift_to_right", "semicolon", "import_statement", "as",
  "input_func", "int_type", "bool_type", "float_type", "color_type",
  "string_as_type", "left_paren", "right_paren", "func_paren",
  "left_quad_brace", "right_quad_brace", "left_brace", "right_brace",
  "assign", "re_assign", "equals", "greater_than", "lesser_than",
  "plus_and_assign", "minus_and_assign", "multiply_and_assign",
  "divide_and_assign", "remind_and_assign", "plus", "minus", "multiply",
  "divide", "divide_with_remind", "greater_than_or_equals",
  "lesser_than_or_equals", "bitwise_and_with_equals",
  "bitwise_or_with_equals", "bitwise_xor_with_equals",
  "bitwise_not_with_equals", "bitwise_shift_right_with_equals",
  "bitwise_shift_left_with_equals", "comma", "dot", "colon", "number",
  "identifier", "string", "PREC_SINGLE_NAME", "PREC_TYPE_NAME",
  "PREC_FUNC", "PREC_CALL", "PREC_TERNARY_IDENT", "$accept", "program",
  "statement", "block", "stmt_list", "stmt_block", "if_body",
  "indicator_stmt", "strategy_stmt", "if_stmt", "for_stmt", "while_stmt",
  "func_stmt", "opt_arg_list", "arg_list", "func_type", "pine_type",
  "return_stmt_expr", "break_stmt", "continue_stmt", "switch_stmt",
  "case_list", "case_stmt", "default_case", "switch_block_stmt",
  "switch_block_stmts", "dot_expr", "call_arg_stmt", "call_list",
  "call_stmt", "var_stmt", "varip_stmt", "const_stmt", "simple_stmt",
  "import_stmt", "assignment_stmt", "assignment_re_stmt",
  "compound_assign_stmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-220)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     404,   -26,   -12,   -10,    11,   492,    12,  -220,  -220,    19,
     -25,   -11,    -9,    -1,     6,  -220,  -220,  -220,  -220,  -220,
     442,   189,  -220,  -220,  -220,  -220,  -220,  -220,  -220,    -7,
    -220,  -220,  -220,  -220,   296,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,     7,    10,   492,   516,   492,   492,
     492,   492,   492,   492,  -220,     4,  -220,  -220,  1019,   492,
     492,    15,    37,    48,    49,  -220,   492,   -29,   540,   540,
     492,   492,   492,   492,   492,  -220,  -220,    23,   492,   540,
     540,   492,   492,   492,   492,   492,    57,    58,   623,   -44,
     667,    59,    59,   711,   755,    59,    59,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   799,   843,   540,
     540,   540,   540,   -41,  -220,  1019,  -220,    61,    30,  -220,
       9,   -23,    64,  -220,  1019,  -220,  1019,  1019,  1019,  1019,
    1019,  1019,  -220,   -20,  -220,  1019,  -220,  1019,  1019,  1019,
    1019,  1019,  1019,  -220,  -220,   234,   492,    56,  -220,  -220,
    1148,  1107,  1157,   579,   -17,  1194,   602,    29,    29,   887,
    1157,  1157,  1157,    33,    33,    59,    59,    59,  1157,  1157,
      56,    60,  -220,  1019,  -220,  1019,  -220,  1019,  -220,  1019,
    -220,   492,    56,   -29,   -29,   -29,  -220,  -220,   404,  -220,
    -220,   101,   450,  -220,   492,  -220,  -220,  -220,  -220,  -220,
    -220,    71,   -13,  -220,   281,  -220,   234,   492,  1063,    -4,
      34,   -29,  -220,  -220,  -220,  -220,   405,    62,  -220,    78,
     931,  -220,    75,   492,    56,   404,  -220,   404,    52,   975,
    -220,  -220,  -220,   322,   363,  -220,    56,    99,  -220,   107,
    -220,  -220,  -220
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    48,    49,    51,    52,    50,
      53,     0,     2,     4,     5,     6,     7,     8,    17,     0,
       9,    10,    11,    12,     0,    18,    14,    13,    15,    16,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,   103,   104,   105,    54,     0,
       0,     0,    76,     0,    80,    83,    71,    39,     0,     0,
       0,     0,     0,     0,     0,     1,     3,     0,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
       0,   124,   125,     0,     0,   127,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,    72,    53,     0,    38,    41,
      43,   103,   105,    85,    84,    89,    88,    92,    93,    94,
      95,    96,    66,     0,    87,    86,    91,    90,    97,    98,
      99,   100,   101,    29,    30,     0,     0,     0,   128,   130,
     111,   112,   114,     0,   119,   120,   121,   122,   123,     0,
     113,   115,   116,   106,   107,   108,   109,   110,   117,   118,
       0,     0,    74,    73,    77,    75,    79,    78,    82,    81,
      67,     0,     0,     0,     0,     0,    42,    68,     0,    28,
      27,    31,     0,    35,     0,   129,    36,    59,    70,    37,
      40,     0,    45,    26,     0,    25,     0,     0,   131,    62,
       0,     0,    44,    23,    24,    32,     0,     0,    58,     0,
       0,    46,     0,     0,     0,     0,    57,     0,     0,     0,
      33,    63,    64,     0,     0,    47,     0,     0,    65,     0,
      34,    61,    60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -220,  -220,     1,  -153,  -220,   -73,   -74,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -145,   -64,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -219,   -94,     0,   -62,    73,   -39,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    21,   241,   200,   214,   215,   201,    23,    24,    25,
      26,    27,    28,   127,   128,   129,    29,    30,    31,    32,
      33,   219,   228,   229,   242,   243,    57,    35,   123,   124,
      36,    37,    38,    39,    40,    41,    42,    43,   125
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    22,   190,   130,   203,   156,   133,   135,    15,    16,
      17,    18,    19,   227,   104,   105,    44,   144,   146,    66,
      48,    34,    76,   197,   248,   248,    49,   206,   106,   -53,
      45,   191,    46,    15,    16,    17,    18,    19,    50,   209,
     221,    51,   110,   111,   112,   113,   114,   126,   210,   211,
     -53,    61,   191,    47,    59,    52,    53,   182,   184,   186,
     188,    60,   194,   222,   119,    62,    77,    63,   132,   132,
      58,    54,    55,    56,   106,    64,   232,   -53,   106,   132,
     132,   240,   195,    65,    86,   196,   120,    87,   110,   111,
     112,   113,   114,   250,   112,   113,   114,   121,   122,   142,
     153,   154,   193,   198,   106,   192,    78,   207,   216,   235,
     231,    88,    90,    91,    92,    93,    94,    95,    96,   132,
     132,   132,   132,   220,   117,   118,   236,   238,   245,   130,
     130,   212,   251,   134,   136,   137,   138,   139,   140,   141,
     252,   224,   225,   244,   145,   147,   148,   149,   150,   151,
     152,   143,   208,     0,     0,    34,   199,   130,     0,     0,
       0,     0,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   183,   185,   187,   189,     0,    75,
       0,     0,     0,     1,     2,     3,     0,     4,    34,   213,
       5,     6,     7,     8,     9,     0,     0,    10,    11,    12,
      13,     0,     0,     0,    34,   213,    34,   199,     0,     0,
       0,   202,     0,    14,     0,     0,    15,    16,    17,    18,
      19,     0,     0,     0,     0,    34,     0,    34,     1,     2,
       3,     0,     4,    34,    34,     5,     6,     7,     8,     9,
       0,     0,    10,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,    14,   218,
       0,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,   198,   226,     0,   230,     1,     2,     3,     0,     4,
       0,     0,     5,     6,     7,     8,     9,     0,   239,    10,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,    14,     0,     0,    15,    16,
      17,    18,    19,     0,     0,     0,     1,     2,     3,   223,
       4,     0,     0,     5,     6,     7,     8,     9,    78,     0,
      10,    11,    12,    13,     0,    79,    80,     0,     0,     0,
      81,    82,    83,    84,    85,     0,    14,    20,     0,    15,
      16,    17,    18,    19,     0,     0,     0,     1,     2,     3,
     247,     4,     0,     0,     5,     6,     7,     8,     9,     0,
       0,    10,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    20,     0,
      15,    16,    17,    18,    19,     0,     0,     0,     1,     2,
       3,   249,     4,     0,   233,     5,     6,     7,     8,     9,
       0,     0,    10,    11,    12,    13,     0,    97,    98,     0,
      99,   100,   101,   102,   103,     0,   104,   105,    14,    20,
       0,    15,    16,    17,    18,    19,     0,     0,   234,     0,
     106,     0,     0,     0,     0,     0,   107,   108,   109,     0,
     217,     0,     0,     0,   110,   111,   112,   113,   114,   115,
     116,     0,    97,    98,     0,    99,   100,   101,   102,   103,
      20,   104,   105,     0,    66,     0,    67,     0,     0,     0,
       0,    68,    69,     0,     0,   106,    70,    71,    72,    73,
      74,   107,   108,   109,     0,     0,     0,     0,     0,   110,
     111,   112,   113,   114,   115,   116,    48,     0,     0,     0,
       0,     0,    49,     0,     0,     0,     0,     0,     0,    15,
      16,    17,    18,    19,    50,     0,     0,    51,     0,     0,
      48,     0,     0,     0,     0,     0,    49,     0,     0,     0,
       0,    52,    53,    15,    16,    17,    18,    19,    50,     0,
       0,    51,     0,     0,    48,     0,     0,    54,    55,    56,
      49,     0,     0,     0,     0,    52,    53,    15,    16,    17,
      18,    19,    50,     0,     0,    51,     0,     0,     0,     0,
       0,    54,    89,    56,     0,     0,     0,     0,     0,    52,
      53,    97,    98,     0,    99,   100,   101,   102,   103,     0,
     104,   105,     0,     0,     0,    54,   131,    56,     0,     0,
       0,     0,     0,     0,   106,     0,     0,     0,     0,   101,
     107,   108,   109,   104,   105,     0,     0,     0,   110,   111,
     112,   113,   114,   115,   116,    97,    98,   106,    99,   100,
     101,   102,   103,   204,   104,   105,     0,     0,     0,     0,
       0,   110,   111,   112,   113,   114,   155,     0,   106,     0,
       0,     0,     0,     0,   107,   108,   109,     0,     0,     0,
       0,     0,   110,   111,   112,   113,   114,   115,   116,    97,
      98,     0,    99,   100,   101,   102,   103,     0,   104,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,     0,   106,     0,     0,     0,     0,     0,   107,   108,
     109,     0,     0,     0,     0,     0,   110,   111,   112,   113,
     114,   115,   116,    97,    98,     0,    99,   100,   101,   102,
     103,     0,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   158,     0,   106,     0,     0,     0,
       0,     0,   107,   108,   109,     0,     0,     0,     0,     0,
     110,   111,   112,   113,   114,   115,   116,    97,    98,     0,
      99,   100,   101,   102,   103,     0,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   159,     0,     0,     0,     0,   107,   108,   109,     0,
       0,     0,     0,     0,   110,   111,   112,   113,   114,   115,
     116,    97,    98,     0,    99,   100,   101,   102,   103,     0,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   180,     0,   106,     0,     0,     0,     0,     0,
     107,   108,   109,     0,     0,     0,     0,     0,   110,   111,
     112,   113,   114,   115,   116,    97,    98,     0,    99,   100,
     101,   102,   103,     0,   104,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,     0,   106,     0,
       0,     0,     0,     0,   107,   108,   109,     0,     0,     0,
       0,     0,   110,   111,   112,   113,   114,   115,   116,    97,
      98,     0,    99,   100,   101,   102,   103,     0,   104,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,   205,     0,     0,     0,     0,   107,   108,
     109,     0,     0,     0,     0,     0,   110,   111,   112,   113,
     114,   115,   116,    97,    98,     0,    99,   100,   101,   102,
     103,     0,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,     0,   237,     0,
       0,     0,   107,   108,   109,     0,     0,     0,     0,     0,
     110,   111,   112,   113,   114,   115,   116,    97,    98,     0,
      99,   100,   101,   102,   103,     0,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,     0,
     106,     0,     0,     0,     0,     0,   107,   108,   109,     0,
       0,     0,     0,     0,   110,   111,   112,   113,   114,   115,
     116,    97,    98,     0,    99,   100,   101,   102,   103,     0,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,     0,     0,     0,     0,     0,
     107,   108,   109,     0,     0,     0,     0,     0,   110,   111,
     112,   113,   114,   115,   116,    97,    98,     0,    99,     0,
     101,   102,   103,     0,   104,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,     0,
       0,     0,     0,     0,   107,   108,   109,     0,     0,     0,
       0,     0,   110,   111,   112,   113,   114,   115,   116,    97,
       0,     0,    99,     0,   101,   102,   103,     0,   104,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,     0,     0,     0,     0,     0,   107,   108,
     109,     0,     0,     0,     0,     0,   110,   111,   112,   113,
     114,   115,   116,    99,     0,   101,   102,   103,     0,   104,
     105,     0,     0,     0,   101,   102,   103,     0,   104,   105,
       0,     0,     0,   106,     0,     0,     0,     0,     0,   107,
     108,   109,   106,     0,     0,     0,     0,   110,   111,   112,
     113,   114,   115,   116,     0,     0,   110,   111,   112,   113,
     114,   101,     0,   103,     0,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   112,   113,   114
};

static const yytype_int16 yycheck[] =
{
       0,     0,    43,    67,   157,    49,    68,    69,    37,    38,
      39,    40,    41,    17,    31,    32,    42,    79,    80,    42,
      24,    21,    21,    43,   243,   244,    30,   180,    45,    73,
      42,    72,    42,    37,    38,    39,    40,    41,    42,   192,
      53,    45,    59,    60,    61,    62,    63,    76,   193,   194,
      73,    76,    72,    42,    42,    59,    60,   119,   120,   121,
     122,    42,    53,    76,    49,    76,    73,    76,    68,    69,
       5,    75,    76,    77,    45,    76,   221,    73,    45,    79,
      80,   234,    73,    77,    77,    76,    49,    77,    59,    60,
      61,    62,    63,   246,    61,    62,    63,    49,    49,    76,
      43,    43,    72,    47,    45,    44,    42,    47,     7,    47,
      76,    46,    47,    48,    49,    50,    51,    52,    53,   119,
     120,   121,   122,    52,    59,    60,    48,    52,    76,   193,
     194,   195,    33,    68,    69,    70,    71,    72,    73,    74,
      33,   214,   216,   237,    79,    80,    81,    82,    83,    84,
      85,    78,   191,    -1,    -1,   155,   155,   221,    -1,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,   119,   120,   121,   122,    -1,     0,
      -1,    -1,    -1,     4,     5,     6,    -1,     8,   198,   198,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    -1,   214,   214,   216,   216,    -1,    -1,
      -1,   156,    -1,    34,    -1,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,   235,    -1,   237,     4,     5,
       6,    -1,     8,   243,   244,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    34,   204,
      -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    47,   217,    -1,   219,     4,     5,     6,    -1,     8,
      -1,    -1,    11,    12,    13,    14,    15,    -1,   233,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    -1,     4,     5,     6,    48,
       8,    -1,    -1,    11,    12,    13,    14,    15,    42,    -1,
      18,    19,    20,    21,    -1,    49,    50,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    -1,    34,    76,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    -1,     4,     5,     6,
      48,     8,    -1,    -1,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    76,    -1,
      37,    38,    39,    40,    41,    -1,    -1,    -1,     4,     5,
       6,    48,     8,    -1,     9,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    20,    21,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    34,    76,
      -1,    37,    38,    39,    40,    41,    -1,    -1,    43,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      10,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      76,    31,    32,    -1,    42,    -1,    44,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    45,    54,    55,    56,    57,
      58,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    24,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    -1,    -1,    45,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    59,    60,    37,    38,    39,    40,    41,    42,    -1,
      -1,    45,    -1,    -1,    24,    -1,    -1,    75,    76,    77,
      30,    -1,    -1,    -1,    -1,    59,    60,    37,    38,    39,
      40,    41,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    59,
      60,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    27,
      51,    52,    53,    31,    32,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    22,    23,    45,    25,    26,
      27,    28,    29,    74,    31,    32,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    43,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    22,
      23,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    22,    23,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    22,
      23,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    22,    23,    -1,    25,    -1,
      27,    28,    29,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    22,
      -1,    -1,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    -1,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,    45,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    59,    60,    61,    62,
      63,    27,    -1,    29,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,     8,    11,    12,    13,    14,    15,
      18,    19,    20,    21,    34,    37,    38,    39,    40,    41,
      76,    84,    85,    90,    91,    92,    93,    94,    95,    99,
     100,   101,   102,   103,   109,   110,   113,   114,   115,   116,
     117,   118,   119,   120,    42,    42,    42,    42,    24,    30,
      42,    45,    59,    60,    75,    76,    77,   109,   121,    42,
      42,    76,    76,    76,    76,    77,    42,    44,    49,    50,
      54,    55,    56,    57,    58,     0,    85,    73,    42,    49,
      50,    54,    55,    56,    57,    58,    77,    77,   121,    76,
     121,   121,   121,   121,   121,   121,   121,    22,    23,    25,
      26,    27,    28,    29,    31,    32,    45,    51,    52,    53,
      59,    60,    61,    62,    63,    64,    65,   121,   121,    49,
      49,    49,    49,   111,   112,   121,    76,    96,    97,    98,
      99,    76,   109,   110,   121,   110,   121,   121,   121,   121,
     121,   121,    76,   111,   110,   121,   110,   121,   121,   121,
     121,   121,   121,    43,    43,    43,    49,    43,    43,    46,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
      43,    43,   110,   121,   110,   121,   110,   121,   110,   121,
      43,    72,    44,    72,    53,    73,    76,    43,    47,    85,
      86,    89,   121,    86,    74,    46,    86,    47,   112,    86,
      98,    98,    99,    85,    87,    88,     7,    10,   121,   104,
      52,    53,    76,    48,    88,    89,   121,    17,   105,   106,
     121,    76,    98,     9,    43,    47,    48,    47,    52,   121,
      86,    85,   107,   108,   108,    76,    43,    48,   107,    48,
      86,    33,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    87,    87,    88,    89,    89,    90,
      91,    92,    92,    93,    93,    93,    94,    95,    96,    96,
      97,    97,    98,    98,    98,    98,    98,    98,    99,    99,
      99,    99,    99,    99,   100,   101,   102,   103,   104,   104,
     105,   106,   106,   107,   108,   108,   109,   110,   110,   111,
     111,   111,   112,   113,   113,   114,   114,   114,   115,   115,
     116,   116,   116,   117,   118,   118,   118,   118,   119,   119,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     1,     1,     4,
       4,     5,     7,     9,    11,     5,     5,     5,     1,     0,
       3,     1,     2,     1,     4,     3,     5,     7,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     8,     2,     0,
       5,     5,     0,     1,     1,     2,     3,     4,     4,     1,
       3,     0,     1,     4,     4,     4,     2,     4,     4,     4,
       2,     4,     4,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     4,
       3,     5
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
#line 150 "parser_rules.y"
    { vec_push(program_root,(yyvsp[0].node)); }
#line 1856 "parser_rules.tab.c"
    break;

  case 3: /* program: program statement  */
#line 152 "parser_rules.y"
      {vec_push(program_root, (yyvsp[0].node));}
#line 1862 "parser_rules.tab.c"
    break;

  case 23: /* block: left_brace stmt_list right_brace  */
#line 179 "parser_rules.y"
    { (yyval.node) = new_stmt_node((yyvsp[-1].node)); }
#line 1868 "parser_rules.tab.c"
    break;

  case 24: /* stmt_list: stmt_list stmt_block  */
#line 184 "parser_rules.y"
    { (yyvsp[0].node)->block_node.next = (yyvsp[-1].node);(yyval.node) = (yyvsp[0].node); }
#line 1874 "parser_rules.tab.c"
    break;

  case 25: /* stmt_list: stmt_block  */
#line 186 "parser_rules.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1880 "parser_rules.tab.c"
    break;

  case 26: /* stmt_block: statement  */
#line 191 "parser_rules.y"
  { (yyval.node) = new_block_node((yyvsp[0].node));}
#line 1886 "parser_rules.tab.c"
    break;

  case 27: /* if_body: block  */
#line 195 "parser_rules.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1892 "parser_rules.tab.c"
    break;

  case 28: /* if_body: statement  */
#line 197 "parser_rules.y"
    { (yyval.node) = new_block_node((yyvsp[0].node)); }
#line 1898 "parser_rules.tab.c"
    break;

  case 29: /* indicator_stmt: indicator_function left_paren string right_paren  */
#line 202 "parser_rules.y"
    { (yyval.node) = new_indicator_node((yyvsp[-1].sval)); }
#line 1904 "parser_rules.tab.c"
    break;

  case 30: /* strategy_stmt: strategy_function left_paren string right_paren  */
#line 207 "parser_rules.y"
    { (yyval.node) = new_strategy_node((yyvsp[-1].sval)); }
#line 1910 "parser_rules.tab.c"
    break;

  case 31: /* if_stmt: if_statement left_paren expr right_paren if_body  */
#line 212 "parser_rules.y"
    { (yyval.node) = new_if_node((yyvsp[-2].node),(yyvsp[0].node),NULL); }
#line 1916 "parser_rules.tab.c"
    break;

  case 32: /* if_stmt: if_statement left_paren expr right_paren if_body else_statement if_body  */
#line 214 "parser_rules.y"
    { (yyval.node) = new_if_node((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1922 "parser_rules.tab.c"
    break;

  case 33: /* for_stmt: for_statement left_paren identifier assign expr to expr right_paren block  */
#line 220 "parser_rules.y"
    { (yyval.node) = new_for_node((yyvsp[-6].sval), (yyvsp[-4].node), (yyvsp[-2].node), NULL, (yyvsp[0].node)); }
#line 1928 "parser_rules.tab.c"
    break;

  case 34: /* for_stmt: for_statement left_paren identifier assign expr to expr step expr right_paren block  */
#line 222 "parser_rules.y"
    { (yyval.node) = new_for_node((yyvsp[-8].sval), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1934 "parser_rules.tab.c"
    break;

  case 35: /* for_stmt: for_statement left_paren expr right_paren block  */
#line 224 "parser_rules.y"
    { (yyval.node) = new_for_node(NULL, (yyvsp[-2].node), NULL, NULL, (yyvsp[0].node)); }
#line 1940 "parser_rules.tab.c"
    break;

  case 36: /* while_stmt: while_statement left_paren expr right_paren block  */
#line 229 "parser_rules.y"
    { (yyval.node) = new_while_node((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1946 "parser_rules.tab.c"
    break;

  case 37: /* func_stmt: identifier func_paren opt_arg_list func_paren block  */
#line 234 "parser_rules.y"
   { (yyval.node) = new_func_node((yyvsp[-4].sval),(yyvsp[-2].node),(yyvsp[0].node));func_cnt++; }
#line 1952 "parser_rules.tab.c"
    break;

  case 38: /* opt_arg_list: arg_list  */
#line 239 "parser_rules.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1958 "parser_rules.tab.c"
    break;

  case 39: /* opt_arg_list: %empty  */
#line 241 "parser_rules.y"
    { (yyval.node) = NULL; }
#line 1964 "parser_rules.tab.c"
    break;

  case 40: /* arg_list: arg_list comma func_type  */
#line 246 "parser_rules.y"
    { if((yyvsp[0].node)->type == AST_FUNC_ARG) {

    (yyvsp[0].node)->func_arg.next = (yyvsp[-2].node); (yyval.node) = (yyvsp[0].node); 
    }
    else if((yyvsp[0].node)->type == AST_ARR_FUNC_ARG) {
    (yyvsp[0].node)->func_containter_arg.next = (yyvsp[-2].node); (yyval.node) = (yyvsp[0].node);
    }
    }
#line 1977 "parser_rules.tab.c"
    break;

  case 41: /* arg_list: func_type  */
#line 255 "parser_rules.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1983 "parser_rules.tab.c"
    break;

  case 42: /* func_type: pine_type identifier  */
#line 260 "parser_rules.y"
  { (yyval.node) = new_func_type_node((yyvsp[-1].sval),(yyvsp[0].sval));}
#line 1989 "parser_rules.tab.c"
    break;

  case 43: /* func_type: pine_type  */
#line 262 "parser_rules.y"
  { (yyval.node) = new_func_type_node(NULL,(yyvsp[0].sval)); }
#line 1995 "parser_rules.tab.c"
    break;

  case 44: /* func_type: pine_type dot pine_type identifier  */
#line 264 "parser_rules.y"
  { (yyval.node) = new_func_type_dot_node((yyvsp[-3].sval),(yyvsp[-1].sval),(yyvsp[0].sval));}
#line 2001 "parser_rules.tab.c"
    break;

  case 45: /* func_type: pine_type dot pine_type  */
#line 266 "parser_rules.y"
  { (yyval.node) = new_func_type_dot_node((yyvsp[-2].sval),(yyvsp[0].sval),NULL);}
#line 2007 "parser_rules.tab.c"
    break;

  case 46: /* func_type: pine_type lesser_than func_type greater_than identifier  */
#line 268 "parser_rules.y"
   { (yyval.node) = new_array_func_type_node((yyvsp[-4].sval),(yyvsp[-2].node),(yyvsp[0].sval));}
#line 2013 "parser_rules.tab.c"
    break;

  case 47: /* func_type: pine_type dot pine_type lesser_than func_type greater_than identifier  */
#line 270 "parser_rules.y"
   { (yyval.node) = new_array_func_type_dot_node((yyvsp[-6].sval),(yyvsp[-4].sval),(yyvsp[-2].node),(yyvsp[0].sval));}
#line 2019 "parser_rules.tab.c"
    break;

  case 48: /* pine_type: int_type  */
#line 275 "parser_rules.y"
  { (yyval.sval) = new_type_name(int_type);}
#line 2025 "parser_rules.tab.c"
    break;

  case 49: /* pine_type: bool_type  */
#line 277 "parser_rules.y"
  { (yyval.sval) = new_type_name(bool_type);}
#line 2031 "parser_rules.tab.c"
    break;

  case 50: /* pine_type: string_as_type  */
#line 279 "parser_rules.y"
  { (yyval.sval) = new_type_name(string_as_type);}
#line 2037 "parser_rules.tab.c"
    break;

  case 51: /* pine_type: float_type  */
#line 281 "parser_rules.y"
  { (yyval.sval) = new_type_name(float_type);}
#line 2043 "parser_rules.tab.c"
    break;

  case 52: /* pine_type: color_type  */
#line 283 "parser_rules.y"
  { (yyval.sval) = new_type_name(color_type);}
#line 2049 "parser_rules.tab.c"
    break;

  case 53: /* pine_type: identifier  */
#line 285 "parser_rules.y"
  { (yyval.sval) = (yyvsp[0].sval);}
#line 2055 "parser_rules.tab.c"
    break;

  case 54: /* return_stmt_expr: return_statement expr  */
#line 289 "parser_rules.y"
    { (yyval.node) = new_return_node((yyvsp[0].node)); }
#line 2061 "parser_rules.tab.c"
    break;

  case 55: /* break_stmt: break_statement  */
#line 294 "parser_rules.y"
    { (yyval.node) = new_break_node(); }
#line 2067 "parser_rules.tab.c"
    break;

  case 56: /* continue_stmt: continue_statement  */
#line 299 "parser_rules.y"
    { (yyval.node) = new_continue_node(); }
#line 2073 "parser_rules.tab.c"
    break;

  case 57: /* switch_stmt: switch_statement left_paren expr right_paren left_brace case_list default_case right_brace  */
#line 304 "parser_rules.y"
    { (yyval.node) = new_switch_node((yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2079 "parser_rules.tab.c"
    break;

  case 58: /* case_list: case_list case_stmt  */
#line 309 "parser_rules.y"
    {
        (yyvsp[0].node)->switch_case.next = (yyvsp[-1].node);
        (yyval.node) = (yyvsp[0].node);
    }
#line 2088 "parser_rules.tab.c"
    break;

  case 59: /* case_list: %empty  */
#line 314 "parser_rules.y"
    {
        (yyval.node) = NULL;
    }
#line 2096 "parser_rules.tab.c"
    break;

  case 60: /* case_stmt: expr left_brace switch_block_stmts right_brace semicolon  */
#line 321 "parser_rules.y"
    {
        (yyval.node) = new_case_node((yyvsp[-4].node), (yyvsp[-2].node));
    }
#line 2104 "parser_rules.tab.c"
    break;

  case 61: /* default_case: default_statement left_brace switch_block_stmts right_brace semicolon  */
#line 328 "parser_rules.y"
    {
        (yyval.node) = new_default_node((yyvsp[-2].node));
    }
#line 2112 "parser_rules.tab.c"
    break;

  case 62: /* default_case: %empty  */
#line 332 "parser_rules.y"
    {
        (yyval.node) = NULL;
    }
#line 2120 "parser_rules.tab.c"
    break;

  case 63: /* switch_block_stmt: statement  */
#line 339 "parser_rules.y"
   { (yyval.node) = (yyvsp[0].node); }
#line 2126 "parser_rules.tab.c"
    break;

  case 64: /* switch_block_stmts: switch_block_stmt  */
#line 343 "parser_rules.y"
   { (yyval.node) = new_block_node((yyvsp[0].node)); }
#line 2132 "parser_rules.tab.c"
    break;

  case 65: /* switch_block_stmts: switch_block_stmts switch_block_stmt  */
#line 345 "parser_rules.y"
   { (yyval.node) = new_switch_block_node((yyvsp[-1].node), new_block_node((yyvsp[0].node))); }
#line 2138 "parser_rules.tab.c"
    break;

  case 66: /* dot_expr: pine_type dot identifier  */
#line 350 "parser_rules.y"
    { (yyval.node) = new_var_dot_node((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 2144 "parser_rules.tab.c"
    break;

  case 67: /* call_arg_stmt: identifier left_paren call_list right_paren  */
#line 355 "parser_rules.y"
   { (yyval.node) = new_call_node((yyvsp[-3].sval),(yyvsp[-1].node)); }
#line 2150 "parser_rules.tab.c"
    break;

  case 68: /* call_arg_stmt: dot_expr left_paren call_list right_paren  */
#line 357 "parser_rules.y"
   { (yyval.node) = new_call_node_dot((yyvsp[-3].node)->var.name,(yyvsp[-1].node));}
#line 2156 "parser_rules.tab.c"
    break;

  case 69: /* call_list: call_stmt  */
#line 362 "parser_rules.y"
   { (yyval.node) = (yyvsp[0].node); }
#line 2162 "parser_rules.tab.c"
    break;

  case 70: /* call_list: call_list comma call_stmt  */
#line 364 "parser_rules.y"
   { (yyvsp[0].node)->call_arg.next = (yyvsp[-2].node); (yyval.node) = (yyvsp[0].node); }
#line 2168 "parser_rules.tab.c"
    break;

  case 71: /* call_list: %empty  */
#line 366 "parser_rules.y"
   { (yyval.node) = NULL;}
#line 2174 "parser_rules.tab.c"
    break;

  case 72: /* call_stmt: expr  */
#line 371 "parser_rules.y"
  { (yyval.node) = new_call_arg_node((yyvsp[0].node)); }
#line 2180 "parser_rules.tab.c"
    break;

  case 73: /* var_stmt: var identifier assign expr  */
#line 375 "parser_rules.y"
    { (yyval.node) = new_var_node((yyvsp[-2].sval),(yyvsp[0].node)); }
#line 2186 "parser_rules.tab.c"
    break;

  case 74: /* var_stmt: var identifier assign call_arg_stmt  */
#line 377 "parser_rules.y"
     { (yyval.node) = new_var_node((yyvsp[-2].sval),(yyvsp[0].node)); }
#line 2192 "parser_rules.tab.c"
    break;

  case 75: /* varip_stmt: varip identifier assign expr  */
#line 381 "parser_rules.y"
   { (yyval.node) = new_varip_node((yyvsp[-2].sval),(yyvsp[0].node)); }
#line 2198 "parser_rules.tab.c"
    break;

  case 76: /* varip_stmt: varip identifier  */
#line 383 "parser_rules.y"
   { (yyval.node) = new_varip_node((yyvsp[0].sval),NULL); }
#line 2204 "parser_rules.tab.c"
    break;

  case 77: /* varip_stmt: varip identifier assign call_arg_stmt  */
#line 385 "parser_rules.y"
   { (yyval.node) = new_varip_node((yyvsp[-2].sval),(yyvsp[0].node));}
#line 2210 "parser_rules.tab.c"
    break;

  case 78: /* const_stmt: const_statement identifier assign expr  */
#line 389 "parser_rules.y"
    { (yyval.node) = new_const_node((yyvsp[-2].sval), (yyvsp[0].node)); }
#line 2216 "parser_rules.tab.c"
    break;

  case 79: /* const_stmt: const_statement identifier assign call_arg_stmt  */
#line 391 "parser_rules.y"
    { (yyval.node) = new_const_node((yyvsp[-2].sval), (yyvsp[0].node));}
#line 2222 "parser_rules.tab.c"
    break;

  case 80: /* simple_stmt: simple identifier  */
#line 396 "parser_rules.y"
    { (yyval.node) = new_simple_node((yyvsp[0].sval),NULL); }
#line 2228 "parser_rules.tab.c"
    break;

  case 81: /* simple_stmt: simple identifier assign expr  */
#line 398 "parser_rules.y"
    { (yyval.node) = new_simple_node((yyvsp[-2].sval),(yyvsp[0].node)); }
#line 2234 "parser_rules.tab.c"
    break;

  case 82: /* simple_stmt: simple identifier assign call_arg_stmt  */
#line 400 "parser_rules.y"
    { (yyval.node) = new_simple_node((yyvsp[-2].sval),(yyvsp[0].node)); }
#line 2240 "parser_rules.tab.c"
    break;

  case 83: /* import_stmt: import_statement string  */
#line 405 "parser_rules.y"
     { (yyval.node) = new_import_node((yyvsp[0].sval)); }
#line 2246 "parser_rules.tab.c"
    break;

  case 84: /* assignment_stmt: identifier assign expr  */
#line 410 "parser_rules.y"
    { (yyval.node) = new_assign_node((yyvsp[-2].sval), (yyvsp[0].node)); }
#line 2252 "parser_rules.tab.c"
    break;

  case 85: /* assignment_stmt: identifier assign call_arg_stmt  */
#line 412 "parser_rules.y"
    { (yyval.node) = new_assign_node((yyvsp[-2].sval),(yyvsp[0].node)); }
#line 2258 "parser_rules.tab.c"
    break;

  case 86: /* assignment_stmt: dot_expr assign expr  */
#line 414 "parser_rules.y"
    { (yyval.node) = new_assign_node((yyvsp[-2].node)->var.name, (yyvsp[0].node)); }
#line 2264 "parser_rules.tab.c"
    break;

  case 87: /* assignment_stmt: dot_expr assign call_arg_stmt  */
#line 416 "parser_rules.y"
    { (yyval.node) = new_assign_node((yyvsp[-2].node)->var.name, (yyvsp[0].node)); }
#line 2270 "parser_rules.tab.c"
    break;

  case 88: /* assignment_re_stmt: identifier re_assign expr  */
#line 421 "parser_rules.y"
    { (yyval.node) = new_assign_re_node((yyvsp[-2].sval), (yyvsp[0].node)); }
#line 2276 "parser_rules.tab.c"
    break;

  case 89: /* assignment_re_stmt: identifier re_assign call_arg_stmt  */
#line 423 "parser_rules.y"
    { (yyval.node) = new_assign_re_node((yyvsp[-2].sval),(yyvsp[0].node)) ; }
#line 2282 "parser_rules.tab.c"
    break;

  case 90: /* assignment_re_stmt: dot_expr re_assign expr  */
#line 425 "parser_rules.y"
    { (yyval.node) = new_assign_re_node((yyvsp[-2].node)->var.name, (yyvsp[0].node)); }
#line 2288 "parser_rules.tab.c"
    break;

  case 91: /* assignment_re_stmt: dot_expr re_assign call_arg_stmt  */
#line 427 "parser_rules.y"
    { (yyval.node) = new_assign_re_node((yyvsp[-2].node)->var.name, (yyvsp[0].node)); }
#line 2294 "parser_rules.tab.c"
    break;

  case 92: /* compound_assign_stmt: identifier plus_and_assign expr  */
#line 432 "parser_rules.y"
    { (yyval.node) = new_binop_node("+=", new_varn_node((yyvsp[-2].sval)), (yyvsp[0].node)); }
#line 2300 "parser_rules.tab.c"
    break;

  case 93: /* compound_assign_stmt: identifier minus_and_assign expr  */
#line 434 "parser_rules.y"
    { (yyval.node) = new_binop_node("-=", new_varn_node((yyvsp[-2].sval)), (yyvsp[0].node)); }
#line 2306 "parser_rules.tab.c"
    break;

  case 94: /* compound_assign_stmt: identifier multiply_and_assign expr  */
#line 436 "parser_rules.y"
    { (yyval.node) = new_binop_node("*=", new_varn_node((yyvsp[-2].sval)), (yyvsp[0].node)); }
#line 2312 "parser_rules.tab.c"
    break;

  case 95: /* compound_assign_stmt: identifier divide_and_assign expr  */
#line 438 "parser_rules.y"
    { (yyval.node) = new_binop_node("/=", new_varn_node((yyvsp[-2].sval)), (yyvsp[0].node)); }
#line 2318 "parser_rules.tab.c"
    break;

  case 96: /* compound_assign_stmt: identifier remind_and_assign expr  */
#line 440 "parser_rules.y"
    { (yyval.node) = new_binop_node("%=", new_varn_node((yyvsp[-2].sval)), (yyvsp[0].node)); }
#line 2324 "parser_rules.tab.c"
    break;

  case 97: /* compound_assign_stmt: dot_expr plus_and_assign expr  */
#line 442 "parser_rules.y"
    { (yyval.node) = new_binop_node("+=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2330 "parser_rules.tab.c"
    break;

  case 98: /* compound_assign_stmt: dot_expr minus_and_assign expr  */
#line 444 "parser_rules.y"
    { (yyval.node) = new_binop_node("-=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2336 "parser_rules.tab.c"
    break;

  case 99: /* compound_assign_stmt: dot_expr multiply_and_assign expr  */
#line 446 "parser_rules.y"
    { (yyval.node) = new_binop_node("*=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2342 "parser_rules.tab.c"
    break;

  case 100: /* compound_assign_stmt: dot_expr divide_and_assign expr  */
#line 448 "parser_rules.y"
    { (yyval.node) = new_binop_node("/=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2348 "parser_rules.tab.c"
    break;

  case 101: /* compound_assign_stmt: dot_expr remind_and_assign expr  */
#line 450 "parser_rules.y"
    { (yyval.node) = new_binop_node("%=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2354 "parser_rules.tab.c"
    break;

  case 102: /* expr: number  */
#line 455 "parser_rules.y"
    { (yyval.node) = new_number_node((yyvsp[0].ival)); }
#line 2360 "parser_rules.tab.c"
    break;

  case 103: /* expr: identifier  */
#line 457 "parser_rules.y"
    { (yyval.node) = new_varn_node((yyvsp[0].sval)); }
#line 2366 "parser_rules.tab.c"
    break;

  case 104: /* expr: string  */
#line 459 "parser_rules.y"
    { (yyval.node) = new_string_node((yyvsp[0].sval)); }
#line 2372 "parser_rules.tab.c"
    break;

  case 105: /* expr: dot_expr  */
#line 461 "parser_rules.y"
    { (yyval.node) = (yyvsp[0].node);}
#line 2378 "parser_rules.tab.c"
    break;

  case 106: /* expr: expr plus expr  */
#line 463 "parser_rules.y"
    { (yyval.node) = new_binop_node("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2384 "parser_rules.tab.c"
    break;

  case 107: /* expr: expr minus expr  */
#line 465 "parser_rules.y"
    { (yyval.node) = new_binop_node("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2390 "parser_rules.tab.c"
    break;

  case 108: /* expr: expr multiply expr  */
#line 467 "parser_rules.y"
    { (yyval.node) = new_binop_node("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2396 "parser_rules.tab.c"
    break;

  case 109: /* expr: expr divide expr  */
#line 469 "parser_rules.y"
    { (yyval.node) = new_binop_node("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2402 "parser_rules.tab.c"
    break;

  case 110: /* expr: expr divide_with_remind expr  */
#line 471 "parser_rules.y"
    { (yyval.node) = new_binop_node("%", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2408 "parser_rules.tab.c"
    break;

  case 111: /* expr: expr logical_and expr  */
#line 473 "parser_rules.y"
    { (yyval.node) = new_binop_node("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2414 "parser_rules.tab.c"
    break;

  case 112: /* expr: expr logical_or expr  */
#line 475 "parser_rules.y"
    { (yyval.node) = new_binop_node("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2420 "parser_rules.tab.c"
    break;

  case 113: /* expr: expr equals expr  */
#line 477 "parser_rules.y"
    { (yyval.node) = new_binop_node("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2426 "parser_rules.tab.c"
    break;

  case 114: /* expr: expr dont_equal expr  */
#line 479 "parser_rules.y"
    { (yyval.node) = new_binop_node("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2432 "parser_rules.tab.c"
    break;

  case 115: /* expr: expr greater_than expr  */
#line 481 "parser_rules.y"
    { (yyval.node) = new_binop_node(">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2438 "parser_rules.tab.c"
    break;

  case 116: /* expr: expr lesser_than expr  */
#line 483 "parser_rules.y"
    { (yyval.node) = new_binop_node("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2444 "parser_rules.tab.c"
    break;

  case 117: /* expr: expr greater_than_or_equals expr  */
#line 485 "parser_rules.y"
    { (yyval.node) = new_binop_node(">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2450 "parser_rules.tab.c"
    break;

  case 118: /* expr: expr lesser_than_or_equals expr  */
#line 487 "parser_rules.y"
    { (yyval.node) = new_binop_node("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2456 "parser_rules.tab.c"
    break;

  case 119: /* expr: expr bitwise_and expr  */
#line 489 "parser_rules.y"
    { (yyval.node) = new_binop_node("&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2462 "parser_rules.tab.c"
    break;

  case 120: /* expr: expr bitwise_or expr  */
#line 491 "parser_rules.y"
    { (yyval.node) = new_binop_node("|", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2468 "parser_rules.tab.c"
    break;

  case 121: /* expr: expr bitwise_xor expr  */
#line 493 "parser_rules.y"
    { (yyval.node) = new_binop_node("^", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2474 "parser_rules.tab.c"
    break;

  case 122: /* expr: expr bitwise_shift_to_left expr  */
#line 495 "parser_rules.y"
    { (yyval.node) = new_binop_node("<<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2480 "parser_rules.tab.c"
    break;

  case 123: /* expr: expr bitwise_shift_to_right expr  */
#line 497 "parser_rules.y"
    { (yyval.node) = new_binop_node(">>", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2486 "parser_rules.tab.c"
    break;

  case 124: /* expr: logical_not expr  */
#line 499 "parser_rules.y"
    { (yyval.node) = new_unop_node("!", (yyvsp[0].node)); }
#line 2492 "parser_rules.tab.c"
    break;

  case 125: /* expr: bitwise_not expr  */
#line 501 "parser_rules.y"
    { (yyval.node) = new_unop_node("~", (yyvsp[0].node)); }
#line 2498 "parser_rules.tab.c"
    break;

  case 126: /* expr: minus expr  */
#line 503 "parser_rules.y"
    { (yyval.node) = new_unop_node("-", (yyvsp[0].node)); }
#line 2504 "parser_rules.tab.c"
    break;

  case 127: /* expr: plus expr  */
#line 505 "parser_rules.y"
    { (yyval.node) = new_unop_node("+", (yyvsp[0].node)); }
#line 2510 "parser_rules.tab.c"
    break;

  case 128: /* expr: left_paren expr right_paren  */
#line 507 "parser_rules.y"
    { (yyval.node) = new_paren_expr_node((yyvsp[-1].node)); }
#line 2516 "parser_rules.tab.c"
    break;

  case 129: /* expr: expr left_quad_brace expr right_quad_brace  */
#line 509 "parser_rules.y"
    { (yyval.node) = new_index_node((yyvsp[-3].node),(yyvsp[-1].node)); }
#line 2522 "parser_rules.tab.c"
    break;

  case 130: /* expr: left_quad_brace expr right_quad_brace  */
#line 511 "parser_rules.y"
    { (yyval.node) = new_quad_brace_expr_node((yyvsp[-1].node)); }
#line 2528 "parser_rules.tab.c"
    break;

  case 131: /* expr: expr question_sign expr colon expr  */
#line 513 "parser_rules.y"
    { (yyval.node) = new_ternary_node((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2534 "parser_rules.tab.c"
    break;


#line 2538 "parser_rules.tab.c"

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

#line 516 "parser_rules.y"

