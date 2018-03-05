#include <stdio.h>
#include <stdlib.h>
int main(){
	int matris1[2][1]={{3},
					   {5}};
	int matris2[1][2]={6,4};
	int carpimMatrisi[2][2];
	/*
	matrislerin çarppýmýnda 1.satýrýn elemanlarý ile birinci sütunun elemanlarýný çarpýp toplayý
	1.satýr 1.sütun elemanýný elde ediyoruz 
	mesela 
	bu örnekteki 1.satýr 1.sütun elemaný:3*6=18 
	matrisler örneðin
	2 3 5      7 5 1
	1 2 3      6 4 2 
	           2 3 1  olaysý  1. satýr elemanlarý 2,3,5   2.matrisin 1. sütun elemanlarý 7,6,2 olsuðundan 
	           matrisimizin 1.satýr 1.sütun elemaný: 2*7 + 3*6 + 5*2 olacaktý.=42
	
	*/
	int i,j,k,toplam=0;
	//ixk lýk bir matris kxj lik bir matris elde ettiðimiz yeni matris ixj lik olmalý
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<1;k++){
				toplam+=matris1[i][k]*matris2[k][j];
				carpimMatrisi[i][j]=toplam;
				
			}
			toplam=0;
			}
		}
	
	
	for(k=0;k<2;k++){
		for(i=0;i<2;i++){
			printf("%d\t",carpimMatrisi[k][i]);
		}
		printf("\n\n");
}
	return 0;
}
