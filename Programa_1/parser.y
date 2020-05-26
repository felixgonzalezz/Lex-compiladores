%{
/*Sección de declaraciones*/
#include <stdio.h>
extern int yylex();
void yyerror(char *s);
%}

/* No terminales */
%token COMA
%token VERDADERO
%token FALSO
%token ID
%token FLOTANTE
%token DOBLE
%token CARACTER
%token CADENA
%token ENT
%token REAL
%token DREAL
%token CAR
%token SIN
%token ESTRUCTURA
%token INICIO
%token FIN
%token PYC 
%token DEF
%token NUM
%token SI
%token ENTONCES
%token SINO
%token MIENTRAS
%token HACER
%token SEGUN
%token ESCRIBIR
%token LEER
%token DEVOLVER
%token TERMINAR
%token CASO
%token PRED
%token D_PUNTOS
/* Asignaciones */
%right ASIG
/* Condicional */
/* Or lógico*/
%left OR
/* And lógico*/ 
%left AND
/*Or bit a bit*/
/*Or exlisivo*/
/*And bit a bit*/
/*Comparaciones de igualdad*/
%left DIFERENTE IGUAL
/*Comparaciones de superioridad e inferioridad*/
%left S_MAYOR S_MAYORIG S_MENOR S_MENORIG
/*Desplazamientos */
/*Suma y resta*/
%left MAS MENOS
/* Producto división módulo */
%left MUL  DIV  MODULO
/* Unarios */
%right NOT
/* Agrupación */
%nonassoc A_LLAVE C_LLAVE A_PAR C_PAR A_CORCHETE C_CORCHETE PUNTO
%start programa


%%
/*Sección del esquema de traducción, usa BNF simplificada*/

programa : declaraciones funciones ;

declaraciones : tipo lista_var PYC declaraciones
        | tipo_registro lista_var PYC declaraciones | ;

tipo_registro : ESTRUCTURA INICIO  declaraciones FIN ;

tipo : base tipo_arreglo ;

base : ENT | REAL | DREAL | CAR | SIN ;

tipo_arreglo : A_CORCHETE NUM C_CORCHETE tipo_arreglo | ;

lista_var : lista_var COMA ID
        | ID ;

funciones : DEF tipo ID A_PAR argumentos C_PAR INICIO declaraciones sentencias FIN funciones | ;

argumentos : lista_arg | SIN ;

lista_arg : lista_arg COMA arg
        | arg ;

arg : tipo_arg ID ;

tipo_arg : base param_arr ;

param_arr : A_CORCHETE C_CORCHETE param_arr | ;

sentencias : sentencias sentencia | sentencia ;

sentencia : SI e_bool ENTONCES sentencia FIN
        | SI e_bool ENTONCES sentencia SINO sentencia FIN
        | MIENTRAS e_bool HACER sentencia FIN 
        | HACER sentencia MIENTRAS e_bool PYC 
        | SEGUN A_PAR variable C_PAR HACER casos predeterminado FIN
        | variable ASIG expresion PYC
        | ESCRIBIR expresion PYC
        | LEER variable PYC
        | DEVOLVER PYC
        | DEVOLVER expresion PYC
        | TERMINAR PYC
        | INICIO sentencias FIN ;

casos : CASO NUM D_PUNTOS sentencia casos
        | CASO NUM D_PUNTOS sentencia ;

predeterminado : PRED D_PUNTOS sentencia | ;

e_bool : e_bool OR e_bool 
        | e_bool AND e_bool
        | NOT e_bool
        | relacional
        | VERDADERO
        | FALSO ;

relacional : relacional S_MAYOR relacional
        | relacional S_MENOR relacional
        | relacional S_MENORIG relacional
        | relacional S_MAYORIG relacional
        | relacional DIFERENTE relacional
        | relacional IGUAL relacional
        | expresion ;

expresion : expresion MAS expresion
        | expresion MENOS expresion
        | expresion MUL expresion
        | expresion DIV expresion
        | expresion MODULO expresion
        | A_PAR expresion C_PAR
        | variable
        | NUM
        | CADENA
        | CARACTER ;

variable : ID variable_comp ;

variable_comp : dato_est_sim
        | arreglo
        | A_PAR parametros C_PAR ;

dato_est_sim : dato_est_sim PUNTO ID | ;

arreglo : A_CORCHETE expresion C_CORCHETE
        | arreglo A_CORCHETE expresion C_CORCHETE ;

parametros : lista_param | ;

lista_param : lista_param COMA expresion 
        | expresion ;

%%
/*Sección de código de usuario*/


void yyerror (char *s){
    printf("%s\n",s);
}