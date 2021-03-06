#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla_simbolos.h"

void append_arg (ARGS *args , ARG *arg) {//Agrega un argumento al final
    if(args==NULL) return;//Caso lista nula
    if(args->head == NULL){//Caso lista vacía
        args->tail = args->head = arg;
        args->num++;
        return;
    }
    //Caso lista con elementos
    args->num++;
    args->tail->next = arg;
    args->tail = arg;
    return;
} 

 //Compara dos lista y devuelve 1 si son iguales , 0 si son diferentes
int compare_args(ARGS *a1 , ARGS *a2) {
    ARG *l1,*l2;
    l1 = a1->head;
    l2 = a2->head;
    if(a1->num != a2->num) return 0;
    while (l1 != NULL){
        if(l1 != l2) return 0;
        l1 = a1->head->next;
        l2 = a2->head->next;
    } 
    return 1;
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
            finish_sym(table->head);
        free(table);
        table = NULL;
    }
    return NULL;
} 

SYMTAB *pop_st( SSTACK *stack ) {// Ejecuta un pop sobre la pila de tablas de simbolos
    SYMTAB *st;
    if(stack==NULL){//Caso pila nula
        printf("pila nula");
        return NULL;
    }
    if(stack->tail == NULL){//Caso pila vacía
        printf("pila vacía");
        return NULL;
    }
    st = stack->top;
    st->next = stack->top;// Linea opcional
    stack->top = stack->top->next;
    st->next = finish_sym_tab(st->next);
    return st;
} 

void push_st ( SSTACK *stack , SYMTAB *table) {
    if(stack ==NULL || table == NULL){
        printf("pila o tabla nulas");
        return;
    }
    if(stack->top == NULL){//Caso primer elemento
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
    arg->arg = dato;
    return arg;
} 

SSTACK *init_sym_tab_stack () {// Reserva memoria para la pila
    SSTACK *sstack = (SSTACK *)malloc(sizeof(SSTACK));
    sstack->tail = NULL;
    sstack->top = NULL;
    return sstack;
} 

SYMTAB *init_sym_tab ( ) { // Reserva memoria para una tabla de simbolos vacia
    SYMTAB *symtab = (SYMTAB *)malloc(sizeof(SYMTAB));
    symtab->num = 0; //Crea la tabla entonces tiene 0 elementos
    symtab->tail = NULL;
    symtab->head = NULL;
    symtab->next = NULL;
    return symtab;
} 

SYM *init_sym () { // Reserva memoria para un simbolo vacio
    SYM *sym = (SYM *)malloc(sizeof(SYM));
    sym->next = NULL;
    return sym;
}

SYM *finish_all_syms(SYM *n){//Elimina todos los simbolos de una tabla
    if(n->next!=NULL){
        finish_all_syms(n->next);
    }
    free (n);
    n = NULL;
}

SYMTAB *finish_sym_tab (SYMTAB *table ) {// Libera memoria para una tabla de simbolos
    if(table->head == NULL) return NULL;
    finish_all_syms(table->head);
    free(table);
    table = NULL;
    return NULL;
}

SYM *finish_all_symtabs(SYMTAB *n){
    if(n->next!=NULL){
        finish_all_syms(n->head);
        if(n->next != NULL)    
            finish_all_symtabs(n->next);
    }
    free (n);
    n = NULL;
}

SSTACK *finish_sym_tab_stack (SSTACK *stack){// Libera la memoria para la pila
    if(stack!=NULL){    
        if(stack->tail!=NULL)
            finish_all_symtabs(stack->top);
        free(stack);
        stack = NULL;
    }
    return NULL;
}  

SYM *finish_sym (SYM *S ) {// libera memoria para un simbolo
    if(S!=NULL){
        free (S);
        S = NULL;
        return NULL;
    }
    return NULL;
} 

ARG *finish_arg (ARG *S ) {// libera memoria para un arg
    if(S!=NULL){
        free (S);
        S = NULL;
        return NULL;
    }
    return NULL;
} 

ARGS *finish_args(ARGS *table){// libera memoria para una lista ARGS
    if(table!=NULL){
        if(table->head!=NULL)
            finish_arg(table->head->next);
        free(table);
        table = NULL;
    }
    return NULL;
} 

void print_sym(SYM *s){
    printf("id= %d  simbolo \n",s->dir);
}

void print_sym_tab(SYMTAB *table ) {// Imprime en pantalla l a tabla de simbolos
    if(table == NULL || table->head==NULL) return;
    for(SYM *i = table->head; i !=NULL; i = i->next ){
        print_sym(i);
    }
}


void print_arg(ARG *s){
    printf("arg= %d  tam = \n",s->arg);
}

void print_arg_tab(ARGS *table){
    if(table == NULL || table->head==NULL) return;
    for(ARG *i = table->head; i !=NULL; i = i->next ){
        print_arg(i);
    }
}

char* strdup_s(const char* cad){
    if(cad == NULL) return NULL;
    char* newstr = malloc(strlen(cad)+1);
    char* p;
    if(newstr == NULL) return NULL;
    p = newstr;
    while(*cad) *p++ = *cad++;
    return newstr;
}

int getDir (SYMTAB *T , char *id ) {
    for(SYM *i = T->head; i!=NULL; i=i->next){
        if(i->id == id) return i->dir;
    }
    return -1;
}

int getTipo (SYMTAB *T , char *id ) {
    for(SYM *i = T->head; i!=NULL; i=i->next){
        if(i->id == id) return i->tipo;
    }
    return -1;
}

int getVar(SYMTAB *T , char *id ) {
    for(SYM *i = T->head; i!=NULL; i=i->next){
        if(i->id == id) return i->var;
    }
    return 'z';
}

ARGS *getArgs(SYMTAB *T , char *id ) {
    if(T==NULL) return NULL;
    for(SYM *i = T->head; i!=NULL; i=i->next){
        if(i->id == id) return i->args;
    }
    return NULL;
}

int getNumArgs (SYMTAB *T , char *id ) {
    for(SYM *i = T->head; i!=NULL; i=i->next){
        if(i->id == id) return i->num;
    }
    return -1;
}