#include <stdio.h>
int main(){
	char *ptrSayi;
	int sayi=300;
	ptrSayi=&sayi;
	printf("%d",*ptrSayi);
	// 44 de�erini d�nd�rd� ��nk� char 1 byte l�k yer kaplar 
	//ve bu da maksimum 256 say�sal de�erini alabilece�i anlam�na gelir
	//300 mod 256 =44 de�erini d�nd�rd�.
	// bunlar� yorumdan kald�r�rsak de�er 256 olur
	 int sayi2=256;
	ptrSayi=&sayi2; // art�k sayi2 yi tutuyor 256 verir diyodum ama 0 verdi ��nk�
	 printf("\n%d",*ptrSayi);
	// 0-255 aras�n� al�r
	sayi2=255; 
	 printf("\n%d",*ptrSayi); // bu sefer de -1 de�erini ald�k :)
	 //de�eri al�r derken bile ald�ramad�k.Do�ru hesap yapsak bile 
	 /*
	  !!!!!!!!!
	  pointer'a tuttu�u de�i�kenin verir tipini verelim.
	 */
	// bu arada bak altta warning verdi.
	return 0; // 00 dedi�imizde de �al��t�rd�
}
