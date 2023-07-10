#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    int a,b;
    float c;
    printf("Digite o valor de A: ");
    scanf("%d",&a);
    printf("Digite o valor de B: ");
    scanf("%d",&b);
    c = sqrt((a*a)+(b*b));
    printf("Hipotenusa: %f",c);
    return 0;
}
