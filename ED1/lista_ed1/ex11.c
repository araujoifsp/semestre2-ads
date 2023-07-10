#include <stdio.h>
#include <locale.h>
//. Leia o valor do raio de um círculo e calcule a área do círculo correspondente. Imprima o
//resultado dessa operação.

int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    int raio;
    float area;
    printf("Insira o valor do raio de um circulo: ");
    scanf("%d",&raio);
    area = 3.141592 * (raio*raio);
    printf("Area: %f",area);
    return 0;
}
