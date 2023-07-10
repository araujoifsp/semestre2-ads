#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor,desconto,parcela,comissao1,comissao2;
	printf("Digite um valor: ");
	scanf("%f",&valor);
	desconto = valor - (valor * 0.1);
	parcela = valor / 3;
	comissao1 = valor * 0.05;
	comissao2 = desconto * 0.05;
	printf("\nTotal a pagar com 10%% de desconto: %f",desconto);
	printf("\nValor de cada parcela: %f",parcela);
	printf("\nComissao do vendedor(Caso venda a vista): %f",comissao2);
	printf("\nComissao do vendedor(caso venda parcelada): %f",comissao1);
	return 0;
}
