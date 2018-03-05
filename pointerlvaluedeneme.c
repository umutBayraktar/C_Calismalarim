#include <stdio.h>
int main(){
	int *ptrdegisken,degisken=10,**pptrdegisken;
	ptrdegisken=&degisken;
	pptrdegisken=&ptrdegisken;
	printf("degisken:%d\n",degisken);
	printf("*ptr:%d\n",*ptrdegisken);
	printf("pptr:%d\n",ptrdegisken);
	printf("*pptr:%d\n",*pptrdegisken);
	printf("pptr:%d\n",pptrdegisken);
	printf("**pptr:%d\n",*(*pptrdegisken));
  *pptrdegisken=15204;						
	printf("\n%d",ptrdegisken);
	printf("\n%d",*ptrdegisken);
	return 0;
}
