#include <stdio.h>
int topla(int a,int b);

struct Matematik{ // struct�m�z� olu�turuyoruz
	int birinciSayi;
	int ikinciSayi;
	int toplam;
	int(*ptopla)(int,int); // strcut i�erisinde fonksiyon pointer� tan�ml�yoruz
};
int main(){
	struct Matematik a;
	a.ptopla=topla;// pointer�m�za fonksiyon at�yoruz
	a.toplam=a.ptopla(3,5);  // fonksiyonumuzu �al��t�r�yoruz
	printf("Deneme Islemimiz:%d\n",a.toplam); //toplam� yazd�rd�k
	// biraz daha de�i�ik yazal�m
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
