#include <stdio.h>
#include <locale.h>

/*
    1. Fa�a um programa que leia um n�mero inteiro e o imprima, ent�o leia um n�mero real e
    tamb�m o imprima.
*/
int main(){
    int n1;
    float n2;

    setlocale(LC_ALL,"Portuguese");

    system("color 0F");

    printf("Digite um n�mero inteiro: ");
    scanf("%d",&n1);

    printf("Digite um n�mero inteiro: ");
    scanf("%f",&n2);

    system("cls");

    printf("***** N�meros digitados *****\n\n");
    printf("N�mero Inteiro: %d\nN�mero Real: %.2f",n1,n2);

    return 0;
}
