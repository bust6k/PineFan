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
  YYSYMBOL_indicator_function = 3,         /* indicator_function  */
  YYSYMBOL_strategy_function = 4,          /* strategy_function  */
  YYSYMBOL_if_statement = 5,               /* if_statement  */
  YYSYMBOL_else_statement = 6,             /* else_statement  */
  YYSYMBOL_for_statement = 7,              /* for_statement  */
  YYSYMBOL_step = 8,                       /* step  */
  YYSYMBOL_to = 9,                         /* to  */
  YYSYMBOL_return_statement = 10,          /* return_statement  */
  YYSYMBOL_while_statement = 11,           /* while_statement  */
  YYSYMBOL_break_statement = 12,           /* break_statement  */
  YYSYMBOL_continue_statement = 13,        /* continue_statement  */
  YYSYMBOL_switch_statement = 14,          /* switch_statement  */
  YYSYMBOL_case_statement = 15,            /* case_statement  */
  YYSYMBOL_default_statement = 16,         /* default_statement  */
  YYSYMBOL_var = 17,                       /* var  */
  YYSYMBOL_const_statement = 18,           /* const_statement  */
  YYSYMBOL_simple = 19,                    /* simple  */
  YYSYMBOL_logical_and = 20,               /* logical_and  */
  YYSYMBOL_logical_or = 21,                /* logical_or  */
  YYSYMBOL_logical_not = 22,               /* logical_not  */
  YYSYMBOL_dont_equal = 23,                /* dont_equal  */
  YYSYMBOL_bitwise_and = 24,               /* bitwise_and  */
  YYSYMBOL_bitwise_or = 25,                /* bitwise_or  */
  YYSYMBOL_bitwise_xor = 26,               /* bitwise_xor  */
  YYSYMBOL_bitwise_not = 27,               /* bitwise_not  */
  YYSYMBOL_bitwise_shift_to_left = 28,     /* bitwise_shift_to_left  */
  YYSYMBOL_bitwise_shift_to_right = 29,    /* bitwise_shift_to_right  */
  YYSYMBOL_semicolon = 30,                 /* semicolon  */
  YYSYMBOL_import_statement = 31,          /* import_statement  */
  YYSYMBOL_as = 32,                        /* as  */
  YYSYMBOL_input_func = 33,                /* input_func  */
  YYSYMBOL_int_type = 34,                  /* int_type  */
  YYSYMBOL_bool_type = 35,                 /* bool_type  */
  YYSYMBOL_float_type = 36,                /* float_type  */
  YYSYMBOL_color_type = 37,                /* color_type  */
  YYSYMBOL_string_as_type = 38,            /* string_as_type  */
  YYSYMBOL_left_paren = 39,                /* left_paren  */
  YYSYMBOL_right_paren = 40,               /* right_paren  */
  YYSYMBOL_left_quad_brace = 41,           /* left_quad_brace  */
  YYSYMBOL_right_quad_brace = 42,          /* right_quad_brace  */
  YYSYMBOL_left_brace = 43,                /* left_brace  */
  YYSYMBOL_right_brace = 44,               /* right_brace  */
  YYSYMBOL_assign = 45,                    /* assign  */
  YYSYMBOL_re_assign = 46,                 /* re_assign  */
  YYSYMBOL_equals = 47,                    /* equals  */
  YYSYMBOL_greater_than = 48,              /* greater_than  */
  YYSYMBOL_lesser_than = 49,               /* lesser_than  */
  YYSYMBOL_plus = 50,                      /* plus  */
  YYSYMBOL_minus = 51,                     /* minus  */
  YYSYMBOL_multiply = 52,                  /* multiply  */
  YYSYMBOL_divide = 53,                    /* divide  */
  YYSYMBOL_divide_with_remind = 54,        /* divide_with_remind  */
  YYSYMBOL_greater_than_or_equals = 55,    /* greater_than_or_equals  */
  YYSYMBOL_lesser_than_or_equals = 56,     /* lesser_than_or_equals  */
  YYSYMBOL_bitwise_and_with_equals = 57,   /* bitwise_and_with_equals  */
  YYSYMBOL_bitwise_or_with_equals = 58,    /* bitwise_or_with_equals  */
  YYSYMBOL_bitwise_xor_with_equals = 59,   /* bitwise_xor_with_equals  */
  YYSYMBOL_bitwise_not_with_equals = 60,   /* bitwise_not_with_equals  */
  YYSYMBOL_bitwise_shift_right_with_equals = 61, /* bitwise_shift_right_with_equals  */
  YYSYMBOL_bitwise_shift_left_with_equals = 62, /* bitwise_shift_left_with_equals  */
  YYSYMBOL_comma = 63,                     /* comma  */
  YYSYMBOL_dot = 64,                       /* dot  */
  YYSYMBOL_colon = 65,                     /* colon  */
  YYSYMBOL_number = 66,                    /* number  */
  YYSYMBOL_identifier = 67,                /* identifier  */
  YYSYMBOL_string = 68,                    /* string  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_program = 70,                   /* program  */
  YYSYMBOL_statement = 71,                 /* statement  */
  YYSYMBOL_block = 72,                     /* block  */
  YYSYMBOL_indicator_stmt = 73,            /* indicator_stmt  */
  YYSYMBOL_strategy_stmt = 74,             /* strategy_stmt  */
  YYSYMBOL_if_stmt = 75,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 76,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 77,                /* while_stmt  */
  YYSYMBOL_return_stmt_expr = 78,          /* return_stmt_expr  */
  YYSYMBOL_break_stmt = 79,                /* break_stmt  */
  YYSYMBOL_continue_stmt = 80,             /* continue_stmt  */
  YYSYMBOL_switch_stmt = 81,               /* switch_stmt  */
  YYSYMBOL_case_list = 82,                 /* case_list  */
  YYSYMBOL_case_stmt = 83,                 /* case_stmt  */
  YYSYMBOL_default_case = 84,              /* default_case  */
  YYSYMBOL_switch_block_stmts = 85,        /* switch_block_stmts  */
  YYSYMBOL_var_stmt = 86,                  /* var_stmt  */
  YYSYMBOL_const_stmt = 87,                /* const_stmt  */
  YYSYMBOL_simple_stmt = 88,               /* simple_stmt  */
  YYSYMBOL_import_stmt = 89,               /* import_stmt  */
  YYSYMBOL_assignment_stmt = 90,           /* assignment_stmt  */
  YYSYMBOL_assignment_re_stmt = 91,        /* assignment_re_stmt  */
  YYSYMBOL_expr = 92                       /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 8 "parser_rules.y"

#include "vector.h"
extern int yylex(void);
extern void yyerror(const char* s);
extern Vector* program_root;

#line 209 "parser_rules.tab.c"

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
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   740

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   323


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
      65,    66,    67,    68
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   122,   122,   124,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   151,   153,   160,   165,   170,   172,   177,
     179,   181,   186,   192,   197,   202,   207,   212,   218,   224,
     231,   236,   242,   244,   249,   251,   256,   261,   266,   271,
     276,   282,   284,   286,   288,   290,   292,   294,   296,   298,
     300,   302,   304,   306,   308,   310,   312,   314,   316,   318,
     320,   322,   324,   326,   328,   330,   332
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
  "\"end of file\"", "error", "\"invalid token\"", "indicator_function",
  "strategy_function", "if_statement", "else_statement", "for_statement",
  "step", "to", "return_statement", "while_statement", "break_statement",
  "continue_statement", "switch_statement", "case_statement",
  "default_statement", "var", "const_statement", "simple", "logical_and",
  "logical_or", "logical_not", "dont_equal", "bitwise_and", "bitwise_or",
  "bitwise_xor", "bitwise_not", "bitwise_shift_to_left",
  "bitwise_shift_to_right", "semicolon", "import_statement", "as",
  "input_func", "int_type", "bool_type", "float_type", "color_type",
  "string_as_type", "left_paren", "right_paren", "left_quad_brace",
  "right_quad_brace", "left_brace", "right_brace", "assign", "re_assign",
  "equals", "greater_than", "lesser_than", "plus", "minus", "multiply",
  "divide", "divide_with_remind", "greater_than_or_equals",
  "lesser_than_or_equals", "bitwise_and_with_equals",
  "bitwise_or_with_equals", "bitwise_xor_with_equals",
  "bitwise_not_with_equals", "bitwise_shift_right_with_equals",
  "bitwise_shift_left_with_equals", "comma", "dot", "colon", "number",
  "identifier", "string", "$accept", "program", "statement", "block",
  "indicator_stmt", "strategy_stmt", "if_stmt", "for_stmt", "while_stmt",
  "return_stmt_expr", "break_stmt", "continue_stmt", "switch_stmt",
  "case_list", "case_stmt", "default_case", "switch_block_stmts",
  "var_stmt", "const_stmt", "simple_stmt", "import_stmt",
  "assignment_stmt", "assignment_re_stmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-124)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     286,   -35,   -24,   -18,    -8,   130,    -1,  -124,  -124,     2,
     -37,   -22,    -6,    -4,   130,   130,     4,   130,   130,   130,
    -124,     8,  -124,    94,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,   130,  -124,  -124,   286,  -124,  -124,
    -124,  -124,  -124,  -124,   405,    15,    17,   130,   373,  -124,
     637,   130,   130,   286,    41,    42,  -124,  -124,  -124,  -124,
     442,  -124,  -124,   130,   130,  -124,  -124,  -124,  -124,   130,
     130,   130,   130,   130,   130,   130,   130,   286,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,    22,    48,
     479,    44,   516,   553,   590,  -124,   160,   130,   130,  -124,
     637,   637,   684,   674,    -2,   278,   363,   422,   -17,   -17,
     202,    -2,    -2,    -2,   -34,   -34,  -124,  -124,  -124,    -2,
      -2,  -124,  -124,   244,   130,   244,   244,    47,  -124,   637,
     637,  -124,   286,  -124,    85,   355,  -124,  -124,  -124,    51,
     244,   130,   -11,  -124,  -124,   318,    52,   130,   244,  -124,
     627,  -124,   244,  -124
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      38,     0,     0,     0,     0,     0,     0,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,     0,     2,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    16,    14,    15,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,    52,
      33,     0,     0,    38,    45,     0,    47,    72,    73,    48,
       0,    75,    74,     0,     0,     1,     3,    37,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    42,     0,     0,     0,    76,
      49,    50,    59,    60,    62,    67,    68,    69,    70,    71,
       0,    61,    63,    64,    54,    55,    56,    57,    58,    65,
      66,    25,    26,    38,     0,    38,    38,     0,    40,    44,
      46,    39,    38,    24,    27,     0,    31,    32,    38,    42,
      38,     0,    41,    23,    28,     0,     0,     0,    38,    36,
       0,    29,    38,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -124,  -124,     7,  -123,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,   -38,   -33,   -40,   -45,  -124,  -124,  -124,
    -124,  -124,  -124,    -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    23,   133,   134,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      50,    67,   136,   137,    45,    10,    53,    24,    96,    57,
      58,    14,    60,    61,    62,    46,    15,   144,    83,    84,
      85,    47,    72,    73,    74,   151,    75,    76,    17,   153,
      66,    48,   110,    81,    82,    83,    84,    85,    51,    18,
      19,    52,    90,    92,    68,    54,    93,    94,    81,    82,
      83,    84,    85,    63,    64,    20,    49,    22,   100,   101,
      95,    55,   121,    56,   102,   103,   104,   105,   106,   107,
     108,   109,    59,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,    88,    95,    89,    97,    98,   122,   124,
     138,   140,   129,   130,    65,   143,   149,     1,     2,     3,
     142,     4,   146,    68,     5,     6,     7,     8,     9,    67,
      10,    11,    12,    13,     0,     0,    14,    68,     0,   135,
       0,    15,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,   145,     0,     0,   139,
       0,     0,   150,     0,    18,    19,     0,     0,     0,     0,
       0,     0,    14,     0,     0,     0,     0,    15,     0,     0,
      20,    21,    22,     1,     2,     3,     0,     4,     0,    17,
       5,     6,     7,     8,     9,     0,    10,    11,    12,    13,
      18,    19,    14,     0,     0,     0,     0,    15,     0,     0,
       0,    16,     0,     0,     0,     0,    20,    49,    22,    17,
       0,     0,     0,     0,   128,     1,     2,     3,     0,     4,
      18,    19,     5,     6,     7,     8,     9,     0,    10,    11,
      12,    13,     0,     0,    14,     0,    20,    21,    22,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,   131,     1,     2,     3,
       0,     4,    18,    19,     5,     6,     7,     8,     9,     0,
      10,    11,    12,    13,     0,     0,    14,     0,    20,    21,
      22,    15,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,   132,     0,     1,
       2,     3,     0,     4,    18,    19,     5,     6,     7,     8,
       9,     0,    10,    11,    12,    13,    75,    76,    14,     0,
      20,    21,    22,    15,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,    17,   147,     0,    81,    82,
      83,    84,    85,     0,     0,     0,    18,    19,    69,    70,
       0,    71,    72,    73,    74,     0,    75,    76,     0,     0,
       0,     0,    20,    21,    22,     0,     0,     0,   148,     0,
       0,     0,     0,     0,   141,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    69,    70,     0,    71,    72,
      73,    74,     0,    75,    76,     0,     0,    72,     0,    74,
       0,    75,    76,     0,     0,    14,     0,     0,     0,     0,
      15,     0,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    17,    81,    82,    83,    84,    85,     0,     0,
       0,     0,     0,    18,    19,    69,    70,     0,    71,    72,
      73,    74,     0,    75,    76,     0,     0,     0,     0,    20,
      91,    22,     0,     0,     0,     0,    72,     0,    77,     0,
      75,    76,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    69,    70,     0,    71,    72,    73,    74,     0,
      75,    76,    81,    82,    83,    84,    85,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    69,
      70,     0,    71,    72,    73,    74,     0,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    69,    70,     0,    71,
      72,    73,    74,     0,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    69,    70,     0,    71,    72,    73,    74,
       0,    75,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      69,    70,     0,    71,    72,    73,    74,     0,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     127,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    69,    70,     0,
      71,    72,    73,    74,     0,    75,    76,    69,    70,     0,
      71,    72,    73,    74,     0,    75,    76,   152,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    69,     0,     0,    71,    72,    73,
      74,     0,    75,    76,     0,     0,     0,    71,    72,    73,
      74,     0,    75,    76,     0,     0,     0,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87
};

static const yytype_int16 yycheck[] =
{
       5,    34,   125,   126,    39,    16,    43,     0,    53,    14,
      15,    22,    17,    18,    19,    39,    27,   140,    52,    53,
      54,    39,    24,    25,    26,   148,    28,    29,    39,   152,
      23,    39,    77,    50,    51,    52,    53,    54,    39,    50,
      51,    39,    47,    48,    37,    67,    51,    52,    50,    51,
      52,    53,    54,    45,    46,    66,    67,    68,    63,    64,
      53,    67,    40,    67,    69,    70,    71,    72,    73,    74,
      75,    76,    68,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    68,    77,    68,    45,    45,    40,    45,
      43,     6,    97,    98,     0,    44,    44,     3,     4,     5,
     138,     7,   142,    96,    10,    11,    12,    13,    14,   142,
      16,    17,    18,    19,    -1,    -1,    22,   110,    -1,   124,
      -1,    27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,   141,    -1,    -1,   132,
      -1,    -1,   147,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      66,    67,    68,     3,     4,     5,    -1,     7,    -1,    39,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      50,    51,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    66,    67,    68,    39,
      -1,    -1,    -1,    -1,    44,     3,     4,     5,    -1,     7,
      50,    51,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    66,    67,    68,    27,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    44,     3,     4,     5,
      -1,     7,    50,    51,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    66,    67,
      68,    27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,     3,
       4,     5,    -1,     7,    50,    51,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    28,    29,    22,    -1,
      66,    67,    68,    27,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,     8,    -1,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    50,    51,    20,    21,
      -1,    23,    24,    25,    26,    -1,    28,    29,    -1,    -1,
      -1,    -1,    66,    67,    68,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,     9,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    20,    21,    -1,    23,    24,
      25,    26,    -1,    28,    29,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      27,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    39,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    50,    51,    20,    21,    -1,    23,    24,
      25,    26,    -1,    28,    29,    -1,    -1,    -1,    -1,    66,
      67,    68,    -1,    -1,    -1,    -1,    24,    -1,    43,    -1,
      28,    29,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    20,    21,    -1,    23,    24,    25,    26,    -1,
      28,    29,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    20,
      21,    -1,    23,    24,    25,    26,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    20,    21,    -1,    23,
      24,    25,    26,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    20,    21,    -1,    23,    24,    25,    26,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      20,    21,    -1,    23,    24,    25,    26,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    20,    21,    -1,
      23,    24,    25,    26,    -1,    28,    29,    20,    21,    -1,
      23,    24,    25,    26,    -1,    28,    29,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    20,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,    10,    11,    12,    13,    14,
      16,    17,    18,    19,    22,    27,    31,    39,    50,    51,
      66,    67,    68,    70,    71,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    39,    39,    39,    39,    67,
      92,    39,    39,    43,    67,    67,    67,    92,    92,    68,
      92,    92,    92,    45,    46,     0,    71,    83,    71,    20,
      21,    23,    24,    25,    26,    28,    29,    43,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    68,    68,
      92,    67,    92,    92,    92,    71,    85,    45,    45,    40,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      85,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    40,    40,    40,    45,    40,    40,    40,    44,    92,
      92,    44,    43,    71,    72,    92,    72,    72,    43,    71,
       6,     9,    82,    44,    72,    92,    84,     8,    40,    44,
      92,    72,    40,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    73,    74,    75,    75,    76,
      76,    76,    77,    78,    79,    80,    81,    82,    82,    83,
      84,    84,    85,    85,    86,    86,    87,    88,    89,    90,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     4,     4,     5,     7,     9,
      11,     5,     5,     2,     1,     1,     8,     2,     0,     4,
       4,     0,     1,     2,     4,     2,     4,     2,     2,     3,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3
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
#line 123 "parser_rules.y"
    { vec_push(program_root,(yyvsp[0].node)); }
#line 1665 "parser_rules.tab.c"
    break;

  case 3: /* program: program statement  */
#line 125 "parser_rules.y"
      {vec_push(program_root, (yyvsp[0].node));}
#line 1671 "parser_rules.tab.c"
    break;

  case 23: /* block: left_brace statement right_brace  */
#line 152 "parser_rules.y"
     { (yyval.node) = (yyvsp[-1].node); }
#line 1677 "parser_rules.tab.c"
    break;

  case 24: /* block: statement  */
#line 154 "parser_rules.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1683 "parser_rules.tab.c"
    break;

  case 25: /* indicator_stmt: indicator_function left_paren string right_paren  */
#line 161 "parser_rules.y"
    { (yyval.node) = new_indicator_node((yyvsp[-1].sval)); }
#line 1689 "parser_rules.tab.c"
    break;

  case 26: /* strategy_stmt: strategy_function left_paren string right_paren  */
#line 166 "parser_rules.y"
    { (yyval.node) = new_strategy_node((yyvsp[-1].sval)); }
#line 1695 "parser_rules.tab.c"
    break;

  case 27: /* if_stmt: if_statement left_paren expr right_paren block  */
#line 171 "parser_rules.y"
    { (yyval.node) = new_if_node((yyvsp[-2].node),(yyvsp[0].node),NULL); }
#line 1701 "parser_rules.tab.c"
    break;

  case 28: /* if_stmt: if_statement left_paren expr right_paren block else_statement block  */
#line 173 "parser_rules.y"
    { (yyval.node) = new_if_node((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1707 "parser_rules.tab.c"
    break;

  case 29: /* for_stmt: for_statement left_paren identifier assign expr to expr right_paren block  */
#line 178 "parser_rules.y"
    { (yyval.node) = new_for_node((yyvsp[-6].sval), (yyvsp[-4].node), (yyvsp[-2].node), NULL, (yyvsp[0].node)); }
#line 1713 "parser_rules.tab.c"
    break;

  case 30: /* for_stmt: for_statement left_paren identifier assign expr to expr step expr right_paren block  */
#line 180 "parser_rules.y"
    { (yyval.node) = new_for_node((yyvsp[-8].sval), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1719 "parser_rules.tab.c"
    break;

  case 31: /* for_stmt: for_statement left_paren expr right_paren block  */
#line 182 "parser_rules.y"
    { (yyval.node) = new_for_node(NULL, (yyvsp[-2].node), NULL, NULL, (yyvsp[0].node)); }
#line 1725 "parser_rules.tab.c"
    break;

  case 32: /* while_stmt: while_statement left_paren expr right_paren block  */
#line 187 "parser_rules.y"
    { (yyval.node) = new_while_node((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1731 "parser_rules.tab.c"
    break;

  case 33: /* return_stmt_expr: return_statement expr  */
#line 193 "parser_rules.y"
    { (yyval.node) = new_return_node((yyvsp[0].node)); }
#line 1737 "parser_rules.tab.c"
    break;

  case 34: /* break_stmt: break_statement  */
#line 198 "parser_rules.y"
    { (yyval.node) = new_break_node(); }
#line 1743 "parser_rules.tab.c"
    break;

  case 35: /* continue_stmt: continue_statement  */
#line 203 "parser_rules.y"
    { (yyval.node) = new_continue_node(); }
#line 1749 "parser_rules.tab.c"
    break;

  case 36: /* switch_stmt: switch_statement left_paren expr right_paren left_brace case_list default_case right_brace  */
#line 208 "parser_rules.y"
    { (yyval.node) = new_switch_node((yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1755 "parser_rules.tab.c"
    break;

  case 37: /* case_list: case_list case_stmt  */
#line 213 "parser_rules.y"
    {
        (yyvsp[0].node)->switch_case.next = (yyvsp[-1].node);
        (yyval.node) = (yyvsp[0].node);
    }
#line 1764 "parser_rules.tab.c"
    break;

  case 38: /* case_list: %empty  */
#line 218 "parser_rules.y"
    {
        (yyval.node) = NULL;
    }
#line 1772 "parser_rules.tab.c"
    break;

  case 39: /* case_stmt: expr left_brace switch_block_stmts right_brace  */
#line 225 "parser_rules.y"
    {
        (yyval.node) = new_case_node((yyvsp[-3].node), (yyvsp[-1].node));
    }
#line 1780 "parser_rules.tab.c"
    break;

  case 40: /* default_case: default_statement left_brace switch_block_stmts right_brace  */
#line 232 "parser_rules.y"
    {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1788 "parser_rules.tab.c"
    break;

  case 41: /* default_case: %empty  */
#line 236 "parser_rules.y"
    {
        (yyval.node) = NULL;
    }
#line 1796 "parser_rules.tab.c"
    break;

  case 42: /* switch_block_stmts: statement  */
#line 243 "parser_rules.y"
   {(yyval.node) = (yyvsp[0].node);}
#line 1802 "parser_rules.tab.c"
    break;

  case 43: /* switch_block_stmts: switch_block_stmts statement  */
#line 245 "parser_rules.y"
   {(yyval.node) = new_switch_block_node((yyvsp[-1].node),(yyvsp[0].node));}
#line 1808 "parser_rules.tab.c"
    break;

  case 44: /* var_stmt: var identifier assign expr  */
#line 250 "parser_rules.y"
    { (yyval.node) = new_var_node((yyvsp[-2].sval)); }
#line 1814 "parser_rules.tab.c"
    break;

  case 45: /* var_stmt: var identifier  */
#line 252 "parser_rules.y"
    { (yyval.node) = new_var_node((yyvsp[0].sval)); }
#line 1820 "parser_rules.tab.c"
    break;

  case 46: /* const_stmt: const_statement identifier assign expr  */
#line 257 "parser_rules.y"
    { (yyval.node) = new_const_node((yyvsp[-2].sval), (yyvsp[0].node)); }
#line 1826 "parser_rules.tab.c"
    break;

  case 47: /* simple_stmt: simple identifier  */
#line 262 "parser_rules.y"
    { (yyval.node) = new_simple_node((yyvsp[0].sval)); }
#line 1832 "parser_rules.tab.c"
    break;

  case 48: /* import_stmt: import_statement string  */
#line 267 "parser_rules.y"
     { (yyval.node) = new_import_node((yyvsp[0].sval)); }
#line 1838 "parser_rules.tab.c"
    break;

  case 49: /* assignment_stmt: identifier assign expr  */
#line 272 "parser_rules.y"
    { (yyval.node) = new_assign_node((yyvsp[-2].sval), (yyvsp[0].node)); }
#line 1844 "parser_rules.tab.c"
    break;

  case 50: /* assignment_re_stmt: identifier re_assign expr  */
#line 277 "parser_rules.y"
    { (yyval.node) = new_assign_re_node((yyvsp[-2].sval), (yyvsp[0].node)); }
#line 1850 "parser_rules.tab.c"
    break;

  case 51: /* expr: number  */
#line 283 "parser_rules.y"
    { (yyval.node) = new_number_node((yyvsp[0].ival)); }
#line 1856 "parser_rules.tab.c"
    break;

  case 52: /* expr: identifier  */
#line 285 "parser_rules.y"
    { (yyval.node) = new_var_node((yyvsp[0].sval)); }
#line 1862 "parser_rules.tab.c"
    break;

  case 53: /* expr: string  */
#line 287 "parser_rules.y"
    { (yyval.node) = new_string_node((yyvsp[0].sval)); }
#line 1868 "parser_rules.tab.c"
    break;

  case 54: /* expr: expr plus expr  */
#line 289 "parser_rules.y"
    { (yyval.node) = new_binop_node("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1874 "parser_rules.tab.c"
    break;

  case 55: /* expr: expr minus expr  */
#line 291 "parser_rules.y"
    { (yyval.node) = new_binop_node("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1880 "parser_rules.tab.c"
    break;

  case 56: /* expr: expr multiply expr  */
#line 293 "parser_rules.y"
    { (yyval.node) = new_binop_node("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1886 "parser_rules.tab.c"
    break;

  case 57: /* expr: expr divide expr  */
#line 295 "parser_rules.y"
    { (yyval.node) = new_binop_node("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1892 "parser_rules.tab.c"
    break;

  case 58: /* expr: expr divide_with_remind expr  */
#line 297 "parser_rules.y"
    { (yyval.node) = new_binop_node("%", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1898 "parser_rules.tab.c"
    break;

  case 59: /* expr: expr logical_and expr  */
#line 299 "parser_rules.y"
    { (yyval.node) = new_binop_node("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1904 "parser_rules.tab.c"
    break;

  case 60: /* expr: expr logical_or expr  */
#line 301 "parser_rules.y"
    { (yyval.node) = new_binop_node("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1910 "parser_rules.tab.c"
    break;

  case 61: /* expr: expr equals expr  */
#line 303 "parser_rules.y"
    { (yyval.node) = new_binop_node("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1916 "parser_rules.tab.c"
    break;

  case 62: /* expr: expr dont_equal expr  */
#line 305 "parser_rules.y"
    { (yyval.node) = new_binop_node("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1922 "parser_rules.tab.c"
    break;

  case 63: /* expr: expr greater_than expr  */
#line 307 "parser_rules.y"
    { (yyval.node) = new_binop_node(">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1928 "parser_rules.tab.c"
    break;

  case 64: /* expr: expr lesser_than expr  */
#line 309 "parser_rules.y"
    { (yyval.node) = new_binop_node("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1934 "parser_rules.tab.c"
    break;

  case 65: /* expr: expr greater_than_or_equals expr  */
#line 311 "parser_rules.y"
    { (yyval.node) = new_binop_node(">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1940 "parser_rules.tab.c"
    break;

  case 66: /* expr: expr lesser_than_or_equals expr  */
#line 313 "parser_rules.y"
    { (yyval.node) = new_binop_node("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1946 "parser_rules.tab.c"
    break;

  case 67: /* expr: expr bitwise_and expr  */
#line 315 "parser_rules.y"
    { (yyval.node) = new_binop_node("&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1952 "parser_rules.tab.c"
    break;

  case 68: /* expr: expr bitwise_or expr  */
#line 317 "parser_rules.y"
    { (yyval.node) = new_binop_node("|", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1958 "parser_rules.tab.c"
    break;

  case 69: /* expr: expr bitwise_xor expr  */
#line 319 "parser_rules.y"
    { (yyval.node) = new_binop_node("^", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1964 "parser_rules.tab.c"
    break;

  case 70: /* expr: expr bitwise_shift_to_left expr  */
#line 321 "parser_rules.y"
    { (yyval.node) = new_binop_node("<<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1970 "parser_rules.tab.c"
    break;

  case 71: /* expr: expr bitwise_shift_to_right expr  */
#line 323 "parser_rules.y"
    { (yyval.node) = new_binop_node(">>", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1976 "parser_rules.tab.c"
    break;

  case 72: /* expr: logical_not expr  */
#line 325 "parser_rules.y"
    { (yyval.node) = new_unop_node("!", (yyvsp[0].node)); }
#line 1982 "parser_rules.tab.c"
    break;

  case 73: /* expr: bitwise_not expr  */
#line 327 "parser_rules.y"
    { (yyval.node) = new_unop_node("~", (yyvsp[0].node)); }
#line 1988 "parser_rules.tab.c"
    break;

  case 74: /* expr: minus expr  */
#line 329 "parser_rules.y"
    { (yyval.node) = new_unop_node("-", (yyvsp[0].node)); }
#line 1994 "parser_rules.tab.c"
    break;

  case 75: /* expr: plus expr  */
#line 331 "parser_rules.y"
    { (yyval.node) = new_unop_node("+", (yyvsp[0].node)); }
#line 2000 "parser_rules.tab.c"
    break;

  case 76: /* expr: left_paren expr right_paren  */
#line 333 "parser_rules.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2006 "parser_rules.tab.c"
    break;


#line 2010 "parser_rules.tab.c"

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

#line 336 "parser_rules.y"

