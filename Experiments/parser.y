%{
#include <bits/stdc++.h>
#include "AstNode.h"
#include "fiona_base.h"

using namespace std;


int yylex(void);
void yyerror(char *s);
%}

%union {
    int int_val;
    float float_val;
    char char_val;
    bool bool_val;
    char* str;
    AstNode* ast;
}



%token VARVAL
%token <int_val> INTVAL
%token <float_val> FLOATVAL
%token <char_val> CHARVAL
%token <bool_val> BOOLVAL
%token <str> IDENTIFIER
%token INTEGER FLOAT BOOLEAN PRINT DECLARE
%token EQUAL SEMICOLON LPARAN RPARAN FOR WHILE LOOP IN COMMA AND OR SCAN ASSIGN FUNCTION
%token DOT LPARAN_C RPARAN_C BREAK IF LE LT GT GE EQ NE ADD SUBTRACT MULTIPLY DIVIDE  LPARAN_S RPARAN_S 

%nonassoc IFX
%nonassoc ELSE 
%type <ast> print_stmt declaration_stmt assignment_stmt for_stmt while_stmt loop_stmt factor stmt block stmt_list term
%type <ast> if_stmt array_access array_declaration arg_list expr arithmetic relational function_call function_declaration


%%
program:
 root {exit(0);}
 ;
root:
 root stmt {}
 |
 ;

 function_declaration:  FUNCTION IDENTIFIER LPARAN identifier_list RPARAN block     {cout << "Function dude\n" << $2 << "\n";}
    ;

function_call:      IDENTIFIER LPARAN expr_list RPARAN      { cout << "CAlling Baby\n";}
    ;

 block:             LPARAN_C stmt_list RPARAN_C             {cout << "block\n"; $$ = new BlockNode($2);}
    ;

 stmt_list:          stmt                                   {cout << "stmt detected\n";$$ = new StatementList(nullptr, $1);}
    |                stmt_list stmt                         {$$ = new StatementList($1,$2);}
    ;

 stmt:              expr SEMICOLON                          {}
    |               expr_list SEMICOLON                     {}
    |               block                                   {}
    |               declaration_stmt                        {}
    |               assignment_stmt                         {}
    |               print_stmt                              {}
    |               for_stmt                                {}
    |               while_stmt                              {}
    |               loop_stmt                               {}
    |               if_stmt                                 {}
    |               array_declaration SEMICOLON             {}
    |               function_call                           {}
    |               function_declaration                    {}
    ;

 print_stmt:        PRINT LPARAN arg_list RPARAN                 {}
    ;
 
 declaration_stmt:  IDENTIFIER SEMICOLON              {cout << "simple dec...\n" << $1 << "\n";$$ = new DeclarationNode($1, nullptr);}
    |               IDENTIFIER DECLARE expr SEMICOLON   { cout << "dec..\n"; $$ = new DeclarationNode($1, $3);}
    ;

assignment_stmt:    IDENTIFIER ASSIGN expr SEMICOLON         { cout << "Asss\n"; $$ = new AssignmentNode($1, $3);}
    ;

for_stmt:           FOR IDENTIFIER IN factor DOT DOT factor block              {cout << "for type1\n"; $$ = new ForNode($2, $4, $7, nullptr, $8);}
    |               FOR IDENTIFIER IN factor DOT DOT factor COMMA factor block {cout << "for type2\n"; $$ = new ForNode($2, $4, $7, $9, $10);}
    ;

if_stmt:            IF  expr  block %prec IFX               {cout << "if\n"; $$ = new IfElseNode($2, $3, nullptr);}
    |               IF expr block ELSE block                {cout << "if_else\n"; $$ = new IfElseNode($2, $3, $5);}
    ;

while_stmt:         WHILE expr block                        {$$ = new WhileNode($2, $3);}
    ;

loop_stmt:          LOOP block                              {cout << "Loop!\n"; $$ = new LoopNode($2);} 
    ;

array_declaration:  IDENTIFIER DECLARE LPARAN_S expr RPARAN_S       {cout << "Array DEc1\n";}
    |               IDENTIFIER DECLARE LPARAN_C expr_list RPARAN_C  {cout << "Array Dec2\n";}
    ;

array_access:        IDENTIFIER LPARAN_S expr RPARAN_S       {cout << "Array_access";}
    ;

arg_list:           expr                                   {$$ = new ArgList(nullptr, $1);}
    |               arg_list COMMA expr                    {cout << "exp_list detected:)";$$ = new ArgList(&1, $3);}
    ;

expr:               expr ADD term                           { cout << "Exp!!\n"; $$ = new AdditionNode($1, $3);}
    |               expr SUBTRACT term                      { $$ = new SubtractionNode($1, $3);}
    |               term                                    { $$ = $1;}
    ;

term:               term MULTIPLY factor                    {$$ = new MultiplicationNode($1, $3);}
    |               term DIVIDE factor                      { $$ = new DivisionNode($1, $3);}
    |               factor                                  { $$ = $1;}
    ;

identifier_list:    IDENTIFIER                              {}
    |               identifier_list COMMA IDENTIFIER        {}
    ;

arithmetic:         ADD                                     {}
    |               SUBTRACT                                {}
    |               MULTIPLY                                {}
    |               DIVIDE                                  {}
    ;

relational:         GT                                      {}
    |               LT                                      {}
    |               GE                                      {}
    |               LE                                      {}
    |               NE                                      {}
    |               EQ                                      {}
    ;               

factor:             IDENTIFIER                              {cout << "Id detected!\n" << $1 << "\n"; $$ = new VariableNode($1);}
    |               INTVAL                                  {cout << $1 << "\n"; $$ = new IntegerLiteral($1);}
    |               FLOATVAL                                {cout << $1 << "\n"; $$ = new FloatLiteral($1);}
    |               BOOLVAL                                 { $$ = new BoolLiteral($1);}
    |               array_access                            {}
    |               LPARAN expr RPARAN                      {$$ = $2;}
    ;   

%%

void yyerror(char *s) { 
    fprintf(stdout, "%s\n", s); 
} 

int main(void) { 
    extern FILE* yyin;
    FILE* f = fopen("input.fi","r");
    yyin = f;
    yyparse(); 
    return 0; 
} 
