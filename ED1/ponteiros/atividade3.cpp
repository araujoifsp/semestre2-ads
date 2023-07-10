#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float vetor[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("\n Posição %d: %x",i,&vetor[i]);
	}
}
