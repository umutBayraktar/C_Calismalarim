#include <stdio.h>
#include <string.h>
int main(){
	char *d1="asdfg",*d2="asdfga";
	if(strcmp(d1,d2)==0){
		printf("diziler ayni");
	}
	else if(strcmp(d1,d2)>0){
		printf("aaa");
	}
		if(strcmp(d1,d2)<0){
		printf("bbb");
	}
	
	
	
	return 0;
}
