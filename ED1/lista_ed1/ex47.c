#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	system("color 0f");
	setlocale(LC_ALL,"portuguese");
    float kg, libras;
    
    printf("Insira massa em libras: ");
    scanf("%f", &libras);
    kg = libras *0.45;
    printf("\nO valor convertido é igual a %.2f kg",kg);
    
    return 0;
}
