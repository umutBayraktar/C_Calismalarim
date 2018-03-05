#include <stdio.h>
#include <stdlib.h>
 void diziBuyult(int dizi[],int boyut,int artis);
int main(){
	int a[3]={1,2,3};
	diziBuyult(a,3,5);
	int i;
	for(i=0;i<8;i++){
		a[i]=10;
		printf("%d\n",&a[i]);
	}
}

 void diziBuyult(int dizi[],int boyut,int artis){
 	int tempdizi[boyut+artis];
 	dizi=tempdizi;
 }

