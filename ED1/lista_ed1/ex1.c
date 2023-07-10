#include <stdio.h>
#include <locale.h>

/*
    1. Faça um programa que leia um número inteiro e o imprima, então leia um número real e
    também o imprima.
*/
int main(){
    int n1;
    float n2;

    setlocale(LC_ALL,"Portuguese");

    system("color 0F");

    printf("Digite um número inteiro: ");
    scanf("%d",&n1);

    printf("Digite um número inteiro: ");
    scanf("%f",&n2);

    system("cls");

    printf("***** Números digitados *****\n\n");
    printf("Número Inteiro: %d\nNúmero Real: %.2f",n1,n2);

    return 0;
}
