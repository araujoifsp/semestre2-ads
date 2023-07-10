#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"

int main()
{
    float d;
    int vy, vx;
    PONTO *p, *q;
    printf("CALCULAR DISTANCIA ENTRE DOIS PONTOS\n\n");
    printf("Insira o valor x do ponto1: ");
    scanf("%d",&vx);
    printf("Insira o valor y do ponto1: ");
    scanf("%d",&vy);
    p = pto_cria(vx, vy);
    printf("Insira o valor x do ponto2: ");
    scanf("%d",&vx);
    printf("Insira o valor y do ponto2: ");
    scanf("%d",&vy);
    q = pto_cria(vx, vy);
    d = pto_distancia(p, q);
    printf("Distancia entre os pontos: %f\n", d);
    pto_libera(p);
    pto_libera(q);
    system("pause");
    return 0;
}
