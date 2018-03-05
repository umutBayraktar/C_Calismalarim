#include <stdio.h>
int main(){
	int i,j,girilenSayi;
	printf("Dik ucgenin kenar uzunlugunu giriniz:");
	scanf("%d",&girilenSayi);
	for(i=1;i<=girilenSayi;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}



