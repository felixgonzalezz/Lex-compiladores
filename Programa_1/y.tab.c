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

#line 2 "parser.y"
/*Sección de declaraciones*/
#include <stdio.h>
extern int yylex();
void yyerror(char *s);
#line 26 "y.tab.c"

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
#define FLOTANTE 261
#define DOBLE 262
#define CARACTER 263
#define CADENA 264
#define ENT 265
#define REAL 266
#define DREAL 267
#define CAR 268
#define SIN 269
#define ESTRUCTURA 270
#define INICIO 271
#define FIN 272
#define PYC 273
#define DEF 274
#define NUM 275
#define SI 276
#define ENTONCES 277
#define SINO 278
#define MIENTRAS 279
#define HACER 280
#define SEGUN 281
#define ESCRIBIR 282
#define LEER 283
#define DEVOLVER 284
#define TERMINAR 285
#define CASO 286
#define PRED 287
#define D_PUNTOS 288
#define ASIG 289
#define OR 290
#define AND 291
#define DIFERENTE 292
#define IGUAL 293
#define S_MAYOR 294
#define S_MAYORIG 295
#define S_MENOR 296
#define S_MENORIG 297
#define MAS 298
#define MENOS 299
#define MUL 300
#define DIV 301
#define MODULO 302
#define NOT 303
#define A_LLAVE 304
#define C_LLAVE 305
#define A_PAR 306
#define C_PAR 307
#define A_CORCHETE 308
#define C_CORCHETE 309
#define PUNTO 310
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
static const YYINT yysindex[] = {                       -80,
    0,    0,    0,    0,    0, -264,    0, -262, -244, -244,
 -274,  -80,  147,    0,    0, -238, -204, -230,    0, -226,
 -175, -169,  -80,  -80, -222,    0, -211,    0,    0,    0,
 -274,  152,    0,    0, -203, -198, -145,    0, -125, -176,
    0, -133,  147,    0, -203,  -80,    0,    0,   69, -214,
   69, -220, -220,   69, -166, -162, -119, -167, -128,  -25,
    0, -141, -162, -162,    0, -163, -159,   54,    0,    0,
    0,    0,    0, -220, -162, -202,    0,  124,    3, -148,
 -124, -119, -221, -122,    0, -142,    0, -262,    0, -162,
  124, -155, -103,  -61,  -84, -162,    0,    0,   98,   69,
 -220, -220, -162, -162, -162, -162, -162, -162, -162, -162,
 -162, -162, -162,   69, -220, -129,    0,    0,    0,    0,
  -82,    0, -162,    0,    0,   18,    0, -196, -112,    0,
 -235, -235,    0,    0,    0,  -73,  -73,    0,    0,    0,
    0,  -89, -258,  -71,    0,  124,    0,    0,   69,    0,
    0,  -79,  -62,  -39,  -44,    0,  -74,  -38,  -19,   69,
   69,    0,  -79,    0,    0,
};
static const YYINT yyrindex[] = {                         2,
    0,    0,    0,    0,    0,    0,    0,  270,    0,    0,
   19,    6,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    1,    1,    0,    0,    0,    0,    0,    0,
   19,    0,    0, -247,   28,    0,  -18,    0,    0,    0,
    0,    0,    0,    0,   28,   84,    0,    0,    0, -173,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -17,    0,    0, -127,  -96,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -28,   51,    0,
    0,    0,    0,    0,    0,    0,    0,  270,    0,    0,
 -251,    0,  -15,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -253,    0,
  -65,   14,    0,    0,    0,   97,  102,    0,    0,    0,
    0,    0,    0,    0,    0, -248,    0,    0,    0,    0,
    0,    0,    0,    0,   21,    0,    0,    0,    0,    0,
    0,    0, -246,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    5,  186,  288,  292,    0,   15,  272,    0,  264,    0,
  279,    0,  287,  -50,  -53,  -46,  180,    0,  -33,  298,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 426
static const YYINT yytable[] = {                         80,
    4,    4,   62,   81,   62,   78,   12,   62,   77,   89,
   84,   13,   11,   62,  151,   15,   20,   89,   22,   44,
   98,   62,   83,   44,   86,   41,   44,   29,   30,   91,
   94,  101,  102,   18,   23,  116,   44,   69,   70,   50,
   41,   99,   71,   72,   25,   26,   35,  129,  130,  128,
   49,  117,   22,   62,   73,   78,  121,   35,   77,   19,
   11,  143,  126,  142,  105,  106,  107,   62,   24,  131,
  132,  133,  134,  135,  100,  148,  103,  104,  105,  106,
  107,  149,   74,   72,   27,   75,   31,  101,  102,  146,
   28,   63,   50,   64,   32,   71,   72,   50,  153,   72,
   71,   72,   62,   72,   40,   85,   72,   73,   42,  163,
  164,   43,   73,   62,   62,   72,   72,   72,   72,   72,
   72,   72,   72,   72,   72,   72,   72,   72,   72,   68,
  119,  114,   45,   72,   44,   72,   72,   46,   75,   82,
   50,  101,  102,   75,   87,   68,   95,   90,   96,   68,
  118,  122,   68,  123,  115,  103,  104,  105,  106,  107,
   69,   68,   68,   68,   68,   68,   68,   68,   68,   68,
   68,   68,   68,   68,   68,  125,   69,  144,  102,   68,
   69,   68,  150,   69,    1,    2,    3,    4,    5,    6,
  145,   57,   69,   69,   69,   69,   69,   69,   69,   69,
   69,   69,   69,   69,   69,   69,  154,   57,  152,  156,
   69,   57,   69,  160,   57,  103,  104,  105,  106,  107,
  110,  111,  112,  113,   57,   57,   57,   57,   57,   57,
   57,   57,   57,   57,   50,  157,  103,  104,  105,  106,
  107,   57,  158,   57,   56,   51,   88,  124,   56,  161,
   52,   56,  162,   53,   54,   55,   56,   57,   58,   59,
    4,   56,   56,   56,   56,   56,   56,   56,   56,   17,
   58,    4,    4,  120,    4,    4,    4,    4,   13,    4,
    4,    4,    4,    4,    4,    4,   58,   25,   18,   76,
   58,   75,   43,   58,  108,  109,  110,  111,  112,  113,
   21,   17,   33,   58,   58,   58,   58,   58,   58,   58,
   58,   58,   58,   50,   68,  103,  104,  105,  106,  107,
   58,   47,   58,   47,   51,   97,  147,   47,   50,   52,
   47,   48,   53,   54,   55,   56,   57,   58,   59,   51,
   47,   47,  165,    4,   52,    0,    0,   53,   54,   55,
   56,   57,   58,   59,    4,    0,    0,    0,    0,    4,
    0,    0,    4,    4,    4,    4,    4,    4,    4,   54,
    0,    0,    0,   54,   55,    0,   54,    0,   55,    0,
    0,   55,    0,    0,    0,    0,   54,   54,   54,   54,
    0,   55,   55,   55,   55,  103,  104,  105,  106,  107,
    0,    0,    0,    0,  127,  136,  137,  138,  139,  140,
  141,    1,    2,    3,    4,    5,    1,    2,    3,    4,
   34,  103,  104,  105,  106,  107,
};
static const YYINT yycheck[] = {                         53,
    0,    0,   49,   54,   51,  257,  271,   54,  257,   60,
   57,  274,  260,   60,  273,  260,   12,   68,  257,  273,
   74,   68,   56,  277,   58,  272,  280,   23,   24,   63,
   64,  290,  291,  308,  273,   82,  290,  258,  259,  260,
  287,   75,  263,  264,  275,  272,   32,  101,  102,  100,
   46,  273,  257,  100,  275,  307,   90,   43,  307,  307,
  308,  115,   96,  114,  300,  301,  302,  114,  273,  103,
  104,  105,  106,  107,  277,  272,  298,  299,  300,  301,
  302,  278,  303,  257,  260,  306,  309,  290,  291,  123,
  260,  306,  260,  308,  306,  263,  264,  260,  149,  273,
  263,  264,  149,  277,  308,  273,  280,  275,  307,  160,
  161,  257,  275,  160,  161,  289,  290,  291,  292,  293,
  294,  295,  296,  297,  298,  299,  300,  301,  302,  257,
  273,  280,  309,  307,  260,  309,  310,  271,  306,  306,
  260,  290,  291,  306,  273,  273,  310,  289,  308,  277,
  273,  307,  280,  257,  279,  298,  299,  300,  301,  302,
  257,  289,  290,  291,  292,  293,  294,  295,  296,  297,
  298,  299,  300,  301,  302,  260,  273,  307,  291,  307,
  277,  309,  272,  280,  265,  266,  267,  268,  269,  270,
  273,  257,  289,  290,  291,  292,  293,  294,  295,  296,
  297,  298,  299,  300,  301,  302,  286,  273,  280,  272,
  307,  277,  309,  288,  280,  298,  299,  300,  301,  302,
  294,  295,  296,  297,  290,  291,  292,  293,  294,  295,
  296,  297,  298,  299,  260,  275,  298,  299,  300,  301,
  302,  307,  287,  309,  273,  271,  272,  309,  277,  288,
  276,  280,  272,  279,  280,  281,  282,  283,  284,  285,
  260,  290,  291,  292,  293,  294,  295,  296,  297,    0,
  257,  271,  272,   88,  274,  274,  276,  272,  260,  279,
  280,  281,  282,  283,  284,  285,  273,  260,  307,  307,
  277,  307,  272,  280,  292,  293,  294,  295,  296,  297,
   13,   10,   31,  290,  291,  292,  293,  294,  295,  296,
  297,  298,  299,  260,   51,  298,  299,  300,  301,  302,
  307,   43,  309,  273,  271,  272,  309,  277,  260,  276,
  280,   45,  279,  280,  281,  282,  283,  284,  285,  271,
  290,  291,  163,  260,  276,   -1,   -1,  279,  280,  281,
  282,  283,  284,  285,  271,   -1,   -1,   -1,   -1,  276,
   -1,   -1,  279,  280,  281,  282,  283,  284,  285,  273,
   -1,   -1,   -1,  277,  273,   -1,  280,   -1,  277,   -1,
   -1,  280,   -1,   -1,   -1,   -1,  290,  291,  292,  293,
   -1,  290,  291,  292,  293,  298,  299,  300,  301,  302,
   -1,   -1,   -1,   -1,  307,  108,  109,  110,  111,  112,
  113,  265,  266,  267,  268,  269,  265,  266,  267,  268,
  269,  298,  299,  300,  301,  302,
};
#define YYFINAL 7
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 310
#define YYUNDFTOKEN 338
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
"FLOTANTE","DOBLE","CARACTER","CADENA","ENT","REAL","DREAL","CAR","SIN",
"ESTRUCTURA","INICIO","FIN","PYC","DEF","NUM","SI","ENTONCES","SINO","MIENTRAS",
"HACER","SEGUN","ESCRIBIR","LEER","DEVOLVER","TERMINAR","CASO","PRED",
"D_PUNTOS","ASIG","OR","AND","DIFERENTE","IGUAL","S_MAYOR","S_MAYORIG",
"S_MENOR","S_MENORIG","MAS","MENOS","MUL","DIV","MODULO","NOT","A_LLAVE",
"C_LLAVE","A_PAR","C_PAR","A_CORCHETE","C_CORCHETE","PUNTO",0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
#line 161 "parser.y"
/*Sección de código de usuario*/


void yyerror (char *s){
    printf("%s\n",s);
}
#line 448 "y.tab.c"

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
