#include <stdio.h>
double *EnBuyukDegerinAdresi(double dizi[],int n);
int main(){
	double dizi[]={3.3,5,3.2,1.1,6.5,88.9};
	short i;
	for(i=0;i<6;i++){
		printf("%d.eleman:%.2lf----->%d.adreste\n",i+1,dizi[i],&dizi[i]);
	}
	double *pdeger=EnBuyukDegerinAdresi(dizi,6);
	printf("En buyuk deger %.2lf\nAdresi:%d",(*pdeger),pdeger);
	return 0;
	
}

double *EnBuyukDegerinAdresi(double dizi[],int n){
	double *pEleman;
	short i;
	pEleman=dizi;
	for(i=0;i<n;i++){
		if(dizi[i]>(*pEleman)){
			pEleman= &dizi[i];
		}
	}
	return pEleman;
}
