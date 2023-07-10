#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int recursiva(int n);

int main(){
    setlocale(LC_ALL,"portuguese");
    int n, i;
    printf("Digite um valor n: ");
    scanf("%d",&n);

    printf("Usando versao interativa: \n");
    for(i=n;i>=0;i--){
        printf("%d\n",i);
    }

    printf("\n\nUsando versao recursiva: \n");

    recursiva(n);

    return 0;
}

int recursiva(int n){
   printf("%d\n",n);
   if(n==0){
        return 0;
   }
   return recursiva(n-1);
}
