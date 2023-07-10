#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    int raio,alt;
    float volume;
    printf("Digite o raio de um cilindro: ");
    scanf("%d",&raio);
    printf("Digite a altura de um cilindro: ");
    scanf("%d",&alt);
    volume = 3.141592 * (raio*raio) * alt;
    printf("Volume: %f",volume);
    return 0;
}
