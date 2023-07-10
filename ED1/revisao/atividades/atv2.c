#include <stdio.h>
#include <locale.h>


void calcularVantagens(int *SB, int *V, int *SF, int *SH, int *NH, int *NF, int *VF);
void calcularDeducoes(int *INSS,int *IRPF,int *d,int *IR,int *SB);

main(){

    setlocale(LC_ALL,"portuguese");
    system("color 0F");

    int sb, sf, v, INSS, IRPF, d;
    int nh, sh, nf, vf, ir;

    printf("Calculo Vantagens\nnumero de horas:");
    scanf("%d",&nh);
    printf("Salario Hora: ");
    scanf("%d",&sh);
    printf("Numero Filhos: ");
    scanf("%d",&nf);
    printf("Valor Por filho: ");
    scanf("%d",&vf);

    calcularVantagens(&sb,&v,&sf,&sh,&nh,&nf,&vf);

    printf("Vantagems: %d",v);

    printf("\n\nCalculo Deduções: \n");
    printf("TaxaIR: ");
    scanf("%d",&ir);


    calcularDeducoes(&INSS, &IRPF,&d ,&ir,&sb);

    printf("Deduções: %d",d);

}

void calcularVantagens(int *SB, int *V, int *SF, int *SH, int *NH, int *NF, int *VF){
    *SB = *SH * *NH;
    *SF = *NF * *VF;
    *V = *SB + *SF;
}

void calcularDeducoes(int *INSS,int *IRPF,int *d,int *IR,int *SB){
    *INSS = *SB * 0.08;
    *IRPF = *SB * *IR;
    *d = *INSS + *IRPF;
}
