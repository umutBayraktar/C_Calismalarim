#include <stdio.h>
#include <string.h>//string fonksiyonlar� i�in
int main(){
	
	int strcmp(char *dizi1,char* dizi2);*//dizi 1 ile dizi2yi kar��la�t�r�r e�er e�itse 0 dizi1 b�y�kse pozitif dizi2 b�y�kse negatif deger d�nd�r�r
	char* strcpy(char*dizi1,char*dizi2);// dizi2yi dizi 1e kopyalar
	char *strcat(char*dizi1,char*dizi2);// dizi2 yi dizi1e ekler
	char strrev(dizi);//diziyi ters �evirir NULL karakteri hari�
	int strlen(dizi);//dizinin ka� karakter oldu�unu hesaplar
	char*strchr(char* d,char ka);// ka karakterinin d dizisi i�inde ba�tan itibaren ilk kar��la�t��� yeri verir.
	char *strstr(char* dizi1,char*dizi2);//  dizi2 karakter dizisinin dizi1 i�inde ba�tan itibaren ilk kar��la�t��� yeri verir
	char* strlwr(char* dizi);//dizinin t�m karakterlerini k���k harfe �evirir
	char* strupr(char *dizi);//dizinin t�m karakterlerini b�y�k harfe �evirir
	 
	
	
	
	return 0;
}
