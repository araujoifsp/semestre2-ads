#include <stdio.h>
#include <stdlib.h>

int main(){
    int **matriz1;
    int **matriz2;
    int **soma;
    int l,c,i,j;

    printf("Digite a quantidade de linhas da matriz 1: ");
    scanf("%d",&l);

    printf("Digite a quantidade de colunas da matriz 1: ");
    scanf("%d",&c);

    matriz1 = (int**) malloc(l * sizeof(int*));
    for(i=0;i<l;i++){
        matriz1[i]= (int*) malloc(c * sizeof(int));
    }

    matriz2 = (int**) malloc(l * sizeof(int*));
    for(i=0;i<l;i++){
        matriz2[i]= (int*) malloc(c * sizeof(int));
    }

    soma = (int**) malloc(l * sizeof(int*));
    for(i=0;i<l;i++){
        soma[i]= (int*) malloc(c * sizeof(int));
    }

    printf("\n\n\n Prencha os valores da matriz1\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d",&matriz1[i][j]);
        }
    }

    printf("\n\n\n Prencha os valores da matriz2\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d",&matriz2[i][j]);
        }
    }

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\nSoma das matrizes\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d ",soma[i][j]);
        }
        printf("\n");
    }

}

