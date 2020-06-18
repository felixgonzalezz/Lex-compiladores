#include <stdio.h>
#include "backpatch.h"

INDEX *init_index(){// Reserva memoria para un nodo de indice
    INDEX *i = (INDEX *)malloc(sizeof(INDEX));
    i->next = NULL;
    return i;
}

void *finish_index(INDEX *i){// Libera la memoria de un nodo indice
    if(i != NULL ){
        if(i->indice != NULL) free(i->indice);
        if(i->next != NULL) free(i->next);
        free (i);
        i = NULL;
        return NULL;
    }
}

LINDEX *init_list_index(INDEX *i){//Reserva memoria para la lista de indice se inserta el primero
    LINDEX *l = (LINDEX *)malloc(sizeof(LINDEX));
    l->head = l->tail = NULL;
    return l;
}

void *finish_list_index(LINDEX *l){//Libera la memoria de la lista y de todos los nodos dentro
    if(l!=NULL){
        if(l->tail!=NULL)
            finish_index(l->tail);
        free(l);
        l = NULL;
    }
    return NULL;
}

void append_index(LINDEX *l ,INDEX *i){// Agrega un nodo indice al final de la lista

}

LINDEX *combinar(LINDEX l1, LINDEX l2){//Retorna una lista ligada de la concatenacion de l1 con l2


}

void backpatch(CODE *c, LINDEX l, char *label){

}