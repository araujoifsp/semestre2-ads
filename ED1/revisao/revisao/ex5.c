#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    char string2[20];
    char letra;
    int x, cont1 = 0, cont2 = 0;

    printf("Digite a String1: ");
    gets(string1);

    printf("Digite a String2: ");
    gets(string2);

    printf("Digite a letra a ser buscada: ");
    scanf("%c",&letra);

    for(x=0;x<strlen(string1); x++){
        if(string1[x]==letra){
            cont1++;
        }
    }
    for(x=0;x<strlen(string2); x++){
        if(string2[x]==letra){
            cont2++;
        }
    }

    printf("a letra %c aparece %d vezes na string 1,",letra,cont1);
    printf("e a %d vezes na string 2",cont2);

	return 0;
}
