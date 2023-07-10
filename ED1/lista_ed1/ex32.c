#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	system("color 0f");
    float c, f;
    
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &c);
    f = c*(9.0/5.0) + 32.0;
    printf("\nA temperatura em Fahrenheit é: %.2f Fº", f);
    
    return 0;
}
