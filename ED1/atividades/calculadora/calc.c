#include <stdio.h>
#include <stdlib.h>
#include "Calc.h"

struct calculadora{
    int num1;
    int num2;
};

//aloca os valores
CALC *valor(int num1, int num2){
    CALC *valor = (CALC*) malloc(sizeof(CALC));
    if(valor!=NULL){
        valor->num1 = num1;
        valor->num2 = num2;
    }
    return valor;
}

//calcula a soma dos valores
float calc_soma(CALC *valor){
    float r = valor->num1 + valor->num2;
    return r;
}

//subtração
float calc_sub(CALC *valor){
    float r = valor->num1 - valor->num2;
    return r;
}

//multiplicação
float calc_mult(CALC *valor){
    float r = valor->num1 * valor->num2;
    return r;
}

//divisão
float calc_div(CALC *valor){
    float r = valor->num1 / valor->num2;
    return r;
}

void calc_libera(CALC *valor){
    free(valor);
}
