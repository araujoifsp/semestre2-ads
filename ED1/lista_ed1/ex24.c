#include <stdio.h>
#include <stdlib.h>

int main(){
	system("color 0f");
	int num, num1, num2, num3, num4;
   	printf("Digite um numero inteiro de 4 digitos: ");
   	scanf("%d", &num);
   	if (num > 10) {
    	num4 = num%10;
	   	num = num/10;
	   	num3 = num%10;
	   	num = num/10;
	   	num2=num%10;
	   	num=num/10;
	   	num1=num%10;
	   	num=num/10;
   	}
   	printf("\n%d\n%d\n%d\n%d", num1, num2, num3,num4);
	return 0;
}
