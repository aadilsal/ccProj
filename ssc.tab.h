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

#ifndef YY_YY_SSC_TAB_H_INCLUDED
# define YY_YY_SSC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    tok_printd = 258,              /* tok_printd  */
    tok_prints = 259,              /* tok_prints  */
    tok_if = 260,                  /* tok_if  */
    tok_else = 261,                /* tok_else  */
    tok_for = 262,                 /* tok_for  */
    tok_return = 263,              /* tok_return  */
    tok_int = 264,                 /* tok_int  */
    tok_double = 265,              /* tok_double  */
    tok_void = 266,                /* tok_void  */
    IFX = 267,                     /* IFX  */
    tok_le = 268,                  /* tok_le  */
    tok_ge = 269,                  /* tok_ge  */
    tok_eq = 270,                  /* tok_eq  */
    tok_ne = 271,                  /* tok_ne  */
    tok_function = 272,            /* tok_function  */
    tok_identifier = 273,          /* tok_identifier  */
    tok_double_literal = 274,      /* tok_double_literal  */
    tok_string_literal = 275       /* tok_string_literal  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "ssc.y"

    char *identifier;
    double double_literal;
    char *string_literal;
    llvm::Value* value; 
    int type;
    std::vector<llvm::Value*>* param_list;

#line 93 "ssc.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SSC_TAB_H_INCLUDED  */
