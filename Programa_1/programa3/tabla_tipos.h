#ifndef TYPETAB_H
#define TYPETAB_H
#include "data.h"

void append_type(TYPETAB *tt, TYPE *t); // Agrega al final de la tabla un nuevo tipo
void clear_type_tab(TYPETAB *tt ); // Deja vacia la tabla

TYPETAB pop_tt(TSTACK *s); // Ejecuta un pop sobre la pila de tablas de tipos
void push_tt(TSTACK *s, TYPETAB *tt); // Ingresa una tabla a la pila de tablas de tipos

TSTACK *init_type_tab_stack(); // Reserva memoria para la pila  
TYPETAB *init_type_tab(); // Reserva memoria para una tabla de tipos e inserta los tipos nativos
TYPE *init_type(); // Reserva memoria para un tipo

void finish_type_tab_stack(TSTACK *s); // Libera la memoria para la pila
void finish_type_tab(TYPETAB *st); // Libera memoria para una tabla de tipos
void finish_type(TYPE *S); // libera memoria para un tipo

int getTam(TYPETAB *t, int id); // Retorna el tam de un tipo
TB getTipoBase(TYPETAB *t, int id); // retorna el tipo base
char* getNombre(TYPETAB *t, int id); // retorna el nombre de un tipo tambien lo puede cambiar por un entero
void print_tab(TYPETAB *t); // Imprime en pantalla la tabla de tipos

#endif