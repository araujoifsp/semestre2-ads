#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	system("color 0f");
    float m2, ac;
    
    printf("Digite a �rea em m2: ");
    scanf("%f", &m2);
    ac = m2 * 0.000247;
    printf("\nA �rea em acres �: %.2f",ac);
    
    return 0;
}
