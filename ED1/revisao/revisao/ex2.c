#include <stdio.h>

int main(){
	
	int num;
	
	printf("Digite um número qualquer: ");
	scanf("%d",&num);
	
	printf("Retorno: ");
	
	if(num == 1){ 
		printf("A");
	}
		else if(num == 2){
			printf("B");
		}
		else if(num == 3){
			printf("C");
		}
		else if(num == 4){
			printf("D");
		}
	else{
		printf("0");
	}
	return 0;
}
