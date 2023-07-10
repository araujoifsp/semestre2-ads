#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    float f, c;
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    
    printf("Digite uma temperatura em Graus Fahrenheit: ");
    scanf("%f", &f);
    c = 5.0*(f -32.0)/9.0;
    printf("A temperatura em Celsius é: %.2f Cº", c);
    
    return 0;
}
