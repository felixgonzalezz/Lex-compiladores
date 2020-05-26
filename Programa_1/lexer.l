/* Creación Felix G. 23/05/20 */
/* Definición de símbolos no terminales, uso de bibliotecas*/
/*y variables especiales de flex*/

%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
%}

/*Indicar que solo lea un fichero de entrada*/
%option noyywrap
/*contador de lineas*/
%option yylineno

/*Identificadores*/

letra [a-zA-Z] 
caracter (\'{letra}\')
digito [0-9]
digitos {digito}+
exp [eE][+-]?{digitos}
doble (("."{digitos}|{digitos}"."{digitos}){exp}|{digitos}{exp})(lf|lF)
flotante (("."{digitos}|{digitos}"."{digitos}){exp}|{digitos}{exp})[fF]
num  (([1-9]{digito}+)|[0])
id  ({letra}|_)({letra}|digito|_)*
cadena \"[^"]*\"

/*Expresiones regulares*/
/* Modificación Simón R. 24/05/20*/
/*Se separan los símbolos terminales para que retornen token individuales.*/
/* Modificación Simón R. 25/05/20*/
/*Agregué expresiones para flotantes y dobles.*/
%%
"estructura"        { return ESTRUCTURA; }
"inicio"            { return INICIO; }
"fin"               { return FIN; }
"+"                 { return MAS; }
"-"                 { return MENOS; } 
"*"                 { return MUL; }
"/"                 { return DIV; }
"%"                 { return MODULO; }
"{"                 { return A_LLAVE; }
"}"                 { return C_LLAVE; }
"("                 { return A_PAR; }
")"                 { return C_PAR; }
"["                 { return A_CORCHETE; }
"]"                 { return C_CORCHETE; }
";"                 { return PYC; }
"ent"               { return ENT; }
"real"              { return REAL; }
"dreal"             { return DREAL; }
"car"               { return CAR; }
"sin"               { return SIN; }
">"                 { return S_MAYOR; } 
"<"                 { return S_MENOR; }
">="                { return S_MAYORIG; }
"<="                { return S_MENORIG; }
"<>"                { return DIFERENTE; }
"="                 { return IGUAL; }
","                 { return COMA; }
"def"               { return DEF;}
"."                 { return PUNTO; }
{doble}				{ return NUM; }
{flotante}			{ return NUM; }
{num}               { return NUM; }
"si"                { return SI; }
"entonces"          { return ENTONCES; }
"sino"              { return SINO; }
"mientras"          { return MIENTRAS; }
"hacer"             { return HACER; }
"segun"             { return SEGUN; }
"escribir"          { return ESCRIBIR; }
"leer"              { return LEER; }
"devolver"          { return DEVOLVER; }
":="                { return ASIG; }
"terminar"          { return TERMINAR; }
"caso"              { return CASO; }
"pred"              { return PRED; }
":"                 { return D_PUNTOS; }
"o"                 { return OR; }
"y"                 { return AND; }
"no"                { return NOT; }
"verdadero"         { return VERDADERO; }
"falso"             { return FALSO; }
{caracter}			{ return CARACTER; }
{cadena}			{ return CADENA; }
{id}                { return ID; } /*En caso de encontrar algo del identificador*/ 
[ \t\n\r]+          {}			/*Para que espacios en blanco sean ignorados*/
.                   {  {printf("Error Lexico: %s\n En línea %d", yytext, yylineno);} } /*Para los simbolos no reconocidos error lexico*/
%%
