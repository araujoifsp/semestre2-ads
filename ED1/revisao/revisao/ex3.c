#include <stdio.h>

int main(){
	
	int v1[5], v2[5];
	int i = 0, j = 0, cont = 0;
	
	for(i=0;i<5;i++){
		printf("Insira o valor do elemento %d do vetor 1: ",i+1);
		scanf("%d",&v1[i]);
	}
	
	for(j=0;j<5;j++){
		printf("Insira o valor do elemento %d do vetor 2: ",j+1);
		scanf("%d",&v2[j]);
	}
	
	printf("\nVetor1: ");
	for(i=0;i<5;i++){
		printf("elemento %d: %d |",i+1,v1[i]);
	}
	
	printf("\nVetor2: ");
	for(j=0;j<5;j++){
		printf("elemento %d: %d |",j+1,v2[j]);
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){	
			if(v1[i] == v2[j]){
				printf("\nValores iguais nas posições %d e %d",v1[i],v2[j]);
				cont++;
			}
		}
	}
	
	if(cont == 0){
		printf("Nenhum Valor Igual");
	}
	
	return 0;
}
