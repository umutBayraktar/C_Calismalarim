#include <stdio.h>
#include <string.h>
int main(){
	char *d1="asdfg",*d2="asdfghjkl�i;";
	if(strcmp(d1,d2)==0){
		printf("dizi boyular� esit");
	}
	else if(strcmp(d1,d2)>0){
		printf("dizi 1 dizi 2 den b�y�k");
	}
	else{
		printf("dizi2 dizi1 den buyuk");
	}
	
	
	return 0;
}
