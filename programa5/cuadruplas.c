#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cuadruplas.h"


CUAD *init_cuad(char *arg1, char *arg2, char *op, char *res){ // Reserva memoria para una cuadrupla
    CUAD *q = (CUAD *)malloc(sizeof(CUAD));
    q->arg1 = arg1; 
    q->arg2 = arg2;
    q->op = op;
    q->res = res;
    q->next = NULL;
    return q;
}

void *finish_cuad(CUAD *c){ // Libera la memoria de una cuadrupla
    if(c!=NULL){
        free (c);
        c = NULL;
        return NULL;
    }
}

void *finish_all_cuads(CUAD *q){
    if(q == NULL) return NULL;
    if(q->next != NULL)
        finish_all_cuads(q->next);
    free(q);
    return q = NULL;
}

CODE *init_code(){ // Reserva memoria para el codigo
    CODE *c = (CODE *)malloc(sizeof(CODE));
    c->head = c->tail = NULL;
    return c;
}

void *finish_code(CODE *c){ //Libera la memoria de la lista ligada del codigo
    if(c!=NULL){
        if(c->head!=NULL)
            finish_all_cuads(c->head);
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