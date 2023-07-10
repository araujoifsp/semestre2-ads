#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	system("color 0f");
	setlocale(LC_ALL,"portuguese");
    float lt, metros;
    
    printf("Digite um valor em litros: ");
    scanf("%f", &lt);
    metros = lt /1000;
    printf("\nO valor convertido é: %.2f m3",metros);
    
    return 0;
}
