#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	system("color 0f");
	setlocale(LC_ALL,"portuguese");
    float jd, metros;
    
    printf("Insira o comprimento jardas: ");
    scanf("%f", &jd);
    metros = jd *0.91;
    printf("\nO comprimento convertido é igual a %.2f m",metros);
    
    return 0;
}
