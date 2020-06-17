#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla_tipos.h"
#include "tabla_simbolos.h"

int main(){

    printf("Creando tipo 1\n");
    TYPE *type1 = init_type();
    strcpy(type1->nombre,"ent");
    type1->tam = 4;
    TB tb;
    tb.is_est = -1;
    tb.tipo.tipo_est = -1;
    type1->tb = tb;

    printf("Creando tipo 2\n");
    TYPE *type2 = init_type();
    strcpy(type2->nombre,"float");
    type2->tam = 4;
    type2->tb = tb;

    printf("Creando tabla de tipos\n");
    TYPETAB *ttable = init_type_tab();

    printf("Agregando tipos a la tabla de tipos\n");
    append_type(ttable, type1);
    append_type(ttable, type2);

    printf("Creando simbolo 1\n");
    SYM *simbolo1 = init_sym();
    strcpy(simbolo1->id, "funcion");
    simbolo1->tipo = type1->id;
    simbolo1->num = 0;

    printf("Creando simbolo 2\n");
    SYM *simbolo2 = init_sym();
    strcpy(simbolo2->id, "variable");
    simbolo2->tipo = type2->id;
    simbolo2->num = 0;

    printf("Creando argumentos\n");
    ARG *ar1 = init_arg(type1->id);
    print_arg(ar1);
    ARG *ar2 = init_arg(type2->id);
    print_arg(ar2);

    printf("Creando listas de argumetnos 2\n");
    ARGS *la1 = init_args();
    ARGS *la2 = init_args();

    printf("Agregando argumentos\n");
    append_arg(la1, ar1);
    append_arg(la1, ar2);
    append_arg(la2, ar2);

    printf("Imprimiendo tabla tipos\n");
    print_type_tab(ttable);

    printf("Imprimiendo tabla argumentos 1\n");
    print_arg_tab(la1);

    printf("Imprimiendo tabla argumentos 2\n");
    print_arg_tab(la2);

    printf("Creando tabla de simbolos\n");
    SYMTAB *stable = init_sym_tab();
    append_sym(stable, simbolo1);
    append_sym(stable, simbolo2);

    printf("Imprimiendo tabla simbolos\n");
    print_sym_tab(stable);

    printf("Creando pilas\n");
    TSTACK *tpila = init_type_tab_stack();
    SSTACK *spila = init_sym_tab_stack();

    printf("Agregando a la pila de tipos\n");
    push_tt(tpila, ttable);

    printf("Agregando a la pila de simbolos\n");
    push_st(spila, stable);

    printf("Pop a la pila de simbolos\n");
    SYMTAB *popst = pop_st(spila);
    print_sym_tab(popst);

    printf("Pop a la pila de tipos\n");
    TYPETAB *poptt = pop_tt(tpila);
    print_type_tab(poptt);

    printf("Finalizando pilas\n");
    popst = finish_sym_tab(popst);
    poptt = finish_type_tab(poptt);
    print_sym_tab(popst);
    print_type_tab(poptt);


    printf("Probando Gets de tipo\n");

    printf("getTam = %d\n",getTam(ttable, type1->id));
    printf("tb.is_est = %d \n",type1->tb.is_est);
//    TB tb1 = getTipoBase(ttable, type1->id);
//    printf("getTipoBase = %d \n", tb1.is_est);
//    sprintf(cadena ,"getNombre = %s\n", getNombre(ttable, type1->id));

    printf("Cadena getNombre = %s\n", getNombre(ttable, type1->id));


    printf("Probando Gets de simbolo\n");
    printf("getDir = %d\n", getDir(stable, "funcion"));
//    printf("getTipo = ")
    printf("getVar = %d\n", getVar(stable, "variable"));
//    printf("getArgs = ");
    printf("getNumArgs = %d \n", getNumArgs(stable, "variable"));

    printf("Termine bien :)\n");
    return 0;
}