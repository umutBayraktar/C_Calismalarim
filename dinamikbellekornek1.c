// dinamik bellekte dizi elemanlarý toplama
#include <stdio.h>
#include<stdlib.h>// dinamik bellek fonksiyonlarý standar kütüphane dediðimiz bu ütüphanede
int main(){
	int dizi[5],i;
	for(i=0;i<5;i++){
		printf("%d.eleman:",i+1);
		scanf("%d",(dizi+i));
	}
	for(i=0;i<5;i++)	
	 	printf("%o\n",dizi[i]);
	
	return 0;
}
