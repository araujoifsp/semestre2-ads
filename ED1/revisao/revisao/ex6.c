#include <stdio.h>
#include <string.h>

int main(){

    char string[20];
    char string2[20];
    int i = 0,cont = 0;

    printf("Digite uma string: ");
    gets(string);

    for(i=0;i<strlen(string);i++){
        if(string[i] == ' '){
            cont++;
        }
    }

    printf("Quantidades de espaços: %d",cont);

	cont = 0;
    for(i=0;i<strlen(string);i++){
        if(string[i] != ' '){
            string2[cont] = string[i];
            cont++;
        }
    }

    printf("\nString atualizada: %s",string2);

    return 0;
}
