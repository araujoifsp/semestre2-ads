#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	system("color 0f");
	setlocale(LC_ALL,"portuguese");
    float c, k;
    
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &c);
    k= c + 273.15;
    printf("\nA temperatura em Kelvin é: %.2f Kº", k);
    
    return 0;
}
