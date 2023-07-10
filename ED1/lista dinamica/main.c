#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "listaLigada.h"

int main()
{
    setlocale(LC_ALL,"portuguese");

    int x, mat = 110, posicao = 1;
    LISTA *li;

    struct aluno al, al2, al3, dados_aluno;

    al.matricula = 100;
    al.n1 = 5.3;
    al.n2 = 6.9;
    al.n3 = 7.4;

    al2.matricula = 120;
    al2.n1 = 4;
    al2.n2 = 2.9;
    al2.n3 = 8.4;

    al3.matricula = 110;
    al3.n1 = 1.3;
    al3.n2 = 2.9;
    al3.n3 = 3.4;

    //criando a lista
    li = criarLista();

    //tamanho lista
    x = tamLista(li);
    printf("O tamanho da lista é: %d",x);

    //verifica lista cheia
        if(listaCheia(li)){
            printf("\nLista esta Cheia!");
        }
        else{
            printf("\nLista esta vazia!");
        }

    //verifica lista vazia
        if(listaVazia(li)){
            printf("\nLista esta vazia!");
        }
        else{
            printf("\nLista esta cheia!");
        }

    //inserção no incio da lista
       x = insere_inicio_lista(li, al);
        if(x){
            printf("\nInserido no inicio com sucesso!");
        }else{
            printf("\nNão foi possivel inserir no incio");
        }

    //inserção no final da lista
        x = insere_final_lista(li, al2);
        if(x){
            printf("\nInserido no final com sucesso!");
        }else{
            printf("\nNão foi possivel inserir no final");
        }
    //inserção ordenada
    x = insere_lista_ordenada(li, al3);
    if(x){
        printf("\nInserindo ordenadamente com sucesso!");
    }else{
        printf("\nNão foi possivel inserir ordenadamente");
    }

    //removendo no inicio da lista
    x = remove_inicio_lista(li);
    if(x){
        printf("\nRemovido no inicio com sucesso!");
    }else{
        printf("\nNão Foi possivel remover do inicio");
    }

    //removendo final lista
    x = remove_final_lista(li);
    if(x){
        printf("\nRemovido do final com sucesso!");
    }else{
        printf("\nNão foi possivel remover do final");
    }

    //removendo de qualquer elemento
    x = remove_lista(li, mat);
    if(x){
        printf("\nRemovido elemento com sucesso!");
    }else{
        printf("\nNão foi possivel remover o elemento");
    }

    //consulta por posição
    x = consulta_lista_pos(li, posicao, &al);
    printf("\n\nConteudo na posição %d:",posicao);
    printf("\n%d", al.matricula);
    printf("\n%.2f",al.n1);
    printf("\n%.2f",al.n2);
    printf("\n%.2f",al.n3);

    //consulta por matricula
    x = consulta_lista_mat(li, mat, &al);
    printf("\n\nMatricula encontrada na posição %d:", posicao);
    printf("\n%d",al.matricula);
    printf("\n %.2f",al.n1);
    printf("\n %.2f",al.n2);
    printf("\n %.2f",al.n3);

    //liberando a lista
    apagaLista(li);


}
