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
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 5 "parser_rules.y"

#include <stdio.h>
#include "ast.h"
#include<string.h>

#line 50 "parser_rules.tab.h"

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
    if_statement = 259,            /* if_statement  */
    else_statement = 260,          /* else_statement  */
    for_statement = 261,           /* for_statement  */
    step = 262,                    /* step  */
    to = 263,                      /* to  */
    return_statement = 264,        /* return_statement  */
    while_statement = 265,         /* while_statement  */
    break_statement = 266,         /* break_statement  */
    continue_statement = 267,      /* continue_statement  */
    switch_statement = 268,        /* switch_statement  */
    case_statement = 269,          /* case_statement  */
    default_statement = 270,       /* default_statement  */
    var = 271,                     /* var  */
    varip_statement = 272,         /* varip_statement  */
    const_statement = 273,         /* const_statement  */
    simple = 274,                  /* simple  */
    logical_and = 275,             /* logical_and  */
    logical_or = 276,              /* logical_or  */
    logical_not = 277,             /* logical_not  */
    dont_equal = 278,              /* dont_equal  */
    question_sign = 279,           /* question_sign  */
    bitwise_and = 280,             /* bitwise_and  */
    bitwise_or = 281,              /* bitwise_or  */
    bitwise_xor = 282,             /* bitwise_xor  */
    bitwise_not = 283,             /* bitwise_not  */
    bitwise_shift_to_left = 284,   /* bitwise_shift_to_left  */
    bitwise_shift_to_right = 285,  /* bitwise_shift_to_right  */
    semicolon = 286,               /* semicolon  */
    import_statement = 287,        /* import_statement  */
    as = 288,                      /* as  */
    input_func = 289,              /* input_func  */
    int_type = 290,                /* int_type  */
    bool_type = 291,               /* bool_type  */
    float_type = 292,              /* float_type  */
    color_type = 293,              /* color_type  */
    string_as_type = 294,          /* string_as_type  */
    left_paren = 295,              /* left_paren  */
    right_paren = 296,             /* right_paren  */
    func_paren = 297,              /* func_paren  */
    call_paren = 298,              /* call_paren  */
    left_quad_brace = 299,         /* left_quad_brace  */
    right_quad_brace = 300,        /* right_quad_brace  */
    left_brace = 301,              /* left_brace  */
    right_brace = 302,             /* right_brace  */
    assign = 303,                  /* assign  */
    re_assign = 304,               /* re_assign  */
    equals = 305,                  /* equals  */
    greater_than = 306,            /* greater_than  */
    lesser_than = 307,             /* lesser_than  */
    plus_and_assign = 308,         /* plus_and_assign  */
    minus_and_assign = 309,        /* minus_and_assign  */
    multiply_and_assign = 310,     /* multiply_and_assign  */
    divide_and_assign = 311,       /* divide_and_assign  */
    remind_and_assign = 312,       /* remind_and_assign  */
    plus = 313,                    /* plus  */
    minus = 314,                   /* minus  */
    multiply = 315,                /* multiply  */
    divide = 316,                  /* divide  */
    divide_with_remind = 317,      /* divide_with_remind  */
    greater_than_or_equals = 318,  /* greater_than_or_equals  */
    lesser_than_or_equals = 319,   /* lesser_than_or_equals  */
    bitwise_and_with_equals = 320, /* bitwise_and_with_equals  */
    bitwise_or_with_equals = 321,  /* bitwise_or_with_equals  */
    bitwise_xor_with_equals = 322, /* bitwise_xor_with_equals  */
    bitwise_not_with_equals = 323, /* bitwise_not_with_equals  */
    bitwise_shift_right_with_equals = 324, /* bitwise_shift_right_with_equals  */
    bitwise_shift_left_with_equals = 325, /* bitwise_shift_left_with_equals  */
    comma = 326,                   /* comma  */
    dot = 327,                     /* dot  */
    colon = 328,                   /* colon  */
    number = 329,                  /* number  */
    identifier = 330,              /* identifier  */
    string = 331,                  /* string  */
    PREC_SINGLE_NAME = 332,        /* PREC_SINGLE_NAME  */
    PREC_TYPE_NAME = 333,          /* PREC_TYPE_NAME  */
    PREC_FUNC = 334,               /* PREC_FUNC  */
    PREC_CALL = 335,               /* PREC_CALL  */
    PREC_TERNARY_IDENT = 336       /* PREC_TERNARY_IDENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "parser_rules.y"

    int ival;
    char *sval;
    struct ast_node *node;

#line 154 "parser_rules.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_RULES_TAB_H_INCLUDED  */
