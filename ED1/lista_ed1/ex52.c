#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    float metro, hec;
    
    printf("Digite a �rea em m2: ");
    scanf("%f", &metro);
    hec = metro * 0.0001;
    printf("\nA �rea em hectares �: %.2f",hec);
    
    return 0;
}
