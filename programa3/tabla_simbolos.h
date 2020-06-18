#ifndef SYMTAB_H
#define SYMTAB_H
#include <stdbool.h>
#include "data.h"

void append_arg (ARGS *args , ARG *arg) ; //Agrega un argumento al final
int compare_args (ARGS *a1 , ARGS *a2) ; //Compara dos lista y devuelve 1 si son iguales , 0 si son diferentes
void append_sym(SYMTAB *t , SYM *s) ; //Agrega al final de la tabla un nuevo simbolo
SYMTAB *clear_sym_tab (SYMTAB *t ) ; // Deja vacia la tabla

SYMTAB *pop_st ( SSTACK *s ) ; // Ejecuta un pop sobre la pila de tablas de simbolos
void push_st ( SSTACK *s , SYMTAB *st) ; // Ingresa una tabla a la pila de tablas de simbolos

ARGS *init_args ( ) ; // Retorna el apunador a un tipo ARGS
ARG *init_arg ( int dato) ; // Reserva memoria para un tipo ARG y retorna el apuntador
SSTACK *init_sym_tab_stack ( ) ; // Reserva memoria para la pila
SYMTAB *init_sym_tab(); // Reserva memoria para una tabla de simbolos vacia
SYM *init_sym ( ) ; // Reserva memoria para un simbolo vacio

SSTACK *finish_sym_tab_stack ( SSTACK *s ) ;  // Libera la memoria para la pila
SYMTAB *finish_sym_tab (SYMTAB *st ) ; // Libera memoria para una tabla de simbolos
SYM *finish_sym (SYM *S ) ; // libera memoria para un simbolo
ARG *finish_arg (ARG *S ) ; // libera memoria para un arg
ARGS *finish_args (ARGS *S ) ; // libera memoria para una lista ARGS

void print_sym_tab(SYMTAB *t ) ; // Imprime en pantalla l a tabla de simbolos
void print_arg_tab(ARGS *A);
void print_arg(ARG *s);

int getDir (SYMTAB *T , char *id ) ;
int getTipo (SYMTAB *T , char *id ) ;
int getVar (SYMTAB *T , char *id ) ;
ARGS* getArgs(SYMTAB *T , char *id ) ;
int getNumArgs (SYMTAB *T , char *id ) ;

# endif