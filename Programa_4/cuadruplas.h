typedef struct cuad CUAD;
struct cuad {
    char *op;
    char *arg1;
    char *arg2;
    char *res;
    CUAD *next;
} ;

typedef struct code{
    CUAD *head ;
    CUAD *tail;
} CODE;

CUAD *init_cuad(); // Reserva memoria para una cuadrupla

void finish_cuad(CUAD *c); // Libera la memoria de una cuadrupla

CODE *init_code(); // Reserva memoria para el codigo

void *finish_code(CODE *c); //Libera la memoria de la lista ligada del codigo

void *append_cuad(CODE* C, CUAD *cd); //Agrega una cuadrupla al final de la lista