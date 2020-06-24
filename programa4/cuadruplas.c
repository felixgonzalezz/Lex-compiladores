#include <stdio.h>
#include <stdlib.h>
#include "cuadruplas.h"

CUAD *init_cuad(){ // Reserva memoria para una cuadrupla
    CUAD *q = (CUAD *)malloc(sizeof(CUAD));
    q->arg1 = NULL;
    q->arg2 = NULL;
    q->op = NULL;
    q->res = NULL;
    q->next = NULL;
    return q;
}

void *finish_cuad(CUAD *c){ // Libera la memoria de una cuadrupla
    if(c!=NULL){
        if(c->arg1 != NULL) free(c->arg1);
        if(c->arg2 != NULL) free(c->arg2);
        if(c->next != NULL) free(c->next);
        if(c->op != NULL) free(c->op);
        if(c->res != NULL) free(c->res);
        free (c);
        c = NULL;
        return NULL;
    }
}

CODE *init_code(){ // Reserva memoria para el codigo
    CODE *c = (CODE *)malloc(sizeof(CODE));
    c->head = c->tail = NULL;
    return c;
}

void *finish_code(CODE *c){ //Libera la memoria de la lista ligada del codigo
    if(c!=NULL){
        if(c->head!=NULL)
            finish_cuad(c->head);
        free(c);
        c = NULL;
    }
    return NULL;
}

void append_cuad(CODE* c, CUAD *q){
    if(c==NULL) return;//Caso lista nula
    if(c->head == NULL){//Caso lista vacía
        c->tail = c->head = q;
        return;
    }
    //Caso lista con elementos
    c->tail->next = q;
    c->tail = q;
    return;
}