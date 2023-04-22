%{
#include <bits/stdc++.h>
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



//extern Scope* curr_scope=new Scope(nullptr);



int yylex(void);
void yyerror(char *s);
%}




%union {
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
}



%token VARVAL
%token <int_val> INTVAL
%token <float_val> REALVAL
%token <char_val> CHARVAL
%token <bool_val> BOOLVAL
%token <str> IDENTIFIER
%token  PRINT DECLARE RETURN
%token EQUAL SEMICOLON LPARAN RPARAN FOR WHILE LOOP IN COMMA AND OR SCAN ASSIGN FUNCTION
%token DOT LPARAN_C RPARAN_C BREAK IF LE LT GT GE EQ NE ADD SUBTRACT MULTIPLY DIVIDE  LPARAN_S RPARAN_S 

%nonassoc IFX
%nonassoc ELSE 
%type <pn>  print_stmt
%type  array_declaration 
%type <fc> function_call 
%type <fd> function_declaration
%type <dn>  declaration_stmt
%type <an> assignment_stmt
%type <fn> for_stmt
%type <wn>  while_stmt
%type <ln> loop_stmt
%type <bn> block
%type <sl> stmt_list
%type <sn> stmt
%type <ifn> if_stmt
%type <ret> return_statement
%type <exp> expr array_access factor term relational
%type <argl>  arg_list




%%
program:    {}
 |          stmt_list       { $1->execute();}
 ;

 function_declaration:  FUNCTION IDENTIFIER LPARAN arg_list RPARAN block     {$$ = new FunctionDefinitionNode($4, $2, $6);}
    ;

function_call:      IDENTIFIER LPARAN arg_list RPARAN      {$$ = new FunctionCallNode($3, $1);}
    ;

 block:             LPARAN_C stmt_list RPARAN_C             {$$ = new BlockNode($2);}
    ;

 stmt_list:          stmt                                   {$$ = new StatementList(nullptr, $1);}
    |                stmt_list stmt                         {$$ = new StatementList($1,$2);}
    ;

 stmt:              arg_list SEMICOLON                      {$$ = new ExpWrapper($1);}
    |               block                                   {$$=$1;}
    |               declaration_stmt                        {$$=$1;}
    |               assignment_stmt                         {$$=$1;}
    |               print_stmt SEMICOLON                    {$$=$1;}
    |               for_stmt                                {$$=$1;}
    |               while_stmt                              {$$=$1;}
    |               loop_stmt                               {$$=$1;}
    |               if_stmt                                 {$$=$1;}
    |               array_declaration SEMICOLON             {}
    |               function_declaration                    {$$=$1;}
    |               BREAK SEMICOLON                         {$$ = new BreakNode();}
    |               return_statement                        {$$=$1;}
    ;

 print_stmt:        PRINT LPARAN arg_list RPARAN                 {$$ = new PrintNode($3);}
    ;
 
 declaration_stmt:       IDENTIFIER DECLARE expr SEMICOLON   {$$ = new DeclarationNode($1, $3);}
    ;

assignment_stmt:    IDENTIFIER ASSIGN expr SEMICOLON         {$$ = new AssignmentNode($1, $3);}
    ;

for_stmt:           FOR IDENTIFIER IN factor DOT DOT factor block              { $$ = new ForNode($2, $4, $7, nullptr, $8);}
    |               FOR IDENTIFIER IN factor DOT DOT factor COMMA factor block {$$ = new ForNode($2, $4, $7, $9, $10);}
    ;

if_stmt:            IF  expr block %prec IFX               {$$ = new IfElseNode($2, $3, nullptr);}
    |               IF expr block ELSE block                { $$ = new IfElseNode($2, $3, $5);}
    ;

while_stmt:         WHILE expr block                        {$$ = new WhileNode($2, $3);}
    ;

loop_stmt:          LOOP block                              {$$ = new LoopNode($2);} 
    ;

array_declaration:  IDENTIFIER DECLARE LPARAN_S expr RPARAN_S       {}
    |               IDENTIFIER DECLARE LPARAN_C arg_list RPARAN_C  {}
    ;

array_access:        IDENTIFIER LPARAN_S expr RPARAN_S       {}
    ;

arg_list:           expr                                   {$$ = new ArgList(nullptr, $1);}
    |               arg_list COMMA expr                    {$$ = new ArgList($1, $3);}
    ;

expr:               expr ADD term                           { $$ = new AdditionNode($1, $3);}
    |               expr SUBTRACT term                      { $$ = new SubtractionNode($1, $3);}
    |               term                                    { $$ = $1;}
    |               relational                              {$$=$1;}
    |               function_call                           {$$=$1;}
    ;

term:               term MULTIPLY factor                    {$$ = new MultiplicationNode($1, $3);}
    |               term DIVIDE factor                      { $$ = new DivisionNode($1, $3);}
    |               factor                                  { $$ = $1;}
    ;

return_statement:   RETURN SEMICOLON                        {$$ = new ReturnNode(nullptr);}
    |               RETURN expr SEMICOLON                   {$$ = new ReturnNode($2);}      

relational:         expr GT expr                                      {$$ = new GTNode($1, $3);}
    |               expr LT expr                                      {$$ = new LTNode($1, $3);}
    |               expr GE expr                                      {$$ = new GENode($1, $3);}
    |               expr LE expr                                      {$$ = new LENode($1, $3);}
    |               expr NE expr                                      {$$ = new NEQNode($1, $3);}
    |               expr EQ expr                                      {$$ = new EQNode($1, $3);}
    ;               

factor:             IDENTIFIER                              {$$ = new VariableNode($1);}
    |               INTVAL                                  {$$ = new IntegerLiteral($1);}
    |               REALVAL                                {$$ = new FloatLiteral($1);}
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
