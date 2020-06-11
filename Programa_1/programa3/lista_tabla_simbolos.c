#include <stdio.h>
#include <stdlib.h>
#include "tabla_simbolos.h"

void append_arg (ARGS* args , ARG* arg) {//Agrega un argumento al final
    if(args==NULL) return;//Caso lista nula
    if(args->head == NULL){//Caso lista vacía
        args->tail = args->head = arg;
        arg->arg = args->num;
        return;
    }
    //Caso lista con elementos
    args->num++;
    arg->arg = args->num;
    args->tail->next = arg;
    args->tail = arg;
    return;
} 

int compare_args (ARGS *a1 , ARGS *a2) { //Compara dos lista y devuelve 1 si son iguales , 0 si son diferentes

}

void append_sym(SYMTAB *t , SYM *s) {//Agrega al final de la tabla un nuevo simbolo
    if(t==NULL) return;//Caso lista nula
    if(t->head == NULL){//Caso lista vacía
        t->tail = t->head = s;
        s->dir = t->num;
        return;
    }
    //Caso lista con elementos
    t->num++;
    s->dir = t->num;
    t->tail->next = s;
    t->tail = s;
    return;
} 

SYMTAB *clear_sym_tab (SYMTAB *table ) {// Deja vacia la tabla
    if(table!=NULL){
        if(table->head!=NULL)
            finish_type(table->head);
        free(table);
        table = NULL;
    }
    //return NULL; duda si solo lo limpia
} 

SYMTAB *pop_st( SSTACK *stack ) {// Ejecuta un pop sobre la pila de tablas de simbolos
    SYMTAB *st;
    if(stack==NULL){//Caso lista nula
        printf("pila nula");
        return NULL;
    }
    if(stack->tail == NULL){//Caso lista vacía
        printf("pila vacía");
        return NULL;
    }
    st = stack->top;
    st->next = NULL;
    stack->top = stack->top->next;
    return st;
} 

void push_st ( SSTACK *stack , SYMTAB *table) {
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
} // Ingresa una tabla a la pila de tablas de simbolos

ARGS *init_args ( ) {// Retorna el apunador a un tipo ARGS
    ARGS *args = (ARGS *)malloc(sizeof(ARGS));
    args->num = 0; //Crea la tabla entonces tiene 0 elementos
    args->tail = NULL;
    args->head = NULL;
    return args;
} 

ARG *init_arg ( int dato) {// Reserva memoria para un tipo ARG y retorna el apuntador
    ARG *arg = (ARG *)malloc(sizeof(ARG));
    arg->next = NULL;
    return arg;
} 

SSTACK *init_sym_tab_stack ( ) {// Reserva memoria para la pila
    SSTACK *sstack = (SSTACK *)malloc(sizeof(SSTACK));
    sstack->tail = NULL;
    sstack->top = NULL;
    return sstack;
} 

SYMTAB *init_symtab ( ) { // Reserva memoria para una tabla de simbolos vacia
    SYMTAB *symtab = (SYMTAB *)malloc(sizeof(SYMTAB));
    symtab->num = 0; //Crea la tabla entonces tiene 0 elementos
    symtab->tail = NULL;
    symtab->head = NULL;
    symtab->next = NULL;
    return symtab;
} 

SYM *init_sym ( ) { // Reserva memoria para un simbolo vacio
    SYM *sym = (SYM *)malloc(sizeof(SYM));
    sym->next = NULL;
    return sym;
}

SSTACK *finish_sym_tab_stack (SSTACK *stack){// Libera la memoria para la pila
    if(stack!=NULL){
        if(stack->tail!=NULL)
            finish_type_tab(stack->tail);
        free(stack);
        stack = NULL;
    }
    return NULL;
}  

SYMTAB *finish_sym_tab (SYMTAB *table ) {// Libera memoria para una tabla de simbolos
    if(table!=NULL){
        if(table->head!=NULL)
            finish_type(table->head);
        free(table);
        table = NULL;
    }
    return NULL;
} 

SYM *finish_sym (SYM *S ) {// libera memoria para un simbolo
    if(S->next!=NULL)
        finish_Se(S->next);
    free (S);
    S = NULL;
    return NULL;
} 

ARG *finish_arg (ARG *S ) {// libera memoria para un arg
    if(S->next!=NULL)
        finish_Se(S->next);
    free (S);
    S = NULL;
    return NULL;
} 

ARG *finish_args (ARGS *table) {// libera memoria para una lista ARGS
    if(table!=NULL){
        if(table->head!=NULL)
            finish_type(table->head);
        free(table);
        table = NULL;
    }
    return NULL;
} 

void print_sym(SYM *s){
    printf("id= %d  tam = \n",s->dir);
}

void print_tab (SYMTAB *table ) {// Imprime en pantalla l a tabla de simbolos
    if(table == NULL || table->head==NULL) return;
    for(TYPE *i = table->head; i !=NULL; i = i->next ){
        print_sym(i);
    }
}

int getDir (SYMTAB *T , char *id ) {

}

int getTipo (SYMTAB *T , char *id ) {

}

int getVar (SYMTAB *T , char *id ) {

}

ARGS* getArgs(SYMTAB *T , char *id ) {

}

int getNumArgs (SYMTAB *T , char *id ) {

}