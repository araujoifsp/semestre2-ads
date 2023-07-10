#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

struct elemento{
    CLI dados;
    struct elemento *prox;
};

typedef struct elemento ELEM;

int menu(){
    int op;
    system("color 0f");
    printf("\n1 - Inserção de novo contato\n");
    printf("2 - Gerar e exibir relatório de contatos em forma de lista total\n");
    printf("3 - Gerar e exibir relatório individual com busca por identificador\n");
    printf("4 - Gerar e exibir relatório com busca por nome neste caso exibir todos com o mesmo nome\n");
    printf("5 - Edição de dados do contato, escolhido por identificador\n");
    printf("6 - Remover contato, escolhido por identificador\n");
    printf("7 - Sair e encerrar o progama\n");
    printf("Escolha uma opção: ");
    scanf("%d",&op);
    system("cls");
    return op;
}

LISTA *criarLista(){
    LISTA *li;
    li = (LISTA*) malloc(sizeof(LISTA));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

int listaVazia(LISTA *li){
    if(li == NULL){
        return 1;
    }
    if(*li == NULL){
        return 1;
    }
    return 0;
}

int insere_lista(LISTA *li, CLI cl){
    if(li == NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL){
        return 0;
    }
    no->dados = cl;
    no->prox = (*li);
    *li = no;

    return 1;
}

int remove_lista(LISTA *li, int cod){
    if(li == NULL){
        return 0;
    }
    ELEM *ant, *no = *li;
    while(no != NULL && no->dados.codigo != cod){
        ant = no;
        no = no->prox;
    }
    if(no == NULL){
        return 0;
    }
    if(no == *li){
        *li = no->prox;
    }
    else{
        ant->prox = no->prox;
    }
    free(no);
    return 1;
}

int tamLista(LISTA *li){
    if(li == NULL){
        return 0;
    }
    int acum = 0;
    ELEM *no = *li;
    while(no != NULL){
        acum++;
        no = no->prox;
    }
    return acum;
}

int consulta_lista_cod(LISTA *li, int cod, CLI *cl){
    if(li == NULL){
        return 0;
    }
    ELEM *no = *li;
    while(no != NULL && no->dados.codigo != cod){
        no = no->prox;
    }
    if(no == NULL){
        return 0;
    }else{
        *cl = no->dados;
        return 1;
    }
}

int consulta_lista_nome(LISTA *li, char nome[50], CLI *cl){
    if(li == NULL){
        return 0;
    }
    ELEM *no = *li;
    while(no != NULL && no->dados.nome != nome){
        no = no->prox;
    }
    if(no == NULL){
        return 0;
    }else{
        *cl = no->dados;
        return 1;
    }
}

int consulta_lista_pos(LISTA *li, int posicao, CLI *cl){
    if(li == NULL || posicao <= 0){
        return 0;
    }
    ELEM *no = *li;
    int i = 1;
    while(no != NULL && i < posicao){
        no = no->prox;
        i++;
    }
    if(no == NULL){
        return 0;
    }
    else{
        *cl = no->dados;
        return 1;
    }
}

void grava(FILE *f, LISTA *li){
    ELEM *no = *li;
    while(no != NULL){
                fwrite(no,sizeof(CLI),1,f);
                no = no->prox;
            }
}

void salva(FILE *f, LISTA *li){

    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    fread(no,sizeof(CLI),1,f);
    no->prox = NULL;
    if((*li) == NULL){
        *li = no;
    }else{
        ELEM *aux = *li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
    }
}

int edita_lista(LISTA *li, int cod, CLI *cl){
    if(li == NULL){
        return 0;
    }
    ELEM *no = *li;
    while(no != NULL && no->dados.codigo != cod){
        no = no->prox;
    }
    if(no == NULL){
        return 0;
    }else{
         no->dados = *cl;
        return 1;
    }

}
