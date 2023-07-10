#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float kmh, ms;
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    
    printf("Digite a velocidade em Km/h: ");
    scanf("%f", &kmh);
    ms= kmh / 3.6;
    printf("\nA velocidade convertida em m/s é: %.2f", ms);
    
    return 0;
}
