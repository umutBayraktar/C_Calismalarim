#include <stdio.h>
int main(){
	char *ptrchar;
	int *ptrint;
	printf("%d\n",&ptrchar);// int +1le ayn� adrei g�steriyor �uan 
	//bu tip kullan�mlara dikkat etmek laz�m en az�ndan benim bilgisayar�mda ayn� adreste 
	printf("%d\n",&ptrchar+1);
	printf("%d\n",&ptrint);
	printf("%d\n",&ptrint+1);

	return 0;
}
