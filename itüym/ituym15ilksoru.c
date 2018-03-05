#include <stdio.h>
int main(){
	int ikiliSayisi,i,enKucuk,enBuyuk;
	scanf("%d",&ikiliSayisi);
	int dizi1[ikiliSayisi],dizi2[ikiliSayisi];
	printf("\n");
	for(i=0;i<ikiliSayisi;i++){
	scanf("%d %d",&dizi1[i],&dizi2[i]);
	}
	enKucuk=dizi1[0];
	enBuyuk=dizi2[0];
	for(i=1;i<ikiliSayisi;i++){
		if(dizi1[i]>=enKucuk&&dizi1[i]<=enBuyuk)
		{
				enKucuk=dizi1[i];
		}
		if(dizi2[i]<=enBuyuk&&dizi2[i]>=enKucuk)
		{
				enBuyuk=dizi2[i];
		}			
	}
	printf("%d %d",enKucuk,enBuyuk);
	return 0;
}
