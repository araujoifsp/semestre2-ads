#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int matricula;
    float n1,n2,n3,mp;
    printf("Digite o número de matricula: ");
    scanf("%d",&matricula);
    printf("N1: ");
    scanf("%f",&n1);
    printf("N2: ");
    scanf("%f",&n2);
    printf("N3: ");
    scanf("%f",&n3);

    mp = ((n1*1)+(n2*1)+(n3*2))/4;
    if(mp >= 6 ){
        printf("Aluno: %d foi aprovado com a nota: %f",matricula,mp);
    }
    else{
        printf("Aluno: %d foi reprovado com a nota: %.2f",matricula,mp);
    }

    return 0;
}
