#include <stdio.h>
#include <stdlib.h>
int main(){
	int matris1[2][3]={{2,3,5},
					   {1,2,3}};
	int matris2[3][3]={{7,6,1},{6,4,2},{2,3,1}};
	int carpimMatrisi[2][3];
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
	for(i=0;i<2;i++){// 1.matrisin sat�rlar�n� cevirir
		for(j=0;j<3;j++){//2.matrisin s�runlar�n� �evirir
			for(k=0;k<3;k++){//iki matrisin ortak say�saki 1.nin s�tun 2.nin sat�r say�s�n� �evirir
				toplam+=matris1[i][k]*matris2[k][j];
			//	carpimMatrisi[i][j]=toplam;     de�er burada da ataabilir ama her seferinde atmak belki program� yava�lat�r
			}
			carpimMatrisi[i][j]=toplam;
			toplam=0;//�nceki veri ile toplamamas� i�in toplam de�erini s�f�rlad�k
			}
		}
	/*
	�al��ma mant���:
	en d��taki for a girdik birinci matrisin 1.sat�r�nday�z,
	yani 1.sat�r elemanlar� ile u�ra��yoruz.Hemen sonra ikinci matrise girdik,onun da s�tun say�s� kadar d�nece�iz
	i�lem yap�lmadan 3.fora girdik. Buradaki k birinci matrisin s�tun say�s� ,2.matrisin sat�r say�s�
	bu forun i�inde 
	toplam+=matris1[i][k]*matris2[k][j];
	derken 
	i ve j de�i�mezken k s�rekli de�i�iyor 
	1.matrisin 1.sat�r�nday�z,2.matrisin 1.s�tununday�z matris �arp�m�ndaki gibi birinin sat�r elemanlar�yla di�erinin s�tun elemanlar� �arp�l�yor
	umar�m anlatabilmi�imdir.  
	
	
	*/
	
	for(k=0;k<2;k++){
		for(i=0;i<3;i++){
			printf("%d\t",carpimMatrisi[k][i]);//sat�r elemanlar�n� yazd�r�yoruz
		}
		printf("\n\n");//bir alt sat�ra ge�mek i�in
}
	return 0;
}
