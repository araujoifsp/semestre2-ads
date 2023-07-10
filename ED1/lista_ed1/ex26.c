#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    system("color 0f");

    int h, m, s, duracao, hf, mf, sf, horas, minutos, segundos;

    printf("Digite um horarios \n\n");
    printf("Horas: ");
    scanf("%d",&h);
    printf("Minutos: ");
    scanf("%d",&m);
    printf("Segundos: ");
    scanf("%d",&s);

    printf("A hora inicial eh: %d:%d:%d\n", h, m, s);
    printf("Digite uma duração em segundos: ");
    scanf("%d",&duracao);

    printf("\nA hora de duracao da experiencia em segundos é: %d", duracao);
    horas = duracao / 3600;
    minutos = (duracao-(horas*3600))/60;
    segundos = duracao - (horas*3600)-(minutos*60);
    hf= h + horas;
    mf= m + minutos;
    sf= s + segundos;
    printf("\nA experiencia terminara as: %d:%d:%d", hf, mf, sf );
    return 0;
}
