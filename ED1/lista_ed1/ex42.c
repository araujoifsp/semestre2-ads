#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	system("color 0f")
    float p, c;
    
    printf("Digite o valor em polegadas: ");
    scanf("%f", &p);
    c = p * 2.54;
    printf("\nO valor convertido é: %.2f cm", c);
    
    return 0;
}
