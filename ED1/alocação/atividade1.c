#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    int n,i,v;

    printf("Digite a quantidade de números do vetor: ");
    scanf("%d",&n);

    p = (int*) calloc(n, 4);

    for(i=0;i<n;i++){
        printf("Insira um valor: ");
        scanf("%d",&v);
        if(v%2 != 0 && v > 0){
            p[i] = v;
        }
        else{
                printf("Insira apenas valores impares maior que 0\n\n");
            i--;
        }
    }
    for(i=0;i<n;i++){
        printf("\n%d",p[i]);
    }
    return 0;
}
