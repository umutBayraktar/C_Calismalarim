#include <stdio.h>
int main(){
	char isim[10];
	printf("isim giriniz:");
/*	gets(isim);
	puts(isim);*/  // bu kullan�mda �ok girdi�imizde program bir s�re sonra �al��may� durduruyor
	scanf("%10s",isim);// bu �ekilde kullan�c�n�n maksimum 10 karakter girmesini sa�l�yoruz
	puts(isim);
/*	scanf("%20s",isim);
	puts(isim);             denemek i�in bu kodu da yazd�m 10 elemanl� bir diziye 20 eleman atabildi ve 20 eleman� ekrana yazd�rd�*/
	return 0;
}
