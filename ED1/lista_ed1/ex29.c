#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	system("color 0f");
	
    float x = 0, y = 0, r = 0;
    
    printf ("Digite a coordenada x \n");
    scanf ("%f", &x);
    printf ("Digite a coordenada y \n");
    scanf ("%f", &y);
    r=sqrt(pow(x,2)+pow(y,2));
    printf("A distancia e: %.2f \n", r);
    
    return 0;
}
