%{
#include <bits/stdc++.h>
#include "AstNode.h"

using namespace std;
%}


%union{
    Dtype* var_val;
    AstNode* nPtr;
};

%token <var_val> VARVAL IDENTIFIER
%token INTVAL FLOATVAL BOOLVAL INTEGER FLOAT BOOLEAN PRINT
%token EQUAL SEMICOLON LPARAN RPARAN 



%%
program:
 function {exit(0);}
 ;

 function stmt {}
 |
 ;
 stmt:
 expr SEMICOLON {}
 |declaration_stmt {}
 |assignment_stmt {}
 |print_stmt {}
 ;

 print_stmt:
    PRINT LPARAN exp RPARAN {}
    ;
 
 declaration_stmt:
    dtype IDENTIFIER SEMICOLON {}
    |dtype IDENTIFIER EQUAL expr SEMICOLON {}
    ;

assignment_stmt:
    IDENTIFIER EQUAL expr {}
    ;
 dtype:
    INTEGER {}
    |FLOAT {}
    |BOOLEAN {}
    ;

%%
