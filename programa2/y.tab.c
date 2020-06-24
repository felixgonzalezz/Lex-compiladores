/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 6 "parser.y"
/*Sección de declaraciones*/
#include <stdio.h>
extern int yylineno;
extern char* yytext;
extern int yylex();
void yyerror(char *s);
#line 28 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

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
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    5,    3,    6,    6,    6,    6,
    6,    7,    7,    4,    4,    2,    2,    8,    8,   10,
   10,   11,   12,   13,   13,    9,    9,   14,   14,   14,
   14,   14,   14,   14,   14,   14,   14,   14,   14,   17,
   17,   18,   18,   15,   15,   15,   15,   15,   15,   20,
   20,   20,   20,   20,   20,   20,   19,   19,   19,   19,
   19,   19,   19,   19,   19,   19,   16,   21,   21,   21,
   22,   22,   23,   23,   24,   24,   25,   25,
};
static const YYINT yylen[] = {                            2,
    2,    4,    4,    0,    4,    2,    1,    1,    1,    1,
    1,    4,    0,    3,    1,   11,    0,    1,    1,    3,
    1,    2,    2,    3,    0,    2,    1,    5,    7,    5,
    5,    8,    4,    3,    3,    2,    3,    2,    3,    5,
    4,    3,    0,    3,    3,    2,    1,    1,    1,    3,
    3,    3,    3,    3,    3,    1,    3,    3,    3,    3,
    3,    3,    1,    1,    1,    1,    2,    1,    1,    3,
    3,    0,    3,    4,    1,    0,    3,    1,
};
static const YYINT yydefred[] = {                         0,
    7,    8,    9,   10,   11,    0,    0,    0,    0,    0,
    0,    0,    0,    1,   15,    0,    0,    0,    6,    0,
    0,    0,    0,    0,    0,    5,    0,   14,    2,    3,
    0,    0,   12,    0,    0,    0,    0,   21,    0,    0,
   23,    0,    0,   22,    0,    0,   20,   24,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   27,    0,    0,    0,   67,    0,    0,    0,   48,   49,
   66,   65,   64,    0,    0,    0,   63,    0,    0,    0,
    0,    0,    0,    0,   36,    0,   38,    0,   26,    0,
    0,    0,    0,    0,    0,    0,   39,   46,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   34,   35,   37,   16,
    0,   70,    0,   73,   71,    0,   62,    0,    0,   45,
    0,    0,   59,   60,   61,    0,    0,   50,   53,   51,
   52,    0,    0,    0,   33,    0,   74,   28,    0,   30,
   31,    0,    0,    0,    0,   29,    0,    0,    0,    0,
    0,   32,    0,   42,   40,
};
static const YYINT yydgoto[] = {                          7,
    8,   14,    9,   16,   10,   11,   19,   36,   60,   37,
   38,   39,   41,   61,   76,   77,  155,  159,   78,   79,
   65,   66,   67,   92,   93,
};
static const YYINT yysindex[] = {                       -67,
    0,    0,    0,    0,    0, -254,    0, -256, -216, -216,
 -229,  -67,  167,    0,    0, -126, -125, -217,    0, -189,
 -155, -154,  -67,  -67, -218,    0, -192,    0,    0,    0,
 -229,  172,    0,    0, -204, -197, -124,    0, -113, -172,
    0, -120,  167,    0, -204,  -67,    0,    0,   84, -219,
   84, -221, -221,   84, -152, -195, -110, -228, -116,   54,
    0, -112, -195, -195,    0, -132, -129,   69,    0,    0,
    0,    0,    0, -221, -195, -269,    0,  144,    4, -135,
  -98, -110, -202,  -85,    0, -158,    0, -256,    0, -195,
  144, -118,  -68,   19,  -70, -195,    0,    0,  118,   84,
 -221, -221, -195, -195, -195, -195, -195, -195, -195, -195,
 -195, -195, -195,   84, -221, -114,    0,    0,    0,    0,
 -115,    0, -195,    0,    0,  113,    0, -223,  -96,    0,
 -141, -141,    0,    0,    0,  -30,  -30,    0,    0,    0,
    0,  -76, -262,  -75,    0,  144,    0,    0,   84,    0,
    0,  -82,  -51,  -52,  -65,    0,  -61,  -60,  -42,   84,
   84,    0,  -82,    0,    0,
};
static const YYINT yyrindex[] = {                         2,
    0,    0,    0,    0,    0,    0,    0,  229,    0,    0,
  -29,  -37,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    1,    1,    0,    0,    0,    0,    0,    0,
  -29,    0,    0, -247,  -26,    0,  -57,    0,    0,    0,
    0,    0,    0,    0,  -26,   99,    0,    0,    0, -171,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -45,    0,    0, -127,  -83,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -48, -196,    0,
    0,    0,    0,    0,    0,    0,    0,  229,    0,    0,
 -250,    0,  -38,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -187,    0,
  -39,   15,    0,    0,    0,  112,  117,    0,    0,    0,
    0,    0,    0,    0,    0, -245,    0,    0,    0,    0,
    0,    0,    0,    0,  -35,    0,    0,    0,    0,    0,
    0,    0, -224,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    5,  149,  225,  249,    0,   -8,  238,    0,  226,    0,
  233,    0,  240,  -50,  -53,  -46,  124,    0,  -33,  316,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 444
static const YYINT yytable[] = {                         80,
    4,    4,   62,   81,   62,  100,   78,   62,  151,   89,
   84,   77,   11,   62,   12,   13,   20,   89,  101,  102,
   98,   62,   83,   35,   86,  101,  102,   29,   30,   91,
   94,   50,   71,   72,   35,  116,   69,   70,   50,   71,
   72,   99,   85,   15,   73,   41,  148,  129,  130,  128,
   49,   73,  149,   62,   78,   25,  121,   19,   11,   77,
   41,  143,  126,  142,   50,   71,   72,   62,  117,  131,
  132,  133,  134,  135,   47,   75,   18,   73,   47,   74,
   26,   47,   75,   44,   63,   72,   64,   44,   31,  146,
   44,   47,   47,  103,  104,  105,  106,  107,  153,   72,
   44,   40,   62,   72,   27,   28,   72,   42,   75,  163,
  164,   32,  119,   62,   62,   72,   72,   72,   72,   72,
   72,   72,   72,   72,   72,   72,   72,   72,   72,   68,
   22,   22,   43,   72,   45,   72,   72,  103,  104,  105,
  106,  107,  114,   68,   23,   24,   44,   68,   46,   50,
   68,   82,  101,  102,   87,  145,  105,  106,  107,   68,
   68,   68,   68,   68,   68,   68,   68,   68,   68,   68,
   68,   68,   68,   69,   90,   95,   96,   68,  115,   68,
  103,  104,  105,  106,  107,  118,  122,   69,  123,  125,
  144,   69,  102,  150,   69,    1,    2,    3,    4,    5,
    6,  154,  152,   69,   69,   69,   69,   69,   69,   69,
   69,   69,   69,   69,   69,   69,   69,   57,  156,  158,
  157,   69,   56,   69,  160,  161,   56,  162,   17,   56,
   13,   57,    4,   25,   43,   57,  120,   21,   57,   56,
   56,   56,   56,   56,   56,   56,   56,   18,   57,   57,
   57,   57,   57,   57,   57,   57,   57,   57,   17,   76,
    4,  110,  111,  112,  113,   57,   75,   57,   33,    4,
    4,   58,    4,    4,    4,   47,   68,    4,    4,    4,
    4,    4,    4,    4,   48,   58,  165,    0,    0,   58,
    0,    0,   58,  108,  109,  110,  111,  112,  113,    0,
    0,    0,   58,   58,   58,   58,   58,   58,   58,   58,
   58,   58,    0,   50,  103,  104,  105,  106,  107,   58,
    0,   58,   51,   88,    0,  124,    0,   52,   50,    0,
   53,   54,   55,   56,   57,   58,   59,   51,   97,    0,
    0,    0,   52,   50,    0,   53,   54,   55,   56,   57,
   58,   59,   51,    0,    0,    0,    0,   52,    4,    0,
   53,   54,   55,   56,   57,   58,   59,    4,    0,    0,
    0,    0,    4,    0,    0,    4,    4,    4,    4,    4,
    4,    4,   54,    0,    0,    0,   54,   55,    0,   54,
    0,   55,    0,    0,   55,    0,    0,    0,    0,   54,
   54,   54,   54,    0,   55,   55,   55,   55,  103,  104,
  105,  106,  107,  103,  104,  105,  106,  107,    0,  147,
    0,    0,  127,  136,  137,  138,  139,  140,  141,    1,
    2,    3,    4,    5,    1,    2,    3,    4,   34,  103,
  104,  105,  106,  107,
};
static const YYINT yycheck[] = {                         53,
    0,    0,   49,   54,   51,  275,  257,   54,  271,   60,
   57,  257,  260,   60,  269,  272,   12,   68,  288,  289,
   74,   68,   56,   32,   58,  288,  289,   23,   24,   63,
   64,  260,  261,  262,   43,   82,  258,  259,  260,  261,
  262,   75,  271,  260,  273,  270,  270,  101,  102,  100,
   46,  273,  276,  100,  305,  273,   90,  305,  306,  305,
  285,  115,   96,  114,  260,  261,  262,  114,  271,  103,
  104,  105,  106,  107,  271,  304,  306,  273,  275,  301,
  270,  278,  304,  271,  304,  257,  306,  275,  307,  123,
  278,  288,  289,  296,  297,  298,  299,  300,  149,  271,
  288,  306,  149,  275,  260,  260,  278,  305,  304,  160,
  161,  304,  271,  160,  161,  287,  288,  289,  290,  291,
  292,  293,  294,  295,  296,  297,  298,  299,  300,  257,
  257,  257,  257,  305,  307,  307,  308,  296,  297,  298,
  299,  300,  278,  271,  271,  271,  260,  275,  269,  260,
  278,  304,  288,  289,  271,  271,  298,  299,  300,  287,
  288,  289,  290,  291,  292,  293,  294,  295,  296,  297,
  298,  299,  300,  257,  287,  308,  306,  305,  277,  307,
  296,  297,  298,  299,  300,  271,  305,  271,  257,  260,
  305,  275,  289,  270,  278,  263,  264,  265,  266,  267,
  268,  284,  278,  287,  288,  289,  290,  291,  292,  293,
  294,  295,  296,  297,  298,  299,  300,  257,  270,  285,
  273,  305,  271,  307,  286,  286,  275,  270,    0,  278,
  260,  271,  270,  260,  270,  275,   88,   13,  278,  288,
  289,  290,  291,  292,  293,  294,  295,  305,  288,  289,
  290,  291,  292,  293,  294,  295,  296,  297,   10,  305,
  260,  292,  293,  294,  295,  305,  305,  307,   31,  269,
  270,  257,  272,  272,  274,   43,   51,  277,  278,  279,
  280,  281,  282,  283,   45,  271,  163,   -1,   -1,  275,
   -1,   -1,  278,  290,  291,  292,  293,  294,  295,   -1,
   -1,   -1,  288,  289,  290,  291,  292,  293,  294,  295,
  296,  297,   -1,  260,  296,  297,  298,  299,  300,  305,
   -1,  307,  269,  270,   -1,  307,   -1,  274,  260,   -1,
  277,  278,  279,  280,  281,  282,  283,  269,  270,   -1,
   -1,   -1,  274,  260,   -1,  277,  278,  279,  280,  281,
  282,  283,  269,   -1,   -1,   -1,   -1,  274,  260,   -1,
  277,  278,  279,  280,  281,  282,  283,  269,   -1,   -1,
   -1,   -1,  274,   -1,   -1,  277,  278,  279,  280,  281,
  282,  283,  271,   -1,   -1,   -1,  275,  271,   -1,  278,
   -1,  275,   -1,   -1,  278,   -1,   -1,   -1,   -1,  288,
  289,  290,  291,   -1,  288,  289,  290,  291,  296,  297,
  298,  299,  300,  296,  297,  298,  299,  300,   -1,  307,
   -1,   -1,  305,  108,  109,  110,  111,  112,  113,  263,
  264,  265,  266,  267,  263,  264,  265,  266,  267,  296,
  297,  298,  299,  300,
};
#define YYFINAL 7
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 308
#define YYUNDFTOKEN 336
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"COMA","VERDADERO","FALSO","ID",
"CARACTER","CADENA","ENT","REAL","DREAL","CAR","SIN","ESTRUCTURA","INICIO",
"FIN","PYC","DEF","NUM","SI","ENTONCES","SINO","MIENTRAS","HACER","SEGUN",
"ESCRIBIR","LEER","DEVOLVER","TERMINAR","CASO","PRED","D_PUNTOS","ASIG","OR",
"AND","DIFERENTE","IGUAL","S_MAYOR","S_MAYORIG","S_MENOR","S_MENORIG","MAS",
"MENOS","MUL","DIV","MODULO","NOT","A_LLAVE","C_LLAVE","A_PAR","C_PAR",
"A_CORCHETE","C_CORCHETE","PUNTO",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : programa",
"programa : declaraciones funciones",
"declaraciones : tipo lista_var PYC declaraciones",
"declaraciones : tipo_registro lista_var PYC declaraciones",
"declaraciones :",
"tipo_registro : ESTRUCTURA INICIO declaraciones FIN",
"tipo : base tipo_arreglo",
"base : ENT",
"base : REAL",
"base : DREAL",
"base : CAR",
"base : SIN",
"tipo_arreglo : A_CORCHETE NUM C_CORCHETE tipo_arreglo",
"tipo_arreglo :",
"lista_var : lista_var COMA ID",
"lista_var : ID",
"funciones : DEF tipo ID A_PAR argumentos C_PAR INICIO declaraciones sentencias FIN funciones",
"funciones :",
"argumentos : lista_arg",
"argumentos : SIN",
"lista_arg : lista_arg COMA arg",
"lista_arg : arg",
"arg : tipo_arg ID",
"tipo_arg : base param_arr",
"param_arr : A_CORCHETE C_CORCHETE param_arr",
"param_arr :",
"sentencias : sentencias sentencia",
"sentencias : sentencia",
"sentencia : SI e_bool ENTONCES sentencia FIN",
"sentencia : SI e_bool ENTONCES sentencia SINO sentencia FIN",
"sentencia : MIENTRAS e_bool HACER sentencia FIN",
"sentencia : HACER sentencia MIENTRAS e_bool PYC",
"sentencia : SEGUN A_PAR variable C_PAR HACER casos predeterminado FIN",
"sentencia : variable ASIG expresion PYC",
"sentencia : ESCRIBIR expresion PYC",
"sentencia : LEER variable PYC",
"sentencia : DEVOLVER PYC",
"sentencia : DEVOLVER expresion PYC",
"sentencia : TERMINAR PYC",
"sentencia : INICIO sentencias FIN",
"casos : CASO NUM D_PUNTOS sentencia casos",
"casos : CASO NUM D_PUNTOS sentencia",
"predeterminado : PRED D_PUNTOS sentencia",
"predeterminado :",
"e_bool : e_bool OR e_bool",
"e_bool : e_bool AND e_bool",
"e_bool : NOT e_bool",
"e_bool : relacional",
"e_bool : VERDADERO",
"e_bool : FALSO",
"relacional : relacional S_MAYOR relacional",
"relacional : relacional S_MENOR relacional",
"relacional : relacional S_MENORIG relacional",
"relacional : relacional S_MAYORIG relacional",
"relacional : relacional DIFERENTE relacional",
"relacional : relacional IGUAL relacional",
"relacional : expresion",
"expresion : expresion MAS expresion",
"expresion : expresion MENOS expresion",
"expresion : expresion MUL expresion",
"expresion : expresion DIV expresion",
"expresion : expresion MODULO expresion",
"expresion : A_PAR expresion C_PAR",
"expresion : variable",
"expresion : NUM",
"expresion : CADENA",
"expresion : CARACTER",
"variable : ID variable_comp",
"variable_comp : dato_est_sim",
"variable_comp : arreglo",
"variable_comp : A_PAR parametros C_PAR",
"dato_est_sim : dato_est_sim PUNTO ID",
"dato_est_sim :",
"arreglo : A_CORCHETE expresion C_CORCHETE",
"arreglo : arreglo A_CORCHETE expresion C_CORCHETE",
"parametros : lista_param",
"parametros :",
"lista_param : lista_param COMA expresion",
"lista_param : expresion",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 170 "parser.y"
/*Sección de código de usuario*/


void yyerror (char *s){
    printf("%s linea %d texto %s\n",s , yylineno, yytext);
}
#line 452 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 2:
#line 80 "parser.y"
	{printf("D-> T L ; D\n");}
break;
case 4:
#line 81 "parser.y"
	{printf("D->€\n");}
break;
case 14:
#line 91 "parser.y"
	{printf("L-> L, id\n");}
break;
case 15:
#line 92 "parser.y"
	{printf("L->id\n");}
break;
#line 670 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
