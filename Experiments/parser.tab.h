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
#include "fiona_base.h"
#include "../Statements/statement.h"
#include "../Statements/BlockNode.h"
#include "../Expressions/expression.h"
#include "SymbolTable.h"
#include "data_types.h"
#include "../Expressions/Literals.h"
#include "../Expressions/Variables.h"
#include "../Statements/Assignment.h"
#include "../Statements/Declaration.h"
#include "../Statements/Functions.h"
#include "../Statements/IfElseNode.h"
#include "../Statements/Loops.h"
#include "../Statements/StatementList.h"
#include "../Expressions/BinOp.h"
#include "../Statements/IO.h"
#include "../Statements/ExpStat.h"
#include "../Statements/BreakStatement.h"
#include "../Statements/ReturnStatement.h"
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    VARVAL = 258,                  /* VARVAL  */
    INTVAL = 259,                  /* INTVAL  */
    REALVAL = 260,                 /* REALVAL  */
    CHARVAL = 261,                 /* CHARVAL  */
    BOOLVAL = 262,                 /* BOOLVAL  */
    IDENTIFIER = 263,              /* IDENTIFIER  */
    PRINT = 264,                   /* PRINT  */
    DECLARE = 265,                 /* DECLARE  */
    RETURN = 266,                  /* RETURN  */
    EQUAL = 267,                   /* EQUAL  */
    SEMICOLON = 268,               /* SEMICOLON  */
    LPARAN = 269,                  /* LPARAN  */
    RPARAN = 270,                  /* RPARAN  */
    FOR = 271,                     /* FOR  */
    WHILE = 272,                   /* WHILE  */
    LOOP = 273,                    /* LOOP  */
    IN = 274,                      /* IN  */
    COMMA = 275,                   /* COMMA  */
    AND = 276,                     /* AND  */
    OR = 277,                      /* OR  */
    SCAN = 278,                    /* SCAN  */
    ASSIGN = 279,                  /* ASSIGN  */
    FUNCTION = 280,                /* FUNCTION  */
    DOT = 281,                     /* DOT  */
    LPARAN_C = 282,                /* LPARAN_C  */
    RPARAN_C = 283,                /* RPARAN_C  */
    BREAK = 284,                   /* BREAK  */
    IF = 285,                      /* IF  */
    LE = 286,                      /* LE  */
    LT = 287,                      /* LT  */
    GT = 288,                      /* GT  */
    GE = 289,                      /* GE  */
    EQ = 290,                      /* EQ  */
    NE = 291,                      /* NE  */
    ADD = 292,                     /* ADD  */
    SUBTRACT = 293,                /* SUBTRACT  */
    MULTIPLY = 294,                /* MULTIPLY  */
    DIVIDE = 295,                  /* DIVIDE  */
    LPARAN_S = 296,                /* LPARAN_S  */
    RPARAN_S = 297,                /* RPARAN_S  */
    IFX = 298,                     /* IFX  */
    ELSE = 299                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 36 "parser.y"

    int int_val;
    float float_val;
    char char_val;
    bool bool_val;
    char* str;
    StatementList* sl;
    StatementNode* sn;
    VariableNode* vn;
    BlockNode* bn;
    ForNode* fn;
    WhileNode* wn;
    IfElseNode* ifn;
    LoopNode* ln;
    AssignmentNode* an;
    DeclarationNode* dn;
    ExpressionNode* exp;
    ArgList* argl;
    ParamList* prml;
    PrintNode* pn;
    FunctionDefinitionNode* fd;
    FunctionCallNode* fc;
    ReturnNode* ret;

#line 133 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
