#include <stdio.h>
#include <string.h>

#include "cuadruplas.h"
#include "backpatch.h"

int main(){

    printf("Creando 2 cuadruplas");
    CUAD *q1 = init_cuad();
    CUAD *q2 = init_cuad();

    char *test = "test";

    q1->arg1 = test;
    q1->arg2 = test;
    q1->op = test;
    q1->res = test;




  return 0;
}