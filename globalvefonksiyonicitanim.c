#include <stdio.h>
int degisken=10;
int main(){
	int degisken=25,k=5;
	printf("%d\n",degisken);// deðiþkenler çakýþýp program hata vermedi 
	// çünkü C dili daha yerel olana öncelik verir
	if(k<10){
		int degisken=10;
		printf("%d\n",degisken);
	}
	printf("%d",degisken); // deðiþken yine 25 çünkü if'te olan if'te kaldý :D
	return 0;
}
