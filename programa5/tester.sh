#! /bin/bash

flex lexer1.l
byacc -d parser1.y
gcc lex.yy.c y.tab.c backpatch.c cuadruplas.c lista_tabla_simbolos.c lista_tabla_tipos.c tipos.c main.c -o main

./main prueba


