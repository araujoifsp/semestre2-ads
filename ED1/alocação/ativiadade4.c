#include <stdio.h>
#include <stdlib.h>

void funcao_troca_inteiros(int *a, int *b){//cria um procedimento com passagem de dois parametros
    int *aux;//cria um ponteiro do tipo inteiro
    aux = (int*) malloc(sizeof(int));//aloca a variavel aux em um espaço que armazene 1 número inteiro, o que equivale a 4 bytes

    if(aux == NULL){//verifica se a alocação foi bem sucedida
        printf("Memoria insufisciente\n");
        exit(1);
    }
    else{
        //essa sequencia de atribuições serve para inverter os valores de a e de b
        *aux = *a;
        *a = *b;
        *b = *aux;
        free(aux);//após inverter os valores o espaço de memoria da variavel aux é liberado
    }
}

void main(){
    char *p;//cria um ponteiro do tipo char
    p = (char*)malloc(4*sizeof(char)); //aloca o vetor p em unm espaço que armazene 4 caracteres ou seja 4 bytes
    strcpy(p,"IFSP");//insere o texto "IFSP" no vettor
    p = (char*)realloc(p,15*sizeof(char)); //realoca o vetor p em espaço que armazene 4 caracteres ou seja 15 bytes
    strcat(p,"-Guarulhos");//acrescenta o texto "-Guarulhos" no veotr
    printf("%s",p);//imprime o valor do vetor p
    free(p);//libera o espaço de memoria alocado no vetor p
}
