#include <stdio.h>
#include "tabla_tipos.h"

void append_type(TYPETAB *tt, TYPE *t){
    if(tt==NULL) return;
    if(tt->head == NULL){
        tt->tail = tt->head = t;
        tt->num++;
        t->id = tt->num;
    }


}

void clear_type_tab(TYPETAB *tt){
    if(tt->next!=NULL)
        clear_type_tab(tt->next);
    free(tt);
    tt=NULL;
}

SYMTAB pop_st(TSTACK *s){

}

void push_st(TSTACK *s, TYPETAB *tt){

}

TSTACK *init_type_tab_stack(){ // Reserva memoria para la pila  
    TSTACK *tsstack = (TSTACK *)malloc(sizeof(TSTACK));
    tsstack->tail = tsstack;
    tsstack->top = NULL;
    return tsstack;
}

TYPETAB *init_type_tab(){ // Reserva memoria para una tabla de tipos e inserta los tipos nativos
    TYPETAB *typetab = (TYPETAB *)malloc(sizeof(TYPETAB));
    typetab->num = 0; //Crea la tabla entonces tiene 0 elementos
    typetab->next = NULL;
    return typetab;
}

TYPE *init_type(){ // Reserva memoria para un tipo
    TYPE *type = (TYPE *)malloc(sizeof(TYPE));

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

void print_tab(TYPETAB *t){

}