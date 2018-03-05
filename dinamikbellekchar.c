#include <stdio.h>
#include <stdlib.h>
char *altDiziBul(char *dizi,int boyut);
int main(){
	int i;
	char*dizi="denemedeneme";
	for(i=0;i<12;i++){
		printf("%s\n",altDiziBul(dizi,i));
	}
		return 0;
}

char *altDiziBul(char *dizi,int boyut){
	char *temp;
	int i;
	temp=(char*)malloc(boyut*sizeof(char));
	for(i=0;i<boyut;i++){
		temp[i]=dizi[i];
	}
	temp[boyut]='\0';
	return temp;
}
