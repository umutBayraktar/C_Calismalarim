#include <stdio.h>
int main(){
	char *ptrSayi;
	int sayi=300;
	ptrSayi=&sayi;
	printf("%d",*ptrSayi);
	// 44 deðerini döndürdü çünkü char 1 byte lýk yer kaplar 
	//ve bu da maksimum 256 sayýsal deðerini alabileceði anlamýna gelir
	//300 mod 256 =44 deðerini döndürdü.
	// bunlarý yorumdan kaldýrýrsak deðer 256 olur
	 int sayi2=256;
	ptrSayi=&sayi2; // artýk sayi2 yi tutuyor 256 verir diyodum ama 0 verdi çünkü
	 printf("\n%d",*ptrSayi);
	// 0-255 arasýný alýr
	sayi2=255; 
	 printf("\n%d",*ptrSayi); // bu sefer de -1 deðerini aldýk :)
	 //deðeri alýr derken bile aldýramadýk.Doðru hesap yapsak bile 
	 /*
	  !!!!!!!!!
	  pointer'a tuttuðu deðiþkenin verir tipini verelim.
	 */
	// bu arada bak altta warning verdi.
	return 0; // 00 dediðimizde de çalýþtýrdý
}
