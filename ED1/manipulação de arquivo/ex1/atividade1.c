#include <stdio.h>
#include <stdlib.h>

typedef struct cadastroFuncionario{
    int id;
    char nome[30];
    int idade;
    float salario;
}CADFUN;

int main(){
    FILE *fp = fopen("arquivo.txt","wb");
    if(fp == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    CADFUN f[5];

    int i;

    for(i=0;i<5;i++){
        printf("ID: ");
        scanf("%d",&f[i].id);
        getchar();
        printf("Nome: ");
        gets(f[i].nome);
        printf("Idade: ");
        scanf("%d",&f[i].idade);
        printf("Salario: ");
        scanf("%f",&f[i].salario);
    }

    fwrite(f,sizeof(CADFUN),4,fp);
    fclose(fp);
    CADFUN func;
    FILE *f2 = fopen("arquivo.txt","rb");
    fseek(f2,2*sizeof(CADFUN), SEEK_SET);
    fread(&func, sizeof(CADFUN), 1, f2);
    printf("\n\nID: %d\nNome: %s\nIdade: %d\nSalario: %f\n\n", func.id, func.nome, func.idade, func.salario);
}


