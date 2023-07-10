#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    float prod,desc;
    printf("Digite o valor de um produto: ");
    scanf("%f",&prod);
    desc = prod - (prod*0.12);
    printf("Valor com desconto: %.2f",desc);
    return 0;
}
