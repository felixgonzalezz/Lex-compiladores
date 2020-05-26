%{
/*Sección de declaraciones*/
#include <stdio.h>
extern int yylex();
void yyerror(char *s);
%}





%%
/*Sección del esquema de traducción, usa BNF simplificada*/







%%
/*Sección de código de usuario*/


void yyerror (char *s){
    printf("%s\n",s);
}