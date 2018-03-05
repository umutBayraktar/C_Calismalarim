#include <stdio.h>
#include <string.h>//string fonksiyonlarý için
int main(){
	
	int strcmp(char *dizi1,char* dizi2);*//dizi 1 ile dizi2yi karþýlaþtýrýr eðer eþitse 0 dizi1 büyükse pozitif dizi2 büyükse negatif deger döndürür
	char* strcpy(char*dizi1,char*dizi2);// dizi2yi dizi 1e kopyalar
	char *strcat(char*dizi1,char*dizi2);// dizi2 yi dizi1e ekler
	char strrev(dizi);//diziyi ters çevirir NULL karakteri hariç
	int strlen(dizi);//dizinin kaç karakter olduðunu hesaplar
	char*strchr(char* d,char ka);// ka karakterinin d dizisi içinde baþtan itibaren ilk karþýlaþtýðý yeri verir.
	char *strstr(char* dizi1,char*dizi2);//  dizi2 karakter dizisinin dizi1 içinde baþtan itibaren ilk karþýlaþtýðý yeri verir
	char* strlwr(char* dizi);//dizinin tüm karakterlerini küçük harfe çevirir
	char* strupr(char *dizi);//dizinin tüm karakterlerini büyük harfe çevirir
	 
	
	
	
	return 0;
}
