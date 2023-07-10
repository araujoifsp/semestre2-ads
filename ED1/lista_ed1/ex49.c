#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	system("color 0f");
	setlocale(LC_ALL,"portuguese");
    float jd, metros;
    
    printf("Insira o comprimento em metros: ");
    scanf("%f", &metros);
    jd = metros /0.91;
    printf("\nO comprimento convertido é igual a %.2f jardas",jd);
    
    return 0;
}
