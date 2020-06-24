#include <stdio.h>
#include <string.h>

#include "cuadruplas.h"
#include "backpatch.h"

int main(){

    printf("Creando 2 cuadruplas\n");

    char *test1 = "aarg1";
    char *test2 = "aarg2";
    char *test3 = "op1";
    char *test4 = "res1";
    CUAD *q1 = init_cuad(test1, test2, test3, test4);   

    char *testa = "arg1";
    char *testb = "arg2";
    char *testc = "op2";
    char *testd = "res2";
    CUAD *q2 = init_cuad(testa, testb, testc, testd);

    CODE *c = init_code();

    append_cuad(c, q1);
    append_cuad(c, q2);

    char *etiqueta = "etiqueta";

    char *indice1 = "indice";
    char *indice2 = "indice2";

    char *indicea = "indicea";
    char *indiceb = "indiceb";

    INDEX *i1 = init_index(indice1);
    INDEX *i2 = init_index(indice2);

    INDEX *ia = init_index(indicea);
    INDEX *ib = init_index(indiceb);


    LINDEX *l1 = init_list_index(i1);
    LINDEX *l2 = init_list_index(ia);

    append_index(l1, i2);
    append_index(l2, ib);

    l1 = combinar(l1, l2);

    backpatch(c, l1, etiqueta);

    finish_index(i2);
    finish_list_index(l2);

    finish_cuad(q2);
    finish_code(c);

  return 0;
}