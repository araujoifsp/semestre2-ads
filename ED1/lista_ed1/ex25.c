#include <stdio.h>
#include <stdlib.h>

int main(){
	int seg,min,hor;
	system("color 0f");
	printf("Digite um valor em sagundos: ");
	scanf("%d",&seg);
	hor = seg / 3600;
	min = (seg - (hor*3600))/60;
	seg = seg - (hor*3600)-(min*60);
	printf("%dh: %dm: %ds: ", hor, min, seg);
	return 0;
}
