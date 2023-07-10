#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int func(int n);
int func_iterativo(int n);

int main(){
    setlocale(LC_ALL,"portuguese");
    int n;
    printf("Digite um valor n: ");
    scanf("%d",&n);
    printf("\n\nUtilizando função recursiva: \n");
    printf("%d",func(n));
    printf("\n\nUtilizando função interativa: \n");
    printf("%d",func_iterativo(n));
}

//essa função recursiva soma todos os valores entre n e 0
int func(int n){
    if(n==0){
        return 0;
    }
    return (n+func(n-1));
}

int func_iterativo(int n){
    int t, f;
    f = 0;
    for(t=0;t<=n;t++){
        f = f + t;
    }
    return f;
}
