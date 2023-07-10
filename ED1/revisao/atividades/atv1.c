#include <stdio.h>
#include <locale.h>

//Gabriel Araújo de sousa gu3027261

int sb, sf, v, INSS, IRPF, d;
void calcularVantagens(int SH, int NH, int NF, int VF);
void calcularDeducoes(int IR);

main(){

    setlocale(LC_ALL,"portuguese");

    int nh, sh, nf, vf, ir;

    printf("Calculo Vantagens\nnumero de horas:");
    scanf("%d",&nh);
    printf("Salario Hora: ");
    scanf("%d",&sh);
    printf("Numero Filhos: ");
    scanf("%d",&nf);
    printf("Valor Por filho: ");
    scanf("%d",&vf);

    calcularVantagens(sh,nh,nf,vf);

    printf("Vantagems: %d",v);

    printf("\n\nCalculo Deduções: \n");
    printf("TaxaIR: ");
    scanf("%d",&ir);


    calcularDeducoes(ir);

    printf("Deduções: %d",d);

}

void calcularVantagens(int SH, int NH, int NF, int VF){
    sb = SH*NH;
    sf = NF * VF;
    v = sb + sf;
}

void calcularDeducoes(int IR){
    INSS = sb * 0.08;
    IRPF = sb * IR;
    d = INSS + IRPF;
}
