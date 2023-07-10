#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	system("color 0f");
	setlocale(LC_ALL,"portuguese");
    float graus, r;
    
    printf("Digite o valor do angulo em radianos: ");
    scanf("%f", &r);
    graus = r * 180/3.14;
    printf("\nO angulo convertido é: %.2f graus", graus);
    
    return 0;
}
