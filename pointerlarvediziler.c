#include <stdio.h>
#include <stdlib.h>
int main(){
	int dizi[]={1,2,3,9,8,7,6,5,4,22},i;
	int * pdizi;
	for(i=0;i<10;i++){
		printf("%d\t",dizi[i]);
	}
	pdizi=dizi;
	printf("\nPointer ile adres yazdirma(tamsayi)\n");
	for(i=0;i<10;i++){
		printf("%d\t",(pdizi+i));
	}
	printf("\nPointer ile adres yazdirma hexadecimal olarak");
	for(i=0;i<10;i++){
		printf("%p\n",(pdizi+i));
	}
	printf("Pointer ile deger yazdirma");
	for(i=0;i<10;i++){
		printf("%d\t",*(pdizi+i));
	}
	
	//degerleri pointer ile deðiþtirelim
	printf("\nPointer ile degistiriyoruz\n");
	for(i=0;i<10;i++){
		*(pdizi+i)+=11;
	}
	printf("Yeni dizi:\n\n");
	for(i=0;i<10;i++){
		printf("%d\t",*(pdizi+i));
	}
	printf("\n dizi ile ");
	
	for(i=0;i<10;i++){
	
	printf("%d\t",dizi[i]);
}
	
	return 0;
}
