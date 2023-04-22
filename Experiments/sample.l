%{  
#include "sample.tab.h" 
void yyerror(char *); 
%} 


%% 

.         return A  ;


%% 
int yywrap(void) { 
    return 1; 
} 