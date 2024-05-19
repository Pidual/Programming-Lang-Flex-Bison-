/** Seccion de definiciones**/
%{
#include "syntactic.tab.h"
%}


float -?[0-9]+\.[0-9]*
int -?[0-9]+
string \"[^(\n|\")]*\"
param \(("var v"[0-9]+" "?)*\)
identiVar [a-z][a-zA-Z0-9]*
argumento \[("[0-9]+"?)*\]
/** Seccion de reglas**/
%%
"variable"                      {return VAR;}
"funcion"                       {return FUN;}
{string}                        {yylval.sval = strdup(yytext); return STR;}
{float}                         {yylval.fval = atof(yytext); return FLO;}
{int}                           {yylval.ival = atoi(yytext); return INT;}
=                               {return IGU;}
\+                              {return MAS;}
\*                              {return MUL;}
\-                              {return RES;}
\/                              {return DIV;}
"<"                             {return MEN;}
"<="                            {return MEIGU;}
">"                             {return MAY;}
">="                            {return MAYGU;}
"=="                            {return EQU;}
"/="                            {return DIF;}
"chi"                           {return CHI;}
"("                             {return PIZ;}
")"                             {return PDE;}
"fin"                           {return FIN;}
"no"                            {return NOO;}
"mientras"                      {return HAS;}
"por"                           {return POR;}
{param}                         {return PAR;}
{argumento}                     {return ARG;}
"retorno"                       {return RTN;}
"intentar"                      {return ITR;}
"finFun"                        {return FUE;}
"atrapar"                       {return ATP;}
"print"                         {return PRINT;}
{identiVar}                     {yylval.sval = strdup(yytext); return IDVR;}
[ \t\n]                         {/* ignorar espacios */}
#                               {return EOL;}
.                               {printf("Error lexico: %s\n", yytext);}
%%
/**Seccion de codigo de usuario**/
int yywrap(){return 1;}
