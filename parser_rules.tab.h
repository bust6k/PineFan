/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
#line 3 "parser_rules.y"

#include <stdio.h>
#include "ast.h"

#line 54 "parser_rules.tab.h"

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
    indicator_function = 259,      /* indicator_function  */
    strategy_function = 260,       /* strategy_function  */
    if_statement = 261,            /* if_statement  */
    else_statement = 262,          /* else_statement  */
    for_statement = 263,           /* for_statement  */
    step = 264,                    /* step  */
    to = 265,                      /* to  */
    return_statement = 266,        /* return_statement  */
    while_statement = 267,         /* while_statement  */
    break_statement = 268,         /* break_statement  */
    continue_statement = 269,      /* continue_statement  */
    switch_statement = 270,        /* switch_statement  */
    case_statement = 271,          /* case_statement  */
    default_statement = 272,       /* default_statement  */
    var = 273,                     /* var  */
    const_statement = 274,         /* const_statement  */
    simple = 275,                  /* simple  */
    logical_and = 276,             /* logical_and  */
    logical_or = 277,              /* logical_or  */
    logical_not = 278,             /* logical_not  */
    dont_equal = 279,              /* dont_equal  */
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
    left_quad_brace = 298,         /* left_quad_brace  */
    right_quad_brace = 299,        /* right_quad_brace  */
    left_brace = 300,              /* left_brace  */
    right_brace = 301,             /* right_brace  */
    assign = 302,                  /* assign  */
    re_assign = 303,               /* re_assign  */
    equals = 304,                  /* equals  */
    greater_than = 305,            /* greater_than  */
    lesser_than = 306,             /* lesser_than  */
    plus = 307,                    /* plus  */
    minus = 308,                   /* minus  */
    multiply = 309,                /* multiply  */
    divide = 310,                  /* divide  */
    divide_with_remind = 311,      /* divide_with_remind  */
    greater_than_or_equals = 312,  /* greater_than_or_equals  */
    lesser_than_or_equals = 313,   /* lesser_than_or_equals  */
    bitwise_and_with_equals = 314, /* bitwise_and_with_equals  */
    bitwise_or_with_equals = 315,  /* bitwise_or_with_equals  */
    bitwise_xor_with_equals = 316, /* bitwise_xor_with_equals  */
    bitwise_not_with_equals = 317, /* bitwise_not_with_equals  */
    bitwise_shift_right_with_equals = 318, /* bitwise_shift_right_with_equals  */
    bitwise_shift_left_with_equals = 319, /* bitwise_shift_left_with_equals  */
    comma = 320,                   /* comma  */
    dot = 321,                     /* dot  */
    colon = 322,                   /* colon  */
    number = 323,                  /* number  */
    identifier = 324,              /* identifier  */
    string = 325,                  /* string  */
    PREC_SINGLE_NAME = 326,        /* PREC_SINGLE_NAME  */
    PREC_TYPE_NAME = 327,          /* PREC_TYPE_NAME  */
    PREC_FUNC = 328,               /* PREC_FUNC  */
    PREC_CALL = 329                /* PREC_CALL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "parser_rules.y"

    int ival;
    char *sval;
    struct ast_node *node;

#line 151 "parser_rules.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_RULES_TAB_H_INCLUDED  */
