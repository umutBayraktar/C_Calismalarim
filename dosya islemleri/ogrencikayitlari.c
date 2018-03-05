//dosya fonksiyonlar�
/*
	fopen():dosya a�ar
	fclose():dosya kapat�r 
	putc(): dosyaya bir karakter yazar
	getc() dosyadan bir karakter okur
	feof():dosyan�n sonuna gelindi�ini sorgular
	fprintf(): dosya formatl� veri yazar  yani %d li falan
	fscanf(): dosyadan formatl� veri okur
	fputs():dosyaya karakter dizisi yazar
	fgets():dosyadan karakter dizisi okur
	fwrite() :dosyaya dizi yazar san�r�m yap� falan da yaz�yordu
	fread():dosyadan dizi okur san�r�m yap� falan da okuyordu
*/
#include <stdio.h>
// hadi yap� da kullanal�m :)
 	typedef struct{
 		char isim[12];
 		int numara,dersnotu;
	 }OGRENCI;
int main(){
	FILE * kayitlar;
	OGRENCI o[5]; //yap� veri t�r�nde de dizi oluyormu� :D deneyimlemi� olduk
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
