#include <stdio.h>
void modifica(int *x, int *y, int *z);

int main(){
	int a, b, c; //variaveis
	int *x, *y, *z; //ponteiros
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	x = &a;
	y = &b;
	z = &c;
	
	modifica(x,y,z);
	
	printf("a:%d b:%d c:%d",a,b,c);
	
	return 0;
}

void modifica(int *X, int *Y, int *Z){
	*X = *X + 100;
	*Y = *Y + 100;
	*Z = *Z + 100;
}
