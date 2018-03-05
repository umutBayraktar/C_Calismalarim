#include <stdio.h>>
#include <stdarg.h>
float carp(int n,...);
int main(){
	printf("Carpim:%f\n",carp(3,1,2,3));
	printf("Carpim:%f\n",carp(2,10,14));
	
	printf("Carpim:%f\n",carp(3,3,5,7));
	return 0;
}

float carp(int n,...){
	va_list isaretci;
	va_start(isaretci,n);
	float carpim=1;
	int i;
	for(i=1;i<=n;i++){
		carpim*=va_arg(isaretci,int);
	}
	return carpim;
}
