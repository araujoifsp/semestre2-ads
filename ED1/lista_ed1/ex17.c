#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    int valor = 30;
    int dias,total;
    printf("Número de Dias trabalhados: ");
    scanf("%d",&dias);
    total = valor * dias;
    total = total-(total*0.08);
    printf("Valor liquido: %d",total);
    return 0;
}
