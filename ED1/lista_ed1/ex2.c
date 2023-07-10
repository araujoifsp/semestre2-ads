#include <stdio.h>
#include <locale.h>

// 2. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

int main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2,n3;

    system("color 0f");

    printf("Insira um valor inteiro: ");
    scanf("%d",&n1);

    printf("Insira outro valor inteiro: ");
    scanf("%d",&n2);

    printf("Insira outro valor inteiro: ");
    scanf("%d",&n3);

    system("cls");

    printf("Soma dos Valores: %d", n1+n2+n3);

    return 0;
}
