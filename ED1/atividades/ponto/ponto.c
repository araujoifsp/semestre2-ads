#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto.h" //inclui os prototipos

//definição de tipos de dados

struct ponto{
    float x;
    float y;
};

//aloca e retorna um ponto com coordenadas "x" e "y"

PONTO *pto_cria(float x, float y){
    PONTO *p = (PONTO*) malloc(sizeof(PONTO));
    if(p!=NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}

void pto_libera(PONTO *p){
    free(p);
}

void pto_acessa(PONTO *p, float *x, float *y){
    *x = p->x;
    *y = p->y;
}

void pto_atribui(PONTO *p, float x, float y){
    p->x = x;
    p->y = y;
}

float pto_distancia(PONTO *p1, PONTO *p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}

