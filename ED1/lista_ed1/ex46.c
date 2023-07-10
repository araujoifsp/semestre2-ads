#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	system("color 0f");
	setlocale(LC_ALL,"portuguese");
    float kg, libra;
    
    printf("Digite massa em kg: ");
    scanf("%f", &kg);
    libra = kg /0.45;
    printf("\nO valor convertido é igual a %.2f libras",libra);
    
    return 0;
}
