#ifndef LISTA_H
#define LISTA_H

typedef struct nodo NODO;

struct nodo{
    int info;
    NODO* next;
};

typedef struct lista
{
    NODO *head;
    NODO *tail;
} LISTA;

NODO *crear_nodo(int info);
void eliminar_nodo(NODO *n);
void imprimir_nodo(NODO *n);

LISTA *crear_lista();

void eliminar_lista(LISTA *l);
void imprimir_lista(LISTA *l);
void insertar_lista(LISTA *l, int i);

#endif