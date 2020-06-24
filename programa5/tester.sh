#! /bin/bash

flex lexer.l
byacc -d parser.y
gcc lex.yy.c y.tab.c main.c -o main

./main prueba


