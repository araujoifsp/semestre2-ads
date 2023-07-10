#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *f,*f2;
    f = fopen("arq1.txt","w");
    f2 = fopen("arq2.txt","w");
    if(f == NULL){
        printf("Erro na abertura");
        system("pause");
        exit(1);
    }
    //lendo um valor aleatorio
    char texto[60];
    char c;
    printf("digite o texto a ser inserido no aqruivo: ");
    gets(texto);
    int i;
    //inserindo string no arquivo
    for(i= 0;i<strlen(texto);i++){
        fputc(texto[i], f);
    }
    //
    fclose(f);
    f = fopen("arq1.txt","r");
    c = fgetc(f);
    //modificando texto e enviando para outro arquivo
    while(c != EOF){
        fputc(toupper(c), f2);
        c = fgetc(f);
    }
    fclose(f);
    fclose(f2);
    f = fopen("arq1.txt","r");
    f2 = fopen("arq2.txt","r");
    system("cls");
    c = fgetc(f);
    //exibindo arquivo modificado
    printf("Texto aquivo1:\n\n");
    while(c != EOF){
        printf("%c",c);
        c = fgetc(f);
    }
    fclose(f);
    c = fgetc(f2);
    printf("\nTexto aquivo2:\n\n");
    while(c != EOF){
        printf("%c",c);
        c = fgetc(f2);
    }
    printf("\n\n\n");
    fclose(f2);
    system("pause");
    return 0;
}
