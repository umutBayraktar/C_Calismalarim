#include <stdio.h>
int main(){
	int degisken,*ptrDegisken;
	ptrDegisken=&degisken;
	printf("Degisken icin bir deger giriniz:");
	printf("\nPointer kullanarak atamaya calisacagiz:\n\n");
	scanf("%d",ptrDegisken);// pointer zaten adresini tutuyor
	printf("%d x 2= %d\n",degisken,degisken*2); // deðiskene yazdýrdý
	printf("%d x 5= %d",degisken,*ptrDegisken*5);
	// evet iki tane yýldýz kullandýk pointerýn önündeki yýldýz yönlendirme operatörü
	// 5 in önündeki ise çarpma
	//bunlar birbirine karýþmadýlar çünkü yönlendirme operatörü tek iþlenen alýyor
	// çarpma ise 2 iþlenen alýyor ama böyle karýþýklýk oluþturmaya gerek yok bence
	// parantezle falan yapsaydýk kodun daha çok okunur olabileceðini düþünüyorum
	//printf("%d x 5= %d",degisken,*ptrDegisken*5);
	//printf("%d x 5= %d",degisken,(*ptrDegisken)*5);
	return 0;
}
