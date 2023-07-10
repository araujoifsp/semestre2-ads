#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	system("color 0f");
    float km, milhas;
    
    printf("Digite a distancia em milhas: ");
    scanf("%f", &km);
    milhas = km / 1.61;
    printf("\nA velocidade convertida é %.2f milhas", milhas);
    
    return 0;
}
