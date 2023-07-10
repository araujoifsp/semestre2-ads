#include <stdio.h>

int main(){
	int x,y;
	
	printf("Digite o valor da variavel X: ");
	scanf("%d",&x);
	printf("Digite o valor da variavel Y: ");
	scanf("%d",&y);
	
	if(x>y){
		printf("\nEndereco variavel X: %x",&x);
		printf("\nConteudo variavel X: %d",x);
	}
	else if(y>x){
		printf("\nEndereco variavel Y: %x",&y);
		printf("\nConteudo variavel Y: %d",y);
	}
	return 0;
}
