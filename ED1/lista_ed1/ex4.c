#include <stdio.h>
#include <locale.h>
//4. Leia um n�mero real e imprima a quinta parte deste n�mero.
int main(){
    setlocale(LC_ALL,"portuguese");
    float num;
    system("color 0f");

    printf("Digite um n�mero real: ");
    scanf("%f",&num);

    system("cls");
    printf("Quinta parte o n�mero inserido: %.2f",num/5);
    return 0;
}
