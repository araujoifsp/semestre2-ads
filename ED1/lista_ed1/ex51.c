#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	system("color 0f");
	setlocale(LC_ALL,"portuguese");
    float metro, acre;
    
    printf("Digite a �rea em acres: ");
    scanf("%f", &acre);
    metro = acre * 4048.58;
    printf("\nA area em m2 �: %.2f",metro);
    
    return 0;
}
