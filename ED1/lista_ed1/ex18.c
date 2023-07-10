#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    float valor,total;
    int horas;
    printf("Valor Hora: ");
    scanf("%f",&valor);
    printf("Horas trabalhadas no mês: ");
    scanf("%d",&horas);
    total = valor * horas;
    total = total-(total*0.07);
    printf("Valor total: %.2f",total);
    return 0;
}
