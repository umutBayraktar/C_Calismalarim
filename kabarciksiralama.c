#include <stdio.h>
#include <stdlib.h>
void kabarcikSiralamaYap(int *dizi);
int main(){
	int i,dizi[10]={1,5,2,10,23,65,26,11,0,36};
	for(i=0;i<10;i++){
		printf("%d\t",dizi[i]);	
	}
	kabarcikSiralamaYap(dizi);
	
	printf("\n\n\n");
	for(i=0;i<10;i++){
		printf("%d\t",dizi[i]);
	}
	
	
	return 0;
}
void kabarcikSiralamaYap(int *dizi){//dizi alan fonksiyon i�lemler adreste yap�ld��� i�in de�er d�nd�rmsine gerek yok.
	int i,j,gecicieleman;
	
	for(j=0;j<9;j++){// bu for her bir eleman� t�m elemanlarla kar��la�t�rmak i�in olu�turulmu� bir d�ng�
	
	for(i=0;i<9;i++){
		if(dizi[i]>dizi[i+1]){
			gecicieleman=dizi[i];
			dizi[i]=dizi[i+1];
			dizi[i+1]=gecicieleman;
		}
	}	
				}
	
	
}
