#include <stdio.h>
#include <stdlib.h>
int main(){
	int matris1[2][3]={{2,3,5},
					   {1,2,3}};
	int matris2[3][3]={{7,6,1},{6,4,2},{2,3,1}};
	int carpimMatrisi[2][3];
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
	for(i=0;i<2;i++){// 1.matrisin satýrlarýný cevirir
		for(j=0;j<3;j++){//2.matrisin sürunlarýný çevirir
			for(k=0;k<3;k++){//iki matrisin ortak sayýsaki 1.nin sütun 2.nin satýr sayýsýný çevirir
				toplam+=matris1[i][k]*matris2[k][j];
			//	carpimMatrisi[i][j]=toplam;     deðer burada da ataabilir ama her seferinde atmak belki programý yavaþlatýr
			}
			carpimMatrisi[i][j]=toplam;
			toplam=0;//önceki veri ile toplamamasý için toplam deðerini sýfýrladýk
			}
		}
	/*
	çalýþma mantýðý:
	en dýþtaki for a girdik birinci matrisin 1.satýrýndayýz,
	yani 1.satýr elemanlarý ile uðraþýyoruz.Hemen sonra ikinci matrise girdik,onun da sütun sayýsý kadar döneceðiz
	iþlem yapýlmadan 3.fora girdik. Buradaki k birinci matrisin sütun sayýsý ,2.matrisin satýr sayýsý
	bu forun içinde 
	toplam+=matris1[i][k]*matris2[k][j];
	derken 
	i ve j deðiþmezken k sürekli deðiþiyor 
	1.matrisin 1.satýrýndayýz,2.matrisin 1.sütunundayýz matris çarpýmýndaki gibi birinin satýr elemanlarýyla diðerinin sütun elemanlarý çarpýlýyor
	umarým anlatabilmiþimdir.  
	
	
	*/
	
	for(k=0;k<2;k++){
		for(i=0;i<3;i++){
			printf("%d\t",carpimMatrisi[k][i]);//satýr elemanlarýný yazdýrýyoruz
		}
		printf("\n\n");//bir alt satýra geçmek için
}
	return 0;
}
