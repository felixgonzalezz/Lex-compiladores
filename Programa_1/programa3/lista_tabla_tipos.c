#include <stdio.h>
#include "tabla_tipos.h"

void append_type(TYPETAB *tt, SYM t){
    TYPE *new_type;

    /* if( (new_type = (SYM *) malloc(sizeof (SYM))) = NULL)
        return -1;
    new_type-> */
}

void clear_type_tab(TYPETAB *tt){

}

SYMTAB pop_st(TSTACK *s){

}

void push_st(TSTACK *s, TYPETAB *tt){

}

TSTACK *init_type_tab_stack(){ // Reserva memoria para la pila  


}

TYPETAB *init_type_tab(){ // Reserva memoria para una tabla de tipos e inserta los tipos nativos

}

TYPE *init_type(){ // Reserva memoria para un tipo

}

void finish_sym_tab_stack(TSTACK *s){ // Libera la memoria para la pila

}

void finish_sym_tab(SYMTAB *st){ // Libera memoria para una tabla de tipos

}

void finish_sym(SYM *S){// libera memoria para un tipo

}

int getTam(TYPETAB *t, int id){ // Retorna el tam de un tipo

}

TB getTipoBase(TYPETAB *t, int id){ // retorna el tipo base

}

char* getNombre(TYPETAB *t, int id){ // retorna el nombre de un tipo tambien lo puede cambiar por un entero

}

void print_tab(SYMTAB *t){

}