#include <stdio.h>
#include <locale.h>

//3. Efetue a leitura de um n�mero real e imprima o resultado do quadrado desse n�mero.

int main(){
    setlocale(LC_ALL,"portuguese");
    float n1;
    system("color 0f");

    printf("Digite um n�mero real: ");
    scanf("%f",&n1);

    system("cls");
    printf("Quadrado do valor inserido: %.2f",n1*n1);

    return 0;
}
