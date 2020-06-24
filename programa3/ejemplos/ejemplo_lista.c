
#include <stdio.h>
#include <stdlib.h>
#include "ejemplo_lista.h"


NODO *crear_nodo(int info){
    NODO *n = (NODO *)malloc(sizeof(NODO));
    n->info = info;
    n->next = NULL;
    return n;
}

void eliminar_nodo(NODO *n){
    if(n->next!=NULL){
        eliminar_nodo(n->next);
    }
    free (n);
    n = NULL;
}
void imprimir_nodo(NODO *n){
    printf("%d\n",n->info);
}

LISTA *crear_lista(){
    LISTA *l = (LISTA*)malloc(sizeof(LISTA));
    l->head = NULL;
    l->tail = NULL;
    return l;
}

void eliminar_lista(LISTA *l){
    if(l!=NULL){
        if(l->head!=NULL){
            eliminar_nodo(l->head);
        }
        free(l);
        l = NULL;
    }
}

void insertar_lista(LISTA *l, int i){
    if (l==NULL) return;
    if (l->head == NULL){
        NODO *nuevo = crear_nodo(i);
        l->tail = l->head = nuevo;
        return;
    }
    NODO *nuevo = crear_nodo(i);
    l->tail->next = nuevo;
    l->tail = nuevo;

}

void imprimir_lista(LISTA *l){
    for(NODO *i = l->head; i !=NULL; i = i->next ){
        imprimir_nodo(i);
    }
}