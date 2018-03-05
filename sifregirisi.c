#include <stdio.h>
#include <string.h>
int main(){
	char sifreGirisi[10],*sifre="123456789",isim[10];
	printf("isminizi giriniz:");
	scanf("%10s",&isim);
//	gets(isim);
	printf("Sisteme girmek icin lutfen sifrenizi giriniz:");
	scanf("%10s",sifreGirisi);
	
	if(strcmp(sifreGirisi,sifre)==0){
		printf("Hosgeldiniz %s",isim);
	}
	else{
		puts("Yanlis sifre girisi yaptiniz:");
	}
	
	
	
	return 0;
}
