#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	system("color 0f");
	setlocale(LC_ALL,"portuguese");
    float p, cm;
    
    printf("Digite um valor em centimetros: ");
    scanf("%f", &cm);
    p = cm / 2.54;
    printf("\nO valor convertido é %.2f polegadas", p);
    
    return 0;
}
