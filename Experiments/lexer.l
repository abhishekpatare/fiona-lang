
%{ 
#include "bits/stdc++.h" 
#include "parser.tab.h" 
void yyerror(char *); 
%} 
%% 


0       {
            yylval.int_val=0; 
            return INTVAL; 
        } 

[1-9][0-9]* { 
            yylval.int_val = atoi(yytext);
            return INTVAL; 
        }

[0-9]+[.][0-9]+ {
            yylval.float_val = atof(yytext);
            return REALVAL;
        }

"true"      {
        yylval.bool_val=true;
        return BOOLVAL;
    }
"false"     {
        yylval.bool_val=false;
        return BOOLVAL;
    }
"int"       return INTVAL;
"float"     return REALVAL;
"bool"      return BOOLVAL;
"char"      return CHARVAL;
"fn"        return FUNCTION;

"="         return ASSIGN;
">="        return GE; 
"<="        return LE; 
"=="        return EQ; 
"!="        return NE;
">"	        return GT;
"<"	        return LT;
"&&"	    return AND;
"||"	    return OR;
"+"         return ADD;
"-"         return SUBTRACT;
"/"         return DIVIDE;
"*"         return MULTIPLY;
"for"       return FOR;
"in"        return IN; 
"while "    return WHILE;  
"if "       return IF; 
"else"     return ELSE; 
"print"     return PRINT;
"loop"      return LOOP; 
"scan"      return SCAN;
"("         return LPARAN;
")"         return RPARAN;
"{"         return LPARAN_C;
"}"         return RPARAN_C;
"["         return LPARAN_S;
"]"         return RPARAN_S;
","         return COMMA;
"."         return DOT;
";"         return SEMICOLON;
":="        return DECLARE;
"break"     return BREAK;
"return"    return RETURN;

[a-zA-Z_][a-zA-Z_0-9]* {
            yylval.str = strdup(yytext);
            return IDENTIFIER;
        }
[ \t\n]+    ; /* ignore whitespace */ 
.           ;


%% 
int yywrap(void) { 
    return 1; 
} 