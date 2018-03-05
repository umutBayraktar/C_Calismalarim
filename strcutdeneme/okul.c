#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define ISIMUZUNLUGU 10
#define SOYISIMUZUNLUGU 15
#define OGRENCISAYISI 2
typedef enum{
	UMUT=0,BERKAY,YASIN,MERT,SAMI,ONUR,MELIH,YUSUF,SERKAN,ERHAN
}OgrIsimler;
typedef struct{
	char Ad[ISIMUZUNLUGU];
	char Soyad[SOYISIMUZUNLUGU];
	uint8_t Sinif;
	uint8_t Not;
	uint32_t Numara;
}Ogrenci;
// notu yazdýrmýyor
int main(){
	int8_t artis;
	OgrIsimler isimler;
	Ogrenci Ogrenciler[OGRENCISAYISI];
	for(artis=0;artis<OGRENCISAYISI;artis++){
			char temp[15];
			 // alabileceði maksimum deðer 15 olduðu için 15lik açtým
			printf("%d. ogrencinin isimini giriniz:",artis+1);
			scanf("%15s",&temp);			
			strcpy(Ogrenciler[artis].Ad,temp);
			printf("%d. ogrencinin soyismini giriniz:",artis+1);
			scanf("%15s",&temp);
			strcpy(Ogrenciler[artis].Soyad,temp);
			printf("%d. ogrencinin notunu giriniz:",artis+1);
			scanf("%ud",&Ogrenciler[artis].Not);
			printf("%d.ogrencinin sinifi:",artis+1);
			scanf("%ud",&Ogrenciler[artis].Sinif);
			printf("%d.ogrencinin numarasi:",artis+1);
			scanf("%ud",&Ogrenciler[artis].Numara);
	}
	printf("\n\n\n\n");
	printf("%s\t",Ogrenciler[UMUT].Ad);
	printf("%s\n",Ogrenciler[UMUT].Soyad);
	printf("%d\t",Ogrenciler[UMUT].Not);
	printf("%ud\n",Ogrenciler[UMUT].Numara);
	return 0;
}
