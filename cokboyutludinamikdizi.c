//�ok boyutlu dinamik dizi
#include <stdio.h>
#include <stdlib.h>
int main(){
	int **matris;//i�aret�i g�sterne i�aret�i
	int satir,sutun;
	int i,s,k;
	printf("Matrisin satir sayisini giriniz:");
	scanf("%d",&satir);
	printf("Matrisin sutun Sayisini Giriniz:");
	scanf("%d",&sutun);
	matris=(int**)calloc(satir,sizeof(int));//i�aret�i g�steren i�aret�iye d�n��t�r�yor
											//(int*) i�aret�iye d�n��t�r�yor 
											//(int) interega d�n��t�r�yor
	for(i=0;i<satir;i++){
		matris[i]=(int*)calloc(sutun,sizeof(int));	
	}
	for(s=0;s<satir;s++){
		for(k=0;k<sutun;k++){
			printf("matrisin [%d][%d].elemanini giriniz",s,k);
			scanf("%d",&matris[s][k]);
		}
	}
	printf("Girilen Matris:\n");
	for(s=0;s<satir;s++){
		for(k=0;k<sutun;k++){
			printf("%d\t",matris[s][k]);
		}
		printf("\n");
	}
	
	//matrisi bo�alt�yoruz
	for(i=0;i<satir;i++){
		free((void*)matris[i]);
	}
	free((void*)matris);
	
	return 0;
}
