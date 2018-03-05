#include <stdio.h>
int k=10;//global tanýmlanmýþ bir k deðiþkeni
void kYazdir();
void kDegistir();
int main(){
	printf("%d\n",k);// direk yazdýrdýk
	k=200;//ana fonksiyonda deðitirdik
	kYazdir();// baþka fonksiyonda da k etkilendi
	kDegistir();//baþka fonksiyonda deðiþtirdik
	printf("%d\n",k);// ana fonksiyonda da k etkilendi
	return 0;
	// özetle
	//!global tanýmlanan bir deðiþkende ne deðiþiklik olursa programýn devamýnda da o devam eder
	//bu yüzden her yerden eriþim engellenmeye çalýþýlýyor.
}
void kYazdir(){
	printf("Fonksiyonun icinde k :%d\n",k);
}
void kDegistir(){
	k=365;
	printf("Fonksiyonun icinde degismis k:%d\n",k);
}
