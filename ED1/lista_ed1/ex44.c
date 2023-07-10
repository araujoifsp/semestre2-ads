#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	system("color 0f");
	setlocale(LC_ALL,"portuguese");
    float metro, lt;
    
    printf("Digite o volume em m3: ");
    scanf("%f", &metro);
    lt = 1000 * metro;
    printf("\nO valor convertido é %.2f litros", lt);
    
    return 0;
}
