#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Calc.h"

int main()
{
    setlocale(LC_ALL,"portuguese");

    int n1,n2,op;
    float result;
    CALC *v;
    system("color 0f");
    printf("***Calculadora***");
    printf("\n\nDigite 1 para somar\nDigite 2 para subtrair\nDigite 3 para multiplicar\nDigite 4 para dividir\n");
    system("pause");
    system("cls");
    printf("Digite a operação: ");
    scanf("%d",&op);
    printf("Digite o valor1: ");
    scanf("%d",&n1);
    printf("Digite o valor2: ");
    scanf("%d",&n2);
    v = valor(n1, n2);

    switch(op){
        case 1:
            result = calc_soma(v);
            break;
        case 2:
            result = calc_sub(v);
            break;
        case 3:
            result = calc_mult(v);
            break;
        case 4:
            result = calc_div(v);
            break;
        default:
            printf("operação Invalida");
            break;
    }

    printf("Resultado: %.2f",result);
    calc_libera(v);
    system("pause");
    system("cls");
    system("color 02");
    printf("By Gabriel Araújo de Sousa\nGU3027261");

    return 0;
}
