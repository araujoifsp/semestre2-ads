#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "lista.h"

int main()
{
    setlocale(LC_ALL,"portuguese");
    int op,x,cod, posicao,i,tam;
    char nome[50];
    LISTA *li;
    FILE *f, *f2;
    f2 = fopen("arquivo.txt","rb");
    //criando a lista
    li = criarLista();
    struct cliente cl, dados;
        salva(f2,li);
        salva(f2,li);
        do{
            op = menu();
            switch(op){
                case 1://Inserir novo contato
                    printf("Código: ");
                    scanf("%d",&cl.codigo);
                    printf("Nome: ");
                    getchar();
                    gets(cl.nome);
                    printf("Empresa: ");
                    gets(cl.empresa);
                    printf("Departamento: ");
                    gets(cl.departamento);
                    printf("Telefone: ");
                    gets(cl.telefone);
                    printf("Celular: ");
                    gets(cl.celular);
                    printf("E-mail: ");
                    gets(cl.email);
                    x = insere_lista(li, cl);
                    if(x){
                        system("cls");
                        printf("\nInserido no final com sucesso!");
                    }else{
                        system("cls");
                        printf("\nNão foi possivel inserir no final");
                    }
                    break;
                case 2://Gerar e exibir relatorio de contatos em forma de lista total
                    tam = tamLista(li);
                    for(i=0;i<tam;i++){
                        consulta_lista_pos(li, i, &cl);
                        printf("\nCliente: %d",cl.codigo);
                        printf("\nNome: %s",cl.nome);
                        printf("\nEmpresa: %s",cl.empresa);
                        printf("\nDepartamento: %s",cl.departamento);
                        printf("\nTelefone: %s",cl.telefone);
                        printf("\nCelular: %s",cl.celular);
                        printf("\nE-mail: %s\n",cl.email);
                    }
                    break;
                case 3://Gerar e exibir relatorio individual com busca por identificador
                            printf("Digite o codigo do cliente que deseja buscar: ");
                            scanf("%d",&cod);
                            x = consulta_lista_cod(li, cod, &dados);
                            if(x){
                                printf("\n\nCódigo Encontrado");
                                printf("\n%d",cl.codigo);
                                printf("\n %s",cl.nome);
                            }
                            else{
                                printf("Código não encontrado");
                            }
                    break;
                case 4://Gerar e exibir relatorio individual com busca por nome
                      printf("Digite o nome do cliente que deseja buscar: ");
                            getchar();
                            gets(nome);
                            x = consulta_lista_nome(li, nome, &dados);
                            if(x){
                                printf("\n\nNome Encontrado");
                                printf("\n%d",cl.codigo);
                                printf("\n %s",cl.nome);
                            }
                            else{
                                printf("Nome não encontrado");
                            }
                    break;
                case 5://edição de dados do contado, escolhido por identificador
                        printf("Digite o código do cliente que deseja editar: ");
                        scanf("%d",&cod);
                        printf("Digite os novos valores \n");
                        printf("Código: ");
                        scanf("%d",&cl.codigo);
                        printf("Nome: ");
                        getchar();
                        gets(cl.nome);
                        printf("Empresa: ");
                        gets(cl.empresa);
                        printf("Departamento: ");
                        gets(cl.departamento);
                        printf("Telefone: ");
                        gets(cl.telefone);
                        printf("Celular: ");
                        gets(cl.celular);
                        printf("E-mail: ");
                        gets(cl.email);
                        edita_lista(li, cod, &cl);
                    break;
                case 6:
                    printf("Digite o codigo do cliente que deseja excluir: ");
                    scanf("%d",&cod);
                     x = remove_lista(li, cod);
                        if(x){
                            printf("\nRemovido elemento com sucesso!");
                        }else{
                            printf("\nNão foi possivel remover o elemento");
                        }
                    break;
                case 7://sair e enrerrar progama
                    f = fopen("arquivo.txt","ab");
                    grava(f,li);
                    fclose(f);
                    break;
            }
        }while(op != 7);


    fclose(f2);
    return 0;
}

