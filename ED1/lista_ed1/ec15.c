#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    float salario,salario2;
    printf("Digite o salario de um funcionario ");
    scanf("%f",&salario);
    salario2 = salario + (salario * 0,.15);
    printf("Novo salario: %.2f",salario2);
    return 0;
}
