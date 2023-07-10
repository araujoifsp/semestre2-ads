#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    int atual,idade,nasc;
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("Digite o ano atual: ");
    scanf("%d",&atual);

    nasc = atual - idade;
    system("cls");
    printf("Seu ano de nascimento é %d",nasc);

    return 0;
}
