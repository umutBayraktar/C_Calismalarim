#include <stdio.h>
#include <stdlib.h>
int main(){
	int matris1[2][1]={{3},
					   {5}};
	int matris2[1][2]={6,4};
	int carpimMatrisi[2][2];
	/*
	matrislerin �arpp�m�nda 1.sat�r�n elemanlar� ile birinci s�tunun elemanlar�n� �arp�p toplay�
	1.sat�r 1.s�tun eleman�n� elde ediyoruz 
	mesela 
	bu �rnekteki 1.sat�r 1.s�tun eleman�:3*6=18 
	matrisler �rne�in
	2 3 5      7 5 1
	1 2 3      6 4 2 
	           2 3 1  olays�  1. sat�r elemanlar� 2,3,5   2.matrisin 1. s�tun elemanlar� 7,6,2 olsu�undan 
	           matrisimizin 1.sat�r 1.s�tun eleman�: 2*7 + 3*6 + 5*2 olacakt�.=42
	
	*/
	int i,j,k,toplam=0;
	//ixk l�k bir matris kxj lik bir matris elde etti�imiz yeni matris ixj lik olmal�
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
