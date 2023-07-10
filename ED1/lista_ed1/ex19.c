#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario;
	printf("Digite o salario base: ");
	scanf("%f",&salario);
	salario = salario + (salario * 0.05);
	salario = salario - (salario * 0.07);
	printf("Salario a receber %.2f",salario);
	return 0;
}
