#include <stdio.h>
#include <stdlib.h>

int main(){
	float degraus, alt, alttotal;
	printf("Digite a altura do degrau: ");
	scanf("%f",&alt);
	printf("Digite a altura desejada: ");
	scanf("%f",&alttotal);
	degraus = alttotal = alt;
	printf("Quantidade de degraus necessarios %.2f",degraus);
	return 0;
}
