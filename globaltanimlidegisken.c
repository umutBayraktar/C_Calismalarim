#include <stdio.h>
int k=10;//global tan�mlanm�� bir k de�i�keni
void kYazdir();
void kDegistir();
int main(){
	printf("%d\n",k);// direk yazd�rd�k
	k=200;//ana fonksiyonda de�itirdik
	kYazdir();// ba�ka fonksiyonda da k etkilendi
	kDegistir();//ba�ka fonksiyonda de�i�tirdik
	printf("%d\n",k);// ana fonksiyonda da k etkilendi
	return 0;
	// �zetle
	//!global tan�mlanan bir de�i�kende ne de�i�iklik olursa program�n devam�nda da o devam eder
	//bu y�zden her yerden eri�im engellenmeye �al���l�yor.
}
void kYazdir(){
	printf("Fonksiyonun icinde k :%d\n",k);
}
void kDegistir(){
	k=365;
	printf("Fonksiyonun icinde degismis k:%d\n",k);
}
