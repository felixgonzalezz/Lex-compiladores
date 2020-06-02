#ifndef DATA_H
#define DATA_H

typedef struct arg ARG;

struct arg{
    int arg;
    ARG *next;
};
/**/
typedef struct args ARGS;

struct args{
    ARG ∗head;
    ARG ∗tail;
    int num; // numero de elementos en la lista
} ;

typedef struct sym SYM;

struct sym{
    int dir; // direccion para la variable
    int tipo; // tipo como indice a la tabla de tipos
    char id [33]; // identificador
    ARGS ∗args; // Lista de argumentos
    int num; // numero de argumentos
    int var; // tipo de variable
    SYM ∗next; // apuntador al siguiente simbolo
};

typedef struct sym_tab SYMTAB ;

struct sym_tab{
    SYM ∗head;
    SYM ∗tail;
    int num; //Numero de elementos en la tabla
    SYMTAB ∗next; // apuntador a la tabla siguiente
};

typedef struct sym_stack SYMSTACK;

struct sym_stack{
    SYMTAB ∗top;
    SYMTAB ∗tail;
}SSTACK ;

typedef struct tipobase TB;

struct tipobase{
    int is_est; // 1 : si es estructura 0 : si es tipo simple −1: s i no tiene tipo base
    union{
        SYMTAB ∗est;
        int tipo;
    } tipo;
};


typedef struct type TYPE;

struct type{
    int id;
    char nombre[12];
    TB tb;
    int tam;
    TYPE ∗next; // apuntador al siguiente tipo en la tabla de tipos
} ;

typedef struct type_tab TYPETAB ;

struct type tab{
    TYPE ∗head;
    TYPE ∗tail;
    int num; // Contador de elementos en la tabla
    TYPETAB ∗next; // apuntador a la tabla siguiente
};

typedef struct type_stack TYPESTACK;

struct type_stack {
    TYPETAB ∗top;
    TYPETAB ∗taiL;
} TSTACK ;

#endif