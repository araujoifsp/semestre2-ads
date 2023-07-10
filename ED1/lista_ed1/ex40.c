#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	system("color 0f");
    float graus, r;
    
    printf("Insira o valor do angulo em graus: ");
    scanf("%f", &graus);
    r = graus * 3.14/180;
    printf("\nO angulo convertido é: %.2f Radianos", r);
    
    return 0;
}
