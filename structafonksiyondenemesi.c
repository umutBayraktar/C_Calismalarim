#include <stdio.h>
int topla(int a,int b);

struct Matematik{ // structımızı oluşturuyoruz
	int birinciSayi;
	int ikinciSayi;
	int toplam;
	int(*ptopla)(int,int); // strcut içerisinde fonksiyon pointerı tanımlıyoruz
};
int main(){
	struct Matematik a;
	a.ptopla=topla;// pointerımıza fonksiyon atıyoruz
	a.toplam=a.ptopla(3,5);  // fonksiyonumuzu çalıştırıyoruz
	printf("Deneme Islemimiz:%d\n",a.toplam); //toplamı yazdırdık
	// biraz daha değişik yazalım
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
