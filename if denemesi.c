#include <stdio.h>
int main(){
	
	int a;
	printf("A sayisini giriniz:");
	scanf("%d",&a);
	//if(a==5)printf("Sayi 5");printf("Sayi 5 degil");
	// say�y� be� girersek Sayi 5 Sayi 5 degil yaz�yor
	if(a==5)printf("Sayi 5");else printf("Sayi 5 Degil");
	// bu kodta 5 girdi�imizde sadece 5 yaz�yor 
	/*
		Buradaki temel mant�k if ve else deyimleri kendilerinden sonra gelen 1 sat�r� s�sl� parantez olmasa da
		i�leme al�rlar.Bir tek sat�r yazd�rd�k.�lk kodda ilk sat�r� a==5 ko�uluyla konrtol ediyordu
		fakat alt sat�r� her t�r� i�liyordu.
	*/
	return 0;
}
