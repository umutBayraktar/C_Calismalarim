//çok boyutlu dinamik dizi
#include <stdio.h>
#include <stdlib.h>
int main(){
	int **matris;//iþaretçi gösterne iþaretçi
	int satir,sutun;
	int i,s,k;
	printf("Matrisin satir sayisini giriniz:");
	scanf("%d",&satir);
	printf("Matrisin sutun Sayisini Giriniz:");
	scanf("%d",&sutun);
	matris=(int**)calloc(satir,sizeof(int));//iþaretçi gösteren iþaretçiye dönüþtürüyor
											//(int*) iþaretçiye dönüþtürüyor 
											//(int) interega dönüþtürüyor
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
	
	//matrisi boþaltýyoruz
	for(i=0;i<satir;i++){
		free((void*)matris[i]);
	}
	free((void*)matris);
	
	return 0;
}
