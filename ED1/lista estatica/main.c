#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "listaSequencial.h"

int main()
{
    setlocale(LC_ALL,"portuguese");
    int x, mat = 110, posicao = 1, op; //ser� usado para codigo de erro
    LISTA *li;
    li = cria_lista();

    struct aluno al, al2, al3, dados_aluno;

    //atribui��o de vaores a estrutura aluno
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

        printf("\nDigite a opera��o que deseja realizar\n");
        printf("\n1 - Inser��o no final");
        printf("\n2 - Inser��o no inicio");
        printf("\n3 - Inser��o ordenada");
        printf("\n4 - Consulta por posi��o");
        printf("\n5 - Consulta por matricula");
        printf("\n6 - Remo��o no final");
        printf("\n7 - Remo��o no inicio");
        printf("\n8 - Remo��o Ordenada");
        printf("\n9 - Verificar Tamanho da lista");
        printf("\n10 - Verificar se a lista est� cheia");
        printf("\n11 - Verificar se a lista est� vazia");
        printf("\n12 - Liberar Lista");
    do{
        scanf("%d",&op);
        switch(op){
            case 1://inser��o no final da lista
                x = insere_lista_final(li,al2);
                if(x){
                    printf("\nAluno inserido com sucesso!");
                }else{
                    printf("\nErro aluno n�o inserido");
                }
                break;
            case 2: //inser��o no inicio da lista
                x = insere_lista_inicio(li, al);
                if(x){
                    printf("\nAluno inserido com sucesso!");
                }
                else{
                    printf("\nErro aluno n�o inserido!");
                }
                break;
            case 3:    //inser��o ordenada na lista
                x = insere_lista_ordenada(li, al3);
                if(x){
                    printf("\nAluno inserido com sucesso!");
                }
                else{
                    printf("\nErro aluno n�o inserido!");
                }
                break;
            case 4://colsulta por posi��o
                x = consulta_lista_pos(li, posicao, &dados_aluno);
                if(x){
                    printf("\nConsulta por posi��o realizada com sucesso!");
                    printf("\nMatricula: %d", dados_aluno.matricula);
                    printf("\nNota 1: %.2f", dados_aluno.n1);
                    printf("\nNota 2: %.2f", dados_aluno.n2);
                    printf("\nNota 3: %.2f", dados_aluno.n3);
                }else{
                    printf("\nN�o foi possivel consultar na posi��o especifica!");
                }
                break;
            case 5:    //colsulta por matricula
                x = consulta_lista_mat(li, mat, &dados_aluno);
                if(x){
                    printf("\nConsulta por posi��o realizada com sucesso!");
                    printf("\nMatricula: %d", dados_aluno.matricula);
                    printf("\nNota 1: %.2f", dados_aluno.n1);
                    printf("\nNota 2: %.2f", dados_aluno.n2);
                    printf("\nNota 3: %.2f", dados_aluno.n3);
                }else{
                    printf("\nN�o foi possivel consultar na posi��o especifica!");
                }
                break;
            case 6:    //remo��o no final da lista
                x = remove_lista_final(li);
                if(x){
                    printf("\nAluno removido no final com sucesso!");
                }else{
                    printf("\nErro aluno n�o removido!");
                }
                break;
            case 7://remo�a� no inicio da lista
                x = remove_lista_inicio(li);
                if(x){
                    printf("\nAluno removido no final com sucesso!");
                }else{
                    printf("\nErro aluno n�o removido!");
                }
                break;
            case 8://remo��o ordenada
                x = remove_lista(li, mat);
                if(x){
                    printf("\nAluno removido no final com sucesso!");
                }else{
                    printf("\nErro aluno n�o removido!");
                }
                break;
            case 9://verificando o tamanho da lista
                x = tamanho_lista(li);
                printf("\nTamanho da lista e: %d", x);
                break;
            case 10: //verificando se alista est� cheia
                x = lista_cheia(li);
                if(x){
                    printf("\nLista cheia!");
                }else{
                    printf("\nLista n�o esta cheia!");
                }
                break;
            case 11://verificando se alista est� vazia
                x = lista_vazia(li);
                if(x){
                    printf("\nLista esta vazia!");
                }else{
                    printf("\nLista n�o est� vazia");
                }
                break;
            case 12:  libera_lista(li);
                break;

        }
    }while(op != 0);


}
