#include <stdio.h>
#include <locale.h>
/*7. Leia um valor em real e a cota��o do d�lar. Em seguida, imprima o valor correspondente em
d�lares.*/
int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");

    float brl,usd,conv;

    printf("Insira um valor em real: ");
    scanf("%f",&brl);

    printf("Insira a cota��o do dolar: ");
    scanf("%f",&usd);

    conv = brl*usd;

    system("cls");
    printf("R$:%.2f � igual a US$:%.2f",brl,conv);

    return 0;
}
