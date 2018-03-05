#include <stdio.h>
int main(){
	char *ptrchar;
	int *ptrint;
	printf("%d\n",&ptrchar);// int +1le ayný adrei gösteriyor þuan 
	//bu tip kullanýmlara dikkat etmek lazým en azýndan benim bilgisayarýmda ayný adreste 
	printf("%d\n",&ptrchar+1);
	printf("%d\n",&ptrint);
	printf("%d\n",&ptrint+1);

	return 0;
}
