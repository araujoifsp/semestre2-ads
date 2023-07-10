#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");
    int num = 780000;
    float primeiro,segundo,terceiro;
    primeiro = num-(num*0.46);
    segundo = num-(num*0.32);
    terceiro = num-(num*0.22);
    printf("Primeiro: %.2f\nSegundo: %.2f\nTerceiro: %.2f",primeiro,segundo,terceiro);
    return 0;
}
