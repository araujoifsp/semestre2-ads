#include <stdio.h>
#include <locale.h>
//4. Leia um número real e imprima a quinta parte deste número.
int main(){
    setlocale(LC_ALL,"portuguese");
    float num;
    system("color 0f");

    printf("Digite um número real: ");
    scanf("%f",&num);

    system("cls");
    printf("Quinta parte o número inserido: %.2f",num/5);
    return 0;
}
