#include <stdio.h>
#include <string.h>
struct Kisi{
	char Isim[10];
	char SoyIsim[15];
	short Yas;
	int TCKimlikNo;
};

int main(){
	struct Kisi a1,a2;
	strcpy(a1.Isim,"isim1");
	strcpy(a1.SoyIsim,"soyisim1");
	a1.Yas=10; // a1 i�in atama yapt�k
	a1.TCKimlikNo=321;
	a2=a1;// structlar� e�itledik
	printf("%s \n %s\n",a2.Isim,a2.SoyIsim); // a2 nin verilerini yazd�r�yoruz ama a1'e atad���m�z de�erler yaz�yor
	printf("%d \n %d",a2.Yas,a2.TCKimlikNo);
	return 0;
}
