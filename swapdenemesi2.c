#include <stdio.h>
void swap(int ilkDegisken,int ikinciDegisken);
void pswap(int *ilkDegisken,int *ikinciDegisken);
int main(){
	int deg1=5,deg2=10;
	swap(deg1,deg2);
	pswap(&deg1,&deg2);
	return 0;
}
void swap(int ilkDegisken,int ikinciDegisken){
	int temp;
	printf("%d\t%d",ilkDegisken,ikinciDegisken);
	temp=ilkDegisken;
	ilkDegisken=ikinciDegisken;
	ikinciDegisken=temp;
	printf("\n%d\t%d",ilkDegisken,ikinciDegisken);
}
void pswap(int *ilkDegisken,int *ikinciDegisken){
	int temp;
	printf("%d\t%d",*ilkDegisken,*ikinciDegisken);
	temp=*ilkDegisken;
	*ilkDegisken= *ikinciDegisken;
 	*ikinciDegisken=temp;
 	printf("\n%d\t%d",*ilkDegisken,*ikinciDegisken);
 }
