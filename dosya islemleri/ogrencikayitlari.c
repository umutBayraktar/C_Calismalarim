//dosya fonksiyonlarý
/*
	fopen():dosya açar
	fclose():dosya kapatýr 
	putc(): dosyaya bir karakter yazar
	getc() dosyadan bir karakter okur
	feof():dosyanýn sonuna gelindiðini sorgular
	fprintf(): dosya formatlý veri yazar  yani %d li falan
	fscanf(): dosyadan formatlý veri okur
	fputs():dosyaya karakter dizisi yazar
	fgets():dosyadan karakter dizisi okur
	fwrite() :dosyaya dizi yazar sanýrým yapý falan da yazýyordu
	fread():dosyadan dizi okur sanýrým yapý falan da okuyordu
*/
#include <stdio.h>
// hadi yapý da kullanalým :)
 	typedef struct{
 		char isim[12];
 		int numara,dersnotu;
	 }OGRENCI;
int main(){
	FILE * kayitlar;
	OGRENCI o[5]; //yapý veri türünde de dizi oluyormuþ :D deneyimlemiþ olduk
	int i;
	if((kayitlar=fopen("ogrencibilgileri.txt","w+"))==NULL){
		puts("Dosya acim islemi basarisiz!");
		exit(1);
	}
	for(i=0;i<5;i++){
		printf("Ogrencinin adi:");
		scanf("%12s",&o[i].isim);
		printf("\nOgrencinin numarasi:");
		scanf("%d",&o[i].numara);
		printf("\nOgrencinin ders notu:");
		scanf("%d",&o[i].dersnotu);
		fprintf(kayitlar,"%12s %12d %12d\n",o[i].isim,o[i].numara,o[i].dersnotu);	
	}
	printf("Kayitlar basarili");
	fclose(kayitlar);
	
	return 0;
}
