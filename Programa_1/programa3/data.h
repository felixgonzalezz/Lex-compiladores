#ifndef DATOS_H
#define DATOS_H

typedef struct arg ARG;

struct arg{
    int arg ;
    ARG next ;
};

typedef struct args ARGS ;

struct args{
    ARG ∗head ;
    ARG ∗tail;
    int num; // numero de elementos en la lista
} ;

typedef struct sym SYM ;

struct sym{
    int dir ; // direccion para l a variable
    int tipo ; // tipo como indice a la tabla de tipos
    char id [33] ; // identificador
    ARGS ∗args ; // Lista de argumentos
    int num; // numero de argumentos
    int var ; // t i p o de variable
    SYM ∗next ; // apuntador al siguiente simbolo
};

typedef struct sym_tab SYMTAB ;
struct sym_tab{
    SYM ∗head ;
    SYM ∗tail ;
    int num; //Numero de elementos en l a tabla
    SYMTAB ∗next ; // apuntador a la tabla siguiente
};

typedef struct sym stack{
    SYMTAB ∗top ;
    SYMTAB ∗tail ;
}SSTACK ;

typedef struct tipobase{
    int is_est ; // 1 : si es estructura 0 : si es tipo simple −1: s i no tiene tipo base
    union{
        SYMTAB ∗est;
        int tipo ;
    } tipo ;
} TB ;


typedef struct type TYP ;
    struct type{
    int id ;
    char nombre[12] ;
    TB tb ;
    int tam ;
    TYP ∗next ; // apuntador al siguiente tipo en la tabla de tipos
} ;

typedef struct type tab TYPTAB ;
struct type tab{
    TYP ∗head ;
    TYP ∗ tail ;
    int num; // Contador de elementos en l a tabla
    TYPTAB ∗next ; // apuntador a l a tabla siguiente
} ;

typedef struct typ stack {
    TYPTAB ∗top ;
    TYPTAB ∗tail ;
} TSTACK ;

#endif