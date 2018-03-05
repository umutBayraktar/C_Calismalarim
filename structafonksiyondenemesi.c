#include <stdio.h>
int topla(int a,int b);

struct Matematik{ // structýmýzý oluþturuyoruz
	int birinciSayi;
	int ikinciSayi;
	int toplam;
	int(*ptopla)(int,int); // strcut içerisinde fonksiyon pointerý tanýmlýyoruz
};
int main(){
	struct Matematik a;
	a.ptopla=topla;// pointerýmýza fonksiyon atýyoruz
	a.toplam=a.ptopla(3,5);  // fonksiyonumuzu çalýþtýrýyoruz
	printf("Deneme Islemimiz:%d\n",a.toplam); //toplamý yazdýrdýk
	// biraz daha deðiþik yazalým
	//------------------------------------
	printf("Birinsi Sayiyiy Giriniz:");
	scanf("%d",&a.birinciSayi);
	printf("\nIkinci Sayiyi Giriniz:");
	scanf("%d",&a.ikinciSayi);
	printf("\nBirinci sayi ile ikinci Sayinin Toplami:%d",a.ptopla(a.birinciSayi,a.ikinciSayi));
	
	return 0;
}
int topla(int a,int b){
	return a+b;
}
