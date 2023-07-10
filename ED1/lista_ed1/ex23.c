#include <stdio.h>
#include <stdlib.h>

int main(){
	system("color 0f");
	int num, num1, num2, num3;
   	printf("Digite um numero inteiro de 3 digitos positivo: ");
   	scanf("%d", &num);
   	
	if (num > 10) {
    	num1 = num%10;
	   	num = num/10;
	   	num2 = num%10;
	   	num = num/10;
	   	num3 = num%10;
	   	num = num/10;
   	}
   	
   printf("Número invertido: %d%d%d\n", num1, num2, num3);
   return 0;
}
