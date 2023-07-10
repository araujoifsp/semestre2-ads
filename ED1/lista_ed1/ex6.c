#include <stdio.h>
#include <locale.h>
//6. Leia quatro notas, calcule a média aritmética e imprima o resultado.
int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");

    int n[5];

    printf("Digite a nota1: ");
    scanf("%d",&n[0]);
    printf("Digite a nota2: ");
    scanf("%d",&n[1]);
    printf("Digite a nota3: ");
    scanf("%d",&n[2]);
    printf("Digite a nota4: ");
    scanf("%d",&n[3]);

    n[4] = (n[0]+n[1]+n[2]+n[3])/4;

    system("cls");
    printf("Média: %d",n[4]);

    return 0;
}
