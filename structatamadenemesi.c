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
	a1.Yas=10; // a1 için atama yaptýk
	a1.TCKimlikNo=321;
	a2=a1;// structlarý eþitledik
	printf("%s \n %s\n",a2.Isim,a2.SoyIsim); // a2 nin verilerini yazdýrýyoruz ama a1'e atadýðýmýz deðerler yazýyor
	printf("%d \n %d",a2.Yas,a2.TCKimlikNo);
	return 0;
}
