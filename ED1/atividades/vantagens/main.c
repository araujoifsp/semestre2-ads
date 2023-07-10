#include <stdio.h>
#include <stdlib.h>
#include "Vantagens.h"

int main(){
    VANT *v;
    int sb, sh, nh, nf, vf;
    float vantagem;
    printf("***** CALCULAR VANTAGENS *****\n\n");
    printf("Digite o salario hora: ");
    scanf("%d",&sh);
    printf("Numero de horas: ");
    scanf("%d",&nh);
    printf("Numero Filhos: ");
    scanf("%d",&nf);
    printf("Valor Por filho: ");
    scanf("%d",&vf);

    v = valores(sh, nh, nf, vf);
    vantagem = calcularVantagens(v);

    printf("Vantagems: %.2f",vantagem);
}
