#define COMA 257
#define VERDADERO 258
#define FALSO 259
#define ID 260
#define CARACTER 261
#define CADENA 262
#define ENT 263
#define REAL 264
#define DREAL 265
#define CAR 266
#define SIN 267
#define ESTRUCTURA 268
#define INICIO 269
#define FIN 270
#define PYC 271
#define DEF 272
#define NUM 273
#define SI 274
#define ENTONCES 275
#define SINO 276
#define MIENTRAS 277
#define HACER 278
#define SEGUN 279
#define ESCRIBIR 280
#define LEER 281
#define DEVOLVER 282
#define TERMINAR 283
#define CASO 284
#define PRED 285
#define D_PUNTOS 286
#define ASIG 287
#define OR 288
#define AND 289
#define DIFERENTE 290
#define IGUAL 291
#define S_MAYOR 292
#define S_MAYORIG 293
#define S_MENOR 294
#define S_MENORIG 295
#define MAS 296
#define MENOS 297
#define MUL 298
#define DIV 299
#define MODULO 300
#define NOT 301
#define A_LLAVE 302
#define C_LLAVE 303
#define A_PAR 304
#define C_PAR 305
#define A_CORCHETE 306
#define C_CORCHETE 307
#define PUNTO 308
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
        struct{
                int tipo;
                char dir[32];
        }num;
        char id[32];
        int tipo;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
