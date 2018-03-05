// dinamik bellekte dizi elemanlar� toplama
#include <stdio.h>
#include<stdlib.h>// dinamik bellek fonksiyonlar� standar k�t�phane dedi�imiz bu �t�phanede
int main(){
	int *dinamikdizi;
	int elemanSayisi,i;
for( ; ;){
		printf("D�zinin eleman sayisini giriniz:");
	scanf("%d",&elemanSayisi);
	if(elemanSayisi==15)
			break;
	dinamikdizi=(int*)malloc(elemanSayisi*sizeof(int));
	/*
		mallo fonksiyonu void i�aret�i d�nd�rd��� i�in (int*) ile dizimizi integer tipine d�n��t�rd�k
		mallok fonksiyonu ne kadar yer a�aca��n� al�yor her bir elemna �in sizeof(intl) lik yer a�mas� gerekir
		-��nk� dizinin elemanlar�n�n veri tipi sabittir-
		bu nedenle bizim elemanSayisi *sizeof(int) lik yere ihtiyac�m�z var  
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
