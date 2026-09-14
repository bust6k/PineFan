/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Skeleton interface for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSER_RULES_TAB_H_INCLUDED
# define YY_YY_PARSER_RULES_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 5 "parser_rules.y"

#include <stdio.h>
#include "ast.h"
#include<string.h>
//static struct ast_node* merge_call_list(YYSTYPE x0,YYSTYPE x1);

#line 51 "parser_rules.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LOWEST_PREC = 258,             /* LOWEST_PREC  */
    COMMA_PREC = 259,              /* COMMA_PREC  */
    COMMA_LIST_CALL = 260,         /* COMMA_LIST_CALL  */
    if_statement = 261,            /* if_statement  */
    else_statement = 262,          /* else_statement  */
    for_statement = 263,           /* for_statement  */
    step = 264,                    /* step  */
    to = 265,                      /* to  */
    by = 266,                      /* by  */
    return_statement = 267,        /* return_statement  */
    while_statement = 268,         /* while_statement  */
    break_statement = 269,         /* break_statement  */
    continue_statement = 270,      /* continue_statement  */
    switch_statement = 271,        /* switch_statement  */
    case_statement = 272,          /* case_statement  */
    default_statement = 273,       /* default_statement  */
    var = 274,                     /* var  */
    varip_statement = 275,         /* varip_statement  */
    const_statement = 276,         /* const_statement  */
    simple = 277,                  /* simple  */
    logical_and = 278,             /* logical_and  */
    logical_or = 279,              /* logical_or  */
    logical_not = 280,             /* logical_not  */
    dont_equal = 281,              /* dont_equal  */
    question_sign = 282,           /* question_sign  */
    bitwise_and = 283,             /* bitwise_and  */
    bitwise_or = 284,              /* bitwise_or  */
    bitwise_xor = 285,             /* bitwise_xor  */
    bitwise_not = 286,             /* bitwise_not  */
    bitwise_shift_to_left = 287,   /* bitwise_shift_to_left  */
    bitwise_shift_to_right = 288,  /* bitwise_shift_to_right  */
    semicolon = 289,               /* semicolon  */
    import_statement = 290,        /* import_statement  */
    as = 291,                      /* as  */
    input_func = 292,              /* input_func  */
    int_type = 293,                /* int_type  */
    bool_type = 294,               /* bool_type  */
    float_type = 295,              /* float_type  */
    color_type = 296,              /* color_type  */
    string_as_type = 297,          /* string_as_type  */
    left_paren = 298,              /* left_paren  */
    right_paren = 299,             /* right_paren  */
    func_lparen = 300,             /* func_lparen  */
    func_rparen = 301,             /* func_rparen  */
    call_lparen = 302,             /* call_lparen  */
    call_rparen = 303,             /* call_rparen  */
    left_quad_brace = 304,         /* left_quad_brace  */
    right_quad_brace = 305,        /* right_quad_brace  */
    left_brace = 306,              /* left_brace  */
    right_brace = 307,             /* right_brace  */
    assign = 308,                  /* assign  */
    re_assign = 309,               /* re_assign  */
    equals = 310,                  /* equals  */
    greater_than = 311,            /* greater_than  */
    lesser_than = 312,             /* lesser_than  */
    plus_and_assign = 313,         /* plus_and_assign  */
    minus_and_assign = 314,        /* minus_and_assign  */
    multiply_and_assign = 315,     /* multiply_and_assign  */
    divide_and_assign = 316,       /* divide_and_assign  */
    remind_and_assign = 317,       /* remind_and_assign  */
    plus = 318,                    /* plus  */
    minus = 319,                   /* minus  */
    multiply = 320,                /* multiply  */
    divide = 321,                  /* divide  */
    divide_with_remind = 322,      /* divide_with_remind  */
    greater_than_or_equals = 323,  /* greater_than_or_equals  */
    lesser_than_or_equals = 324,   /* lesser_than_or_equals  */
    bitwise_and_with_equals = 325, /* bitwise_and_with_equals  */
    bitwise_or_with_equals = 326,  /* bitwise_or_with_equals  */
    bitwise_xor_with_equals = 327, /* bitwise_xor_with_equals  */
    bitwise_not_with_equals = 328, /* bitwise_not_with_equals  */
    bitwise_shift_right_with_equals = 329, /* bitwise_shift_right_with_equals  */
    bitwise_shift_left_with_equals = 330, /* bitwise_shift_left_with_equals  */
    comma = 331,                   /* comma  */
    dot = 332,                     /* dot  */
    colon = 333,                   /* colon  */
    number = 334,                  /* number  */
    identifier = 335,              /* identifier  */
    string = 336,                  /* string  */
    float_number = 337,            /* float_number  */
    PREC_SINGLE_NAME = 338,        /* PREC_SINGLE_NAME  */
    PREC_TYPE_NAME = 339,          /* PREC_TYPE_NAME  */
    PREC_FUNC = 340,               /* PREC_FUNC  */
    PREC_CALL = 341,               /* PREC_CALL  */
    PREC_TERNARY_IDENT = 342       /* PREC_TERNARY_IDENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "parser_rules.y"

    int ival;
    char *sval;
    struct ast_node *node;

#line 161 "parser_rules.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_RULES_TAB_H_INCLUDED  */
