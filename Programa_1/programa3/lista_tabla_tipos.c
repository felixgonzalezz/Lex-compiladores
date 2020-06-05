#include <stdio.h>
#include <stdlib.h>
#include "tabla_tipos.h"

void append_type(TYPETAB *tt, TYPE *t){
    if(tt==NULL) return;//Caso lista nula
    if(tt->head == NULL){//Caso lista vacía
        tt->tail = tt->head = t;
        t->id = tt->num;
        return;
    }
    //Caso lista con elementos

    tt->num++;
    t->id = tt->num;
    tt->tail->next = t;
    tt->tail = t;
    return;
}

void clear_type_tab(TYPETAB *tt){
    if(tt!=NULL){
        if(tt->head!=NULL)
            finish_type(tt->head);
        free(tt);
        tt=NULL;
    }
}

TYPETAB *pop_tt(TSTACK *stack){
    TYPETAB *tt_r = init_type_tab();
    TYPETAB *tt_n = init_type_tab();
    if(stack==NULL){//Caso lista nula
        printf("pila nula");
        return tt_r;
    }
    if(stack->tail == NULL){//Caso lista vacía
        printf("pila vacía");
        return tt_n;
    }
    tt_n = stack->top;
    stack->top = tt_n->next;
    tt_n = tt_n;
    free(tt_n->next);
    return tt_r;
}

void push_tt(TSTACK *stack, TYPETAB *table){
    if(stack ==NULL || table == NULL){
        printf("pila o tabla nulas");
        return;
    }
    TYPETAB *tt_n = init_type_tab();
    tt_n = table;
    stack->top->next = tt_n;
    stack->top = tt_n;/////////////////////////////
}

TSTACK *init_type_tab_stack(){ // Reserva memoria para la pila  
    TSTACK *tsstack = (TSTACK *)malloc(sizeof(TSTACK));
    tsstack->tail = NULL;
    tsstack->top = NULL;
    return tsstack;
}

TYPETAB *init_type_tab(){ // Reserva memoria para una tabla de tipos e inserta los tipos nativos
    TYPETAB *typetab = (TYPETAB *)malloc(sizeof(TYPETAB));
    typetab->num = 0; //Crea la tabla entonces tiene 0 elementos
    typetab->tail = NULL;
    typetab->head = NULL;
    typetab->next = NULL;
    return typetab;
}

TYPE *init_type(){ // Reserva memoria para un tipo
    TYPE *type = (TYPE *)malloc(sizeof(TYPE));
    type->next = NULL;
    return type;
}

void finish_type_tab_stack(TSTACK *stack){ // Libera la memoria para la pila
    if(stack!=NULL){
        if(stack->tail!=NULL)
            finish_type_tab(stack->tail);
        free(stack);
        stack = NULL;
    }
}

void finish_type_tab(TYPETAB *table){ // Libera memoria para una tabla de tipos
    if(table!=NULL){
        if(table->head!=NULL)
            finish_type(table->head);
        free(table);
        table = NULL;
    }
}

void finish_type(TYPE *typ){// libera memoria para un tipo
    if(typ->next!=NULL)
        finish_type(typ->next);
    free (typ);
    typ = NULL;
}

int getTam(TYPETAB *table, int id){ // Retorna el tam de un tipo
    TYPE *tt_n = init_type();
    if(table->num < id) return -1;
    for(TYPE *i = table->head; i->id == id; i = i->next ){
        if(i->id == id)
            tt_n = i;
    }
    return tt_n->tam;
}

TB getTipoBase(TYPETAB *table, int id){ // retorna el tipo base
   TYPE *tt_n = init_type();
    if(table->num < id) printf("Error id fuera de la tabla");
    for(TYPE *i = table->head; i->id == id; i = i->next ){
        if(i->id == id)
            tt_n = i;
    }
    return tt_n->tb;
}

char* getNombre(TYPETAB *table, int id){ // retorna el nombre de un tipo tambien lo puede cambiar por un entero
    TYPE *tt_n = init_type();
    if(table->num < id) printf("Error id fuera de la tabla");
    for(TYPE *i = table->head; i->id == id; i = i->next ){
        if(i->id == id)
            tt_n = i;
    }
    return tt_n->nombre;
    
}

void print_tab(TYPETAB *table){
    for(TYPE *i = table->head; i !=NULL; i = i->next ){
        printf("%d->%d",i->id,i->tam);
    }
}


