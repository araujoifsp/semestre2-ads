#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    int qtd,i,nota;

    printf("Digite a quantidade de alunos: ");
    scanf("%d",&qtd);

    p = (int*) calloc(qtd,4);

    for(i=0;i<qtd;i++){
        printf("Digite a nota do aluno: ");
        scanf("%d",&nota);
        p[i] = nota;
    }
    for(i=0;i<qtd;i++){
        printf("Aluno %d Nota %d\n",i+1,p[i]);
    }

    return 0;
}
