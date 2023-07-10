#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    float metro, hec;
    
    printf("Digite a área em m2: ");
    scanf("%f", &metro);
    hec = metro * 0.0001;
    printf("\nA área em hectares é: %.2f",hec);
    
    return 0;
}
