#include <stdio.h>
int main(){
	int i,dizi[5]={1,2,3,4,5};
	for(i=0;i<5;i++){
		printf("%d\t",dizi[i]);
	}
	dizi[4]+=5;
	printf("\n\nDegisimden sonra\n");
	for(i=0;i<5;i++){
		printf("%d.indis: %d\n",i,dizi[i]);
	}
	
	return 0;
}
