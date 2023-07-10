#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	system("color 0f");
    float k, c;
    
    printf("Digite a temperatura em Graus Kelvin: ");
    scanf("%.2f", &k);
    c = k - 273.15;
    printf("A temperatura em Celsius é: %.2f Cº", c);
    
    return 0;
}
