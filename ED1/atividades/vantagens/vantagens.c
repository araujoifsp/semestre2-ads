#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Vantagens.h"

struct vantagens{
    int sb;
    int sh;
    int nh;
    int nf;
    int vf;
};

VANT *valores(int sh, int nh, int nf, int vf){
    VANT *v = (VANT*) malloc(sizeof(VANT));
    if(v!=NULL){
        v->sh = sh;
        v->nh = nh;
        v->nf = nf;
        v->vf = vf;
    }
    return v;
}

float calcularVantagens(VANT *v){
    v-> sb = v-> sh * v-> nh;
    float sf =  v-> nf * v-> vf;
    float vantagem = v->sb * sf;
    return vantagem;
}

