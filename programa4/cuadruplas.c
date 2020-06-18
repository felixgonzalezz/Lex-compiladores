#include <stdio.h>
#include "cuadruplas.h"

CUAD *init_cuad(){ // Reserva memoria para una cuadrupla
    CUAD *q = (CUAD *)malloc(sizeof(CUAD));
    q->next = NULL;
    return q;
}

void *finish_cuad(CUAD *c){ // Libera la memoria de una cuadrupla
    if(c!=NULL){
        free(c->arg1);
        free(c->arg2);
        free(c->next);
        free(c->op);
        free(c->res);
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

void *append_cuad(CODE* c, CUAD *q){
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