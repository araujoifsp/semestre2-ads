#include <stdio.h>
#include <stdlib.h>

int main(){
	char letra;
	printf("digite uma letra minuscula: ");
	scanf("%c",&letra);
	letra = toupper(letra);
    printf("\nLetra em maiusculo: %c " , letra);
	return 0;
}
