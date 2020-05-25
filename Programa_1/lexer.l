
%{
#include <stdlib.h>
#include "tokens.h"
%}

/**/
%option noyywrap;
/*contador de linear*/
%option yylineno;

/*Identificadores*/
digito [0-9]
id [a-zA-Z_\-]

/*Expresiones regulares*/
%%
"include | main | void | printf | scanf"    { return P_RESERVADA; }
"define"                                    { return P_DEFINE; }
"return"                                    { return P_RETURN; }
"+ | - | * | /"                             { return OPERADOR; }
"++"                                        { return P_INCREMENTO; }
"--"                                        { return P_DECREMENTO; }
"{"                                         { return A_LLAVE; }
"}"                                         { return C_LLAVE}
"("                                         { return A_PAR; }
")"                                         { return C_PAR; }
"["                                         { return A_CORCHETE; }
"]"                                         { return C_CORCHETE; }
";"                                         { return FIN_SENTENCIA; }
"int | float | double | char | sin"         { return T_BASE; }
"#"                                         { return S_NUMERAL; }
">"                                         { return S_MAYOR; } 
"<"                                         { return S_MENOR; }
">="                                        { return S_MAYORIG; }
"<="                                        { return S_MENORIG; }
"<>"                                        { return }
"="                                         { return S_IGUAL; }
","                                         { return S_COMA; }
"for"                                       { return P_FOR; }
"if"                                        { return P_IF; }
"else if"                                   { return P_ELSEIF; }
"else"                                      { return P_ELSE; }
"while"                                     { return P_WHILE; }
"do"                                        { return P_DO; }
"switch"                                    { return P_SWITCH; }
"case"                                      { return P_CASE; }
"brake"                                     { return P_BRAKE; }
"num"                                       { return NUM; }
"%"                                         { return S_PORCIENTO; }
"stdio.h | stdlib.h"                        {return LIBREIRAS; }
{id}    { return ID;}//En caso de encontrar algo del identificador
[ \t\n\r] //Para que espacios en blanco sean ignorados
.   {printf("Error Lexico: %s\n", yytext);} //Para los simbolos no reconocidos error lexico

%%