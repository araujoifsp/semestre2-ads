#include <stdio.h>
#include <locale.h>
//8. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");

    int num;
    printf("Insira um número inteiro: ");
    scanf("%d",&num);

    system("cls");
    printf("Valor inserido: %d\nAntecessor: %d\nSucessor: %d",num,num-1,num+1);

    return 0;
}
