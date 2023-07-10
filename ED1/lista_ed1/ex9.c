#include <stdio.h>
#include <locale.h>
//9. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
//dobro.
int main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    system("color 0f");
    printf("Digite um número inteiro: ");
    scanf("%d",&num);
    printf("Resultado: %d",((num*3)+1)+((num*2)-1));

    return 0;
}
