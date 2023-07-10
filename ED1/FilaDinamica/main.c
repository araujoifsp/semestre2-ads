#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "filaD.h"

int main()
{
    setlocale(LC_ALL,"portuguese");

    int x;

    Fila *fi;
    ALUNO al;

    al.matricula = 1;
    al.n1 = 10;
    al.n2 = 10;
    al.n3 = 10;

    fi = cria_fila();

    x = tamanho_fila(fi);
    printf("\nO tamanho da fila e: %d",x);

    x = fila_cheia(fi);
    if(x){
        printf("\nA fila est� cheia!");
    }
    else{
        printf("\nA fila n�o est� cheia!");
    }

    x = fila_vazia(fi);
    if(x){
        printf("\nA fila est� vazia!");
    }else{
        printf("\nA fila n�o est� vazia!");
    }

    x = insere_fila(fi, al);
    if(x){
        printf("\nElementos inserido com sucesso!");
    }
    else{
        printf("\nErro, elemento n�o inserido");
    }

    x = consulta_fila(fi, &al);
    if(x){
        printf("\n Consulta Realizada com sucesso: ");
        printf("\nMatricula: %d,",al.matricula);
        printf("\nNota 1: %.2f",al.n1);
        printf("\nNota 2: %.2f",al.n2);
        printf("\nNota 3: %.2f",al.n3);
    }
    else{
        printf("\nErro, consulta n�o realizada");
    }

    x = remove_fila(fi);
    if(x){
        printf("\nElemento removido com sucesso!");
    }
    else{
        printf("\nErro, elemento n�o removido");
    }

    destroi_fila(fi);
}
