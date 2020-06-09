#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla_tipos.h"

int main(){
    printf("111111111111111111  ");
    TYPE *type = init_type();
    strcpy(type->nombre,"ent");
    type->tam = 20;
    TB tb;
    tb.is_est = 0;
    tb.tipo.tipo_est = -1;
    type->tb = tb;
    printf("111111111111111111  ");
    TYPETAB *table = init_type_tab();
    append_type(table, type);
    print_tab(table);
    getTam(table, 0);
    getTipoBase(table, 0);
    getNombre(table, 0);
    printf("111111111111111111  ");
    TSTACK *stack= init_type_tab_stack();
    push_tt(stack, table);
    printf("111111111111111111  ");
    TYPETAB *table2 = init_type_tab();
    table2 = pop_tt(stack);
    clear_type_tab(table);
    print_tab(table2);
    table2=finish_type_tab(table2);
    print_tab(table2);
    finish_type_tab_stack(stack);
    stack = NULL;
    finish_type(type);
    return 0;
}