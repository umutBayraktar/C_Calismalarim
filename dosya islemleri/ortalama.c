#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE* dosya;
	char isim[10];
	int dersNotu,ogrenciNumarasi,enYuksekNot,enDusukNot,n,toplam;
	float ortalama;
	if((dosya=fopen("ogrenci.txt","r"))==NULL){
		puts("Ogrenci.txt dosyasi acilamadi!");
		exit(1);
	}
	 enYuksekNot= -1000;
	 enDusukNot=1000;
	toplam=0;
	n=0;
	while(n<2){
		fscanf(dosya,"%d %s %d ",&ogrenciNumarasi,isim,&dersNotu);
		if(dersNotu>enYuksekNot){
			enYuksekNot=dersNotu;
		}
		if(dersNotu<enDusukNot){
			enDusukNot=dersNotu;
		}
		if(dersNotu!=0){
			n++;
		}
		toplam+=dersNotu;
	
	}
		fclose(dosya);
		ortalama=(float) toplam/n;
		printf("En yüksek ders notu:%d\n",enYuksekNot);
		printf("En dusuk not:%d\n",enDusukNot);
		printf("Ortalama:%2.f\n",ortalama);
	return 0;
}
