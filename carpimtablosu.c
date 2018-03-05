#include <stdio.h>
int main(){
	int i,h;
	for(i=0;i<=10;i++){
		for(h=0;h<=10;h++){
			printf("%dx%d=%d\t",i,h,i*h);
		}
		printf("\n");
	}
		
	return 0;
}


