#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pilhaD.h"

int main()
{
    setlocale(LC_ALL,"portuguese");
    int x;

    Pilha *pi;
    ALUNO al;

    al.matricula = 100;
    al.n1 = 10;
    al.n2 = 9;
    al.n3 = 8;

    pi = cria_pilha();

    x = tamanho_pilha(pi);
    printf("\nO tamanho da pilha é: %d",x);

    x = pilha_cheia(pi);
    if(x){
        printf("\nA Pilha está cheia!");
    }else{
        printf("\nA pilha não está cheia");
    }

    x = pilha_vazia(pi);
    if(x){
        printf("\nA pilha está vazia!");
    }else{
        printf("\nA pilha não está vazia");
    }

    x = insere_pilha(pi, al);
    if(x){
        printf("\nElemento inserido com sucesso");
    }
    else{
        printf("\Erro, Elemento não inserido");
    }

    x = consulta_pilha(pi, &al);
    if(x){
        printf("\nConsulta realizada com sucesso: ");
        printf("\nMatricula: %d",al.matricula);
        printf("\nNota 1: %.2f",al.n1);
        printf("\nNota 2: %.2f",al.n2);
        printf("\nNota 3: %.2f",al.n3);
    }
    else{
        printf("\nErro, consulta não realizada");
    }

    x = remove_pilha(pi);
    if(x){
        printf("\nElemento removido com sucesso");
    }
    else{
        printf("\nErro, Elemento não removido");
    }

    destroi_pilha(pi);
}
