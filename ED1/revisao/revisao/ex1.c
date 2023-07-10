#include <stdio.h>

int main(){
	
	int num;
	
	printf("Digite um número qualquer: ");
	scanf("%d",&num);
	
	printf("Retorno: ");
	switch(num){
		case 1: printf("A");
			break;
		case 2: printf("B");
			break;
		case 3: printf("C");
			break;
		case 4: printf("D");
			break;
		default: printf("0");
			break;
	}
	
	return 0;
}
