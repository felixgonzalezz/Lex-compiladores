#include <stdio.h>
#include "tabla_tipos.h"

void append_type(TYPETAB *tt, TYPE t){
    
    TYPETAB *new_symbol, *temp_symbol;
    TYPE new_symbol = (TYPE *) malloc (sizeof (TYPE));

    new_symbol. = t.args;
    new_symbol->dir = t.dir;
    new_symbol.id = t.id;
    new_symbol->tipo = t.tipo;
    new_symbol->var = t.var;
    new_symbol->num = t.num;

    new_symbol->next = NULL;

    if(tt = NULL)
        return new_symbol;
    temp_symbol = tt;
    while (temp_symbol->next != NULL)
        tt = tt->next;

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

void finish_sym_tab_stack(SSTACK *s){ // Libera la memoria para la pila

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