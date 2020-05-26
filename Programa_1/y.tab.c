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
#define PUNTO 260
#define ID 261
#define FLOTANTE 262
#define DOBLE 263
#define CARACTER 264
#define CADENA 265
#define ENT 266
#define REAL 267
#define DREAL 268
#define CAR 269
#define SIN 270
#define ESTRUCTURA 271
#define INICIO 272
#define FIN 273
#define PYC 274
#define DEF 275
#define NUM 276
#define SI 277
#define ENTONCES 278
#define SINO 279
#define MIENTRAS 280
#define HACER 281
#define SEGUN 282
#define ESCRIBIR 283
#define LEER 284
#define DEVOLVER 285
#define TERMINAR 286
#define CASO 287
#define PRED 288
#define D_PUNTOS 289
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
#define ASIG 303
#define NOT 304
#define A_LLAVE 305
#define C_LLAVE 306
#define A_PAR 307
#define C_PAR 308
#define A_CORCHETE 309
#define C_CORCHETE 310
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
   27,    0,    0,   67,    0,    0,    0,   48,   49,   66,
   65,   64,    0,    0,    0,   63,    0,    0,    0,    0,
    0,    0,    0,   36,    0,   38,    0,   26,    0,    0,
    0,    0,    0,    0,   39,   46,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   34,   35,   37,   16,    0,   73,
   70,    0,   71,    0,   62,    0,    0,   45,    0,    0,
   59,   60,   61,    0,    0,   50,   53,   51,   52,    0,
    0,    0,   33,    0,   74,   28,    0,   30,   31,    0,
    0,    0,    0,   29,    0,    0,    0,    0,    0,   32,
    0,   42,   40,
};
static const YYINT yydgoto[] = {                          7,
    8,   14,    9,   16,   10,   11,   19,   36,   60,   37,
   38,   39,   41,   61,   75,   76,  153,  157,   77,   78,
   64,   65,   66,   91,   92,
};
static const YYINT yysindex[] = {                      -127,
    0,    0,    0,    0,    0, -262,    0, -263, -225, -225,
 -287, -127,  131,    0,    0, -231, -229, -244,    0, -219,
 -193, -190, -127, -127, -233,    0, -223,    0,    0,    0,
 -287,  149,    0,    0, -215, -211, -163,    0, -166, -201,
    0, -164,  131,    0, -215, -127,    0,    0,   48, -196,
   48, -234, -234,   48, -173, -178, -131, -227, -142,   18,
    0, -167, -178,    0, -123, -146,   33,    0,    0,    0,
    0,    0, -234, -178, -213,    0,  122,  111, -181, -117,
 -131, -128, -110,    0,  -70,    0, -263,    0, -178,   78,
 -141,  -82,  -93, -178,    0,    0,   83,   48, -234, -234,
 -178, -178, -178, -178, -178, -178, -178, -178, -178, -178,
 -178,   48, -234, -116,    0,    0,    0,    0,  -53,    0,
    0, -178,    0,   94,    0, -177, -114,    0,   21,   21,
    0,    0,    0,  -89,  -89,    0,    0,    0,    0,  -79,
 -251,  -86,    0,  122,    0,    0,   48,    0,    0,  -88,
  -75,  -73,  -87,    0,  -69,  -67,  -49,   48,   48,    0,
  -88,    0,    0,
};
static const YYINT yyrindex[] = {                         2,
    0,    0,    0,    0,    0,    0,    0,  225,    0,    0,
  -28,  -39,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    1,    1,    0,    0,    0,    0,    0,    0,
  -28,    0,    0, -257,  -10,    0,  -56,    0,    0,    0,
    0,    0,    0,    0,  -10,   63,    0,    0,    0, -175,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -50,    0, -143, -112,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   76,   84,    0,    0,
    0,    0,    0,    0,    0,    0,  225,    0,    0,   -2,
    0,  -47,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -18,    0,  -81,  -55,
    0,    0,    0, -202,  -24,    0,    0,    0,    0,    0,
    0,    0,    0, -241,    0,    0,    0,    0,    0,    0,
    0,    0,  -14,    0,    0,    0,    0,    0,    0,    0,
 -214,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   -5,  177,  252,  260,    0,   14,  240,    0,  224,    0,
  237,    0,  243,  -54,  -44,  -46,  128,    0,  -41,  303,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 424
static const YYINT yytable[] = {                         80,
    4,    4,   62,   11,   62,   88,   20,   62,   79,   12,
   83,   13,   88,   62,   82,   77,   85,   29,   30,   18,
   62,   90,  149,   68,   69,   22,   50,   22,   96,   70,
   71,   25,   97,   50,  114,   15,   70,   71,   99,  100,
   49,   72,   23,  126,   24,   35,   84,  119,   72,   11,
   19,   62,  124,   26,  127,  128,   35,  140,   41,  129,
  130,  131,  132,  133,   98,   62,   77,   27,  141,   73,
   28,   54,   74,   41,   31,   54,   99,  100,   54,   74,
  144,   72,   50,   32,   72,   70,   71,   54,   54,   54,
   54,   40,  151,   43,   44,  146,   42,   72,   72,  112,
   62,  147,   72,  161,  162,   72,   45,   46,   99,  100,
   63,   62,   62,   68,   72,   72,   72,   72,   72,   72,
   72,   72,   72,   72,   72,   72,   72,   72,   74,   50,
   68,   86,   72,   81,   68,   89,   93,   68,    1,    2,
    3,    4,    5,    6,   69,  115,   68,   68,   68,   68,
   68,   68,   68,   68,   68,   68,   68,   68,   68,   68,
   94,   69,  113,  116,   68,   69,  121,  123,   69,  101,
  102,  103,  104,  105,  122,   57,  100,   69,   69,   69,
   69,   69,   69,   69,   69,   69,   69,   69,   69,   69,
   69,  142,   57,  148,  150,   69,   57,  154,  152,   57,
  156,   58,  155,  117,  108,  109,  110,  111,   57,   57,
   57,   57,   57,   57,   57,   57,   57,   57,   58,  158,
  143,  159,   58,  160,   17,   58,   57,  101,  102,  103,
  104,  105,   13,    4,   58,   58,   58,   58,   58,   58,
   58,   58,   58,   58,  101,  102,  103,  104,  105,   55,
   25,   18,   58,   55,   78,   44,   55,   76,   43,   44,
   75,    4,   44,  118,   21,   55,   55,   55,   55,   17,
   33,   44,    4,    4,   67,    4,    4,    4,   50,   47,
    4,    4,    4,    4,    4,    4,    4,   48,  163,   51,
   87,    0,    0,   50,   52,    0,    0,   53,   54,   55,
   56,   57,   58,   59,   51,   95,    0,    0,   50,   52,
    0,    0,   53,   54,   55,   56,   57,   58,   59,   51,
  103,  104,  105,    4,   52,    0,    0,   53,   54,   55,
   56,   57,   58,   59,    4,    0,    0,    0,    0,    4,
    0,    0,    4,    4,    4,    4,    4,    4,    4,   56,
    0,    0,    0,   56,    0,    0,   56,   47,    0,    0,
    0,   47,    0,    0,   47,   56,   56,   56,   56,   56,
   56,   56,   56,   47,   47,  101,  102,  103,  104,  105,
  101,  102,  103,  104,  105,  120,    0,    0,    0,    0,
  125,  101,  102,  103,  104,  105,    1,    2,    3,    4,
    5,  145,  106,  107,  108,  109,  110,  111,  134,  135,
  136,  137,  138,  139,    1,    2,    3,    4,   34,  101,
  102,  103,  104,  105,
};
static const YYINT yycheck[] = {                         54,
    0,    0,   49,  261,   51,   60,   12,   54,   53,  272,
   57,  275,   67,   60,   56,  257,   58,   23,   24,  307,
   67,   63,  274,  258,  259,  257,  261,  257,   73,  264,
  265,  276,   74,  261,   81,  261,  264,  265,  290,  291,
   46,  276,  274,   98,  274,   32,  274,   89,  276,  307,
  308,   98,   94,  273,   99,  100,   43,  112,  273,  101,
  102,  103,  104,  105,  278,  112,  308,  261,  113,  304,
  261,  274,  307,  288,  308,  278,  290,  291,  281,  307,
  122,  257,  261,  307,  260,  264,  265,  290,  291,  292,
  293,  307,  147,  257,  261,  273,  308,  276,  274,  281,
  147,  279,  278,  158,  159,  281,  308,  272,  290,  291,
  307,  158,  159,  257,  290,  291,  292,  293,  294,  295,
  296,  297,  298,  299,  300,  301,  302,  303,  307,  261,
  274,  274,  308,  307,  278,  303,  260,  281,  266,  267,
  268,  269,  270,  271,  257,  274,  290,  291,  292,  293,
  294,  295,  296,  297,  298,  299,  300,  301,  302,  303,
  307,  274,  280,  274,  308,  278,  308,  261,  281,  298,
  299,  300,  301,  302,  257,  257,  291,  290,  291,  292,
  293,  294,  295,  296,  297,  298,  299,  300,  301,  302,
  303,  308,  274,  273,  281,  308,  278,  273,  287,  281,
  288,  257,  276,  274,  294,  295,  296,  297,  290,  291,
  292,  293,  294,  295,  296,  297,  298,  299,  274,  289,
  274,  289,  278,  273,    0,  281,  308,  298,  299,  300,
  301,  302,  261,  273,  290,  291,  292,  293,  294,  295,
  296,  297,  298,  299,  298,  299,  300,  301,  302,  274,
  261,  308,  308,  278,  257,  274,  281,  308,  273,  278,
  308,  261,  281,   87,   13,  290,  291,  292,  293,   10,
   31,  290,  272,  273,   51,  275,  275,  277,  261,   43,
  280,  281,  282,  283,  284,  285,  286,   45,  161,  272,
  273,   -1,   -1,  261,  277,   -1,   -1,  280,  281,  282,
  283,  284,  285,  286,  272,  273,   -1,   -1,  261,  277,
   -1,   -1,  280,  281,  282,  283,  284,  285,  286,  272,
  300,  301,  302,  261,  277,   -1,   -1,  280,  281,  282,
  283,  284,  285,  286,  272,   -1,   -1,   -1,   -1,  277,
   -1,   -1,  280,  281,  282,  283,  284,  285,  286,  274,
   -1,   -1,   -1,  278,   -1,   -1,  281,  274,   -1,   -1,
   -1,  278,   -1,   -1,  281,  290,  291,  292,  293,  294,
  295,  296,  297,  290,  291,  298,  299,  300,  301,  302,
  298,  299,  300,  301,  302,  308,   -1,   -1,   -1,   -1,
  308,  298,  299,  300,  301,  302,  266,  267,  268,  269,
  270,  308,  292,  293,  294,  295,  296,  297,  106,  107,
  108,  109,  110,  111,  266,  267,  268,  269,  270,  298,
  299,  300,  301,  302,
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"COMA","VERDADERO","FALSO",
"PUNTO","ID","FLOTANTE","DOBLE","CARACTER","CADENA","ENT","REAL","DREAL","CAR",
"SIN","ESTRUCTURA","INICIO","FIN","PYC","DEF","NUM","SI","ENTONCES","SINO",
"MIENTRAS","HACER","SEGUN","ESCRIBIR","LEER","DEVOLVER","TERMINAR","CASO",
"PRED","D_PUNTOS","OR","AND","DIFERENTE","IGUAL","S_MAYOR","S_MAYORIG",
"S_MENOR","S_MENORIG","MAS","MENOS","MUL","DIV","MODULO","ASIG","NOT","A_LLAVE",
"C_LLAVE","A_PAR","C_PAR","A_CORCHETE","C_CORCHETE",0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"tipo_arreglo : A_PAR NUM C_PAR tipo_arreglo",
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
"param_arr : A_PAR C_PAR param_arr",
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
"arreglo : A_PAR expresion C_PAR",
"arreglo : arreglo A_PAR expresion C_PAR",
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
#line 162 "parser.y"
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
