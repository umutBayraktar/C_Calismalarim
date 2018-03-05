#include <stdio.h>
int main(){
	int dizi1[10]={1,2,3,4,5,6,7,8,9,10},i,*ptrdizi;
	ptrdizi=dizi1;
	printf("dizi1+i\t\tptrdizi++\n");
	for(i=0;i<10;i++){
		printf("%d\t\t",dizi1+i);
	//	printf("%d\t\t",dizi1++);
		printf("%d\t\t",ptrdizi++);
		printf("\n\n");
	}
	return 0;
}
