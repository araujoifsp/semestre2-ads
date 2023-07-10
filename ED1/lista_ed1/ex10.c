#include <stdio.h>
#include <locale.h>
//10. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    int lado;
    printf("Dgite o valor do lado de um quadrado em metros: ");
    scanf("%d",&lado);
    printf("Area do quadrado: %dm²",lado*lado);
    return 0;
}
