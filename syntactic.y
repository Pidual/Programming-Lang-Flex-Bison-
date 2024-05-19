/** Seccion de definicones**/
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex(void);
void yyerror(char *s);
extern FILE *yyin;

#define MAX_SYMBOLS 256

typedef struct {
    char *name;
    float value;
    char *valueS;
} Symbol;

Symbol symbolTable[MAX_SYMBOLS];
int symbolCount = 0;

void setSymbolValue(char *name, float value) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = value;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].value = value;
    symbolCount++;
}

void setSymbolValue2(char *name, float value, float value2) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = value + value2;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].value = value + value2;
    symbolCount++;
}

void setSymbolValueC(char *name, char *valueS) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].valueS = valueS;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].valueS = valueS;
    symbolCount++;
}

void create(char *name) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = 0;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].value = 0;
    symbolCount++;
}

float getSymbolValue(char *name) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {          
            return symbolTable[i].value;
        }
    }
    printf("Variable no definida: %s\n", name);
    return 0.0;
}

%}

%union {
    int ival;
    float fval;
    char *sval;
}

%token <sval> IDVR STR
%token <ival> INT
%token <fval> FLO
%token EOL VAR IGU MAS MUL RES DIV MEN MEIGU MAY MAYGU EQU DIF CHI PIZ PDE FIN NOO HAS FUN PAR RTN ITR FUE ATP ARG PRINT POR

%type <fval> value
%type <fval> initvar
%type <fval> operation
%type <fval> condition
%type <fval> printSentence
/** Sección de reglas**/
%%

program   : 
            | sentence 
            | decfun   
            | program sentence 
            | program decfun 

sentence    : decvar
            | asigvar 
            | initvar 
            | operation EOL 
            | chi
            | hasta
            | for
            | err 
            | callfuncion  
            | printSentence

decvar      : VAR IDVR EOL {  create($2); }

initvar     : VAR IDVR IGU INT EOL { setSymbolValue($2, (float)$4); 
                                    $$ = $4;
                                  }
            | VAR IDVR IGU FLO EOL { setSymbolValue($2, $4); 
                                    $$ = $4;  
                                  }
            | VAR IDVR IGU operation EOL { setSymbolValue($2, (float)$4); }
            | VAR IDVR IGU STR EOL { setSymbolValueC($2, $4); }
            | VAR IDVR IGU value { setSymbolValue($2, $4); }

asigvar     : IDVR IGU value EOL { setSymbolValue($1, $3); }
            | IDVR IGU operation EOL { setSymbolValue($1, (float)$3); }
            | IDVR IGU callfuncion

value       : INT { $$ = (float)$1; }
            | FLO { $$ = $1; }
            | IDVR { $$ = getSymbolValue($1); }

operation   : value MAS value { $$ = $1 + $3; }
            | value RES value { $$ = $1 - $3; }
            | value MUL value { $$ = $1 * $3; }
            | value DIV value {if($3 == 0)
                                    $$ = 0;
                                else
                                    $$ = $1/$3;
                              }

callfuncion : IDVR PIZ PDE EOL { create($1); }
            | IDVR PIZ INT INT PDE EOL { setSymbolValue2($1, (float)$3, (float)$4); }

chi         : CHI PIZ condition PDE operation EOL FIN {if($3 == 0)
                                                        printf("Entra al if: %f\n", $5);
                                                      }
            | CHI PIZ condition PDE IDVR IGU value EOL FIN {if($3 == 0)
                                                            setSymbolValue($5, $7);
                                                          }
            | CHI PIZ condition PDE IDVR IGU operation EOL FIN {if($3 == 0)
                                                                setSymbolValue($5, $7);
                                                              }
            | CHI PIZ condition PDE IDVR IGU value NOO IDVR IGU value EOL FIN {if($3 == 0)
                                                                                setSymbolValue($5, $7);
                                                                            else
                                                                                setSymbolValue($9, $11);
                                                                            }
            | CHI PIZ condition PDE IDVR IGU operation NOO IDVR IGU operation EOL FIN {if($3 == 0)
                                                                                        setSymbolValue($5, $7);
                                                                                    else
                                                                                        setSymbolValue($9, $11);
                                                                                    }

hasta       : HAS PIZ value MEN value PDE IDVR IGU operation EOL {while($3 < $5){
                                                                    $3 += 1;
                                                                    setSymbolValue($7, $3);
                                                                 }  
                                                                }
            | HAS PIZ value MEIGU value PDE IDVR IGU operation EOL {while($3 <= $5){
                                                                    $3 += 1;
                                                                    setSymbolValue($7, $3);
                                                                 }  
                                                                }

condition   : value MEN value {if($1 < $3)
                                    $$ = 0;
                                else
                                    $$ = 1;
                              }
            | value MEIGU value {if($1 <= $3)
                                    $$ = 0;
                                else
                                    $$ = 1;
                              }
            | value MAY value {if($1 > $3)
                                    $$ = 0;
                                else
                                    $$ = 1;
                              }
            | value MAYGU value {if($1 >= $3)
                                    $$ = 0;
                                else
                                    $$ = 1;
                              }
            | value EQU value {if($1 == $3)
                                    $$ = 0;
                                else
                                    $$ = 1;
                              }
            | value DIF value {if($1 != $3)
                                    $$ = 0;
                                else
                                    $$ = 1;
                              }

decfun      : FUN IDVR PAR EOL FUE{  create($2); }
            | FUN IDVR PAR return FUE {  create($2); }
            | FUN IDVR PAR decvar return FUE {  create($2); }
            | FUN IDVR PAR initvar return FUE {  create($2); }
            | FUN IDVR PAR asigvar return FUE {  create($2); }
            | FUN IDVR PAR operation return FUE {  create($2); }

return      : RTN IDVR EOL 
            | RTN operation EOL 

err         : ITR program ATP program FIN
            | ITR EOL ATP printSentence FIN 

for         : POR PIZ IDVR IGU INT EOL value MEN value PDE IDVR IGU operation EOL {int i;
                                                                                setSymbolValue($3, (float)$5); 
                                                                                for(i = $5; i < $9; i++){
                                                                                    setSymbolValue($11, i);
                                                                                }
                                                                              }
            | POR PIZ IDVR IGU INT EOL value MAYGU value PDE IDVR IGU operation EOL {int i;
                                                                                setSymbolValue($3, (float)$5); 
                                                                                for(i = $5; i <= $9; i++){
                                                                                    setSymbolValue($11, i);
                                                                                }
                                                                              }
            | POR PIZ initvar condition PDE asigvar {int i;
                                                     for(i = $3; i <= 9; i++){
                                                         printf("pasa");
                                                     }
                                                    }

printSentence : PRINT PIZ value PDE EOL { printf("%f\n", $3); }
              | PRINT PIZ STR PDE EOL { printf("%s\n", $3); }
%%
/**Seccion de codigo de usuario**/
void yyerror(char *s){
    printf("Error Sintáctico: %s\n", s);
}

int main(int argc, char **argv){
    printf("Inicio del programa: \n");
    if(argc>1)
        yyin=fopen(argv[1],"rt");
    else
        yyin=stdin;
    yyparse();
    return 0;
}