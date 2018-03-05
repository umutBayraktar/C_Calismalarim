#include <stdio.h>
 int *DiziBoyutuBuyult(int*dizi,int n);
int main(){
	int i,a[5]={1,2,3,4,5};
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	DiziBoyutuBuyult(a,10);
	printf("\n\n");
	for(i=0;i<15;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}


 int *DiziBoyutuBuyult(int*dizi,int n){
 	int i,j;
 	void *temp=dizi;
	for(i=0; ;i++){
		if(dizi[i+1]!=dizi[i])
			continue;
		else if(dizi[i+1]==dizi[i])
		continue;
		else{
			for(j=1;j<=n;j++){
			temp+(i+1)=&dizi[i];
			}
		break;
		}
	}
	return (int*)temp;
 }
