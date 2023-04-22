%{
    #include <stdio.h>
    #include "tmp.h"
    int yylex(void);
    void yyerror(char *s);
%}

%union{
    nodeType *nPtr;
}

%type <nPtr> a
%token A  

%%
a: A {}
;
%%

void yyerror(char *s) { 
    fprintf(stdout, "%s\n", s); 
}

int main(){
    yyparse();
    return 0;
}