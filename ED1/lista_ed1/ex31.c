#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	system("color 0f");
	setlocale(LC_ALL,"portuguese");
    float largura, comprimento, preco, total;
    
    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("Digite o preco do terreno: ");
    scanf("%f", &preco);
    total = (comprimento * largura * preco);
    printf("\nVoce gastara para cercar o terreno R$:%.2f", total);
    
    return 0;
}
