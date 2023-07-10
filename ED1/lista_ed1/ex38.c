#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	system("color 0f");
    float milhas, km;
    
    printf("Digite a distancia em milhas: ");
    scanf("%f", &milhas);
    km = 1.61 * milhas;
    printf("\nA distancia convertida é de %.2f milhas", km);
    
    return 0;
}
