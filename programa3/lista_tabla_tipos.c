#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    TYPETAB *tt_r;
    if(stack==NULL){//Caso lista nula
        printf("pila nula");
        return NULL;
    }
    if(stack->tail == NULL){//Caso lista vacía
        printf("pila vacía");
        return NULL;
    }
    tt_r = stack->top;
    tt_r->next = NULL;
    stack->top = stack->top->next;
    return tt_r;
}

void push_tt(TSTACK *stack, TYPETAB *table){
    if(stack ==NULL || table == NULL){
        printf("pila o tabla nulas");
        return;
    }
    if(stack->top == NULL){
        stack->top = stack->tail = table;
    }
    else{
        table->next = stack->top;
        stack->top = table;
    }
}

TSTACK *init_type_tab_stack(){ // Reserva memoria para la pila  
    TSTACK *tstack = (TSTACK *)malloc(sizeof(TSTACK));
    tstack->tail = NULL;
    tstack->top = NULL;
    return tstack;
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

TSTACK *finish_type_tab_stack(TSTACK *stack){ // Libera la memoria para la pila
    if(stack!=NULL){
        if(stack->tail!=NULL)
            finish_type_tab(stack->tail);
        free(stack);
        stack = NULL;
    }
    return NULL;
}

TYPETAB *finish_type_tab(TYPETAB *table){ // Libera memoria para una tabla de tipos
    if(table!=NULL){
        if(table->head!=NULL)
            finish_type(table->head);
        free(table);
        table = NULL;
    }
    return NULL;
}

TYPE *finish_type(TYPE *typ){// libera memoria para un tipo
    if(typ->next!=NULL)
        finish_type(typ->next);
    free (typ);
    typ = NULL;
    return NULL;
}

int getTam(TYPETAB *table, int id){ // Retorna el tam de un tipo
    if(table->num < id) return -1;
    for(TYPE *i = table->head;i !=NULL; i = i->next ){
        if(i->id == id) return i->tam;
   }
   return -1;
}

TB getTipoBase(TYPETAB *table, int id){ // retorna el tipo base
    TB tb;
    if(table->num < id) printf("Error id fuera de la tabla");
    for(TYPE *i = table->head;i !=NULL; i = i->next ){
        if(i->id == id) return i->tb;  
    }
    tb.is_est =-2;
    return tb;
}

char* strdup_t(const char* cad){
    if(cad == NULL) return NULL;
    char* newstr = malloc(strlen(cad)+1);
    char* p;
    if(newstr == NULL) return NULL;
    p = newstr;
    while(*cad) *p++ = *cad++;
    return newstr;
}

// retorna el nombre de un tipo tambien lo puede cambiar por un entero
char *getNombre(TYPETAB *table, int id){
    if(table->num < id) return NULL;
    for(TYPE *i = table->head; i !=NULL; i = i->next ){
        if(i->id == id) return strdup(i->nombre);
    }
    return NULL;
}


void print_type(TYPE *typ){
    printf("id= %d  tam = \n",typ->id);
}


void print_type_tab(TYPETAB *table){
    if(table == NULL || table->head==NULL) return;
    for(TYPE *i = table->head; i !=NULL; i = i->next ){
        print_type(i);
    }
}



