#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	system("color 0f");
    float ms, kmh;
    
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms);
    kmh = ms *3.6;
    printf("\nA velocidade convertida é: %.2f km/h", kmh);
    
    return 0;
}
