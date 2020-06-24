#include <stdio.h>
#include <stdlib.h>
#include "cuadruplas.h"
#include "backpatch.h"

INDEX *init_index(char *indice){// Reserva memoria para un nodo de indice
    INDEX *i = (INDEX *)malloc(sizeof(INDEX));
    i->indice = indice;
    i->next = NULL;
    return i;
}

void *finish_index(INDEX *i){// Libera la memoria de un nodo indice
    if(i != NULL ){
        free (i);
        i = NULL;
        return NULL;
    }
}

void *finish_all_indexes(INDEX *i){
    if(i == NULL) return NULL;
    if(i->next !=NULL)
        finish_all_indexes(i->next);
    free(i);
    i = NULL;
    return NULL;
}

LINDEX *init_list_index(INDEX *i){//Reserva memoria para la lista de indice se inserta el primero
    LINDEX *l = (LINDEX *)malloc(sizeof(LINDEX));
    l->head = l->tail = NULL;
    return l;
}

void *finish_list_index(LINDEX *l){//Libera la memoria de la lista y de todos los nodos dentro
    if(l!=NULL){
        if(l->head!=NULL)
            finish_all_indexes(l->head);
        free(l);
        l = NULL;
    }
    return NULL;
}

void append_index(LINDEX *l ,INDEX *i){// Agrega un nodo indice al final de la lista
    if(l==NULL) return;//Caso lista nula
    if(l->head == NULL){//Caso lista vacía
        l->tail = l->head = i;
        return;
    }
    //Caso lista con elementos
    l->tail->next = i;
    l->tail = i;
    return;
}

//Retorna una lista ligada de la concatenacion de l1 con l2
LINDEX *combinar(LINDEX *l1, LINDEX *l2){
    l1->tail->next = l2->head;
    l1->tail = l2->tail;
    return l1;
}

void backpatch(CODE *c, LINDEX *l, char *label){
    printf("No sabemos :(\n");
}