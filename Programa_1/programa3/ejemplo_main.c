#include <stdio.h>
#include <stdlib.h>
#include "ejemplo_lista.h"

int main(){
    LISTA *l;
    l = crear_lista();
    insertar_lista(l, 1);
    insertar_lista(l, 2);
    insertar_lista(l, 3);
    insertar_lista(l, 4);
    imprimir_lista(l);
    eliminar_lista(l);
    return 0;
}