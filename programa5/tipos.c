#include <stdio.h>
#include <string.h>

#include "cuadruplas.h"
#include "tipos.h"


char *ampliar( char *dir, int t1, int t2, CODE *c ){
/*     if(t1 < t2){
      CUAD *q1 = init_cuad();
          q1->arg1 = 
          q1->arg2 = 


    } */
}


char *reducir(int t1, int t2) {

}

int max(int t1, int t2){
    if(t1 > t2) return t1;
    if(t1 < t2) return t2;
    if(t1 == t2) return t1;
  return -1;
}

int min(int t1, int t2){
    if(t1 > t2) return t2;
    if(t1 < t2) return t1;
    if(t1 == t2) return t1;
  return -1;
}