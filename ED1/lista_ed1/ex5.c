#include <stdio.h>
#include <locale.h>
/*5. Efetue a leitura de três valores e apresente como resultado a soma dos quadrados dos três
valores lidos
*/
int main(){
    int n1,n2,n3,r;

    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    printf("Digite o valor 1: ");
    scanf("%d",&n1);
    printf("Digite o valor 2: ");
    scanf("%d",&n2);
    printf("Digite o valor 3: ");
    scanf("%d",&n3);
    r = (n1*n1)+(n2*n2)+(n3*n3);
    system("cls");
    printf("soma dos quadrados dos três valores lidos: %d",r);
    return 0;
}
