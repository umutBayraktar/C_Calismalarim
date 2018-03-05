// dinamik bellekte dizi elemanlarý toplama
#include <stdio.h>
#include<stdlib.h>// dinamik bellek fonksiyonlarý standar kütüphane dediðimiz bu ütüphanede
int main(){
	int *dinamikdizi;
	int elemanSayisi,i;
for( ; ;){
		printf("DÝzinin eleman sayisini giriniz:");
	scanf("%d",&elemanSayisi);
	if(elemanSayisi==15)
			break;
	dinamikdizi=(int*)malloc(elemanSayisi*sizeof(int));
	/*
		mallo fonksiyonu void iþaretçi döndürdüðü için (int*) ile dizimizi integer tipine dönüþtürdük
		mallok fonksiyonu ne kadar yer açacaðýný alýyor her bir elemna çin sizeof(intl) lik yer açmasý gerekir
		-çünkü dizinin elemanlarýnýn veri tipi sabittir-
		bu nedenle bizim elemanSayisi *sizeof(int) lik yere ihtiyacýmýz var  
	*/
	for(i=0;i<elemanSayisi;i++){
		printf("%d. elemani giriniz:",i+1);
		scanf("%d",dinamikdizi+i);
	}
	printf("\n\n");
	for(i=0;i<elemanSayisi;i++){
		printf("%d\t",dinamikdizi[i]);
	}
	
	free(dinamikdizi);
}
	return 0;
}
