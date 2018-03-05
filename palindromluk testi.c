#include <stdio.h>
#include <string.h>
int main(){
	//palindromlk kontrolü tersten okunuþu ayný olan kellime tat gibi

	char dizi1[10],dizi2[10];
	printf("test için bir dizi giriniz:");
	scanf("%10s",dizi1);
	
	strcpy(dizi2,strrev(dizi1));
//program hatalý 	
	if(strcmp(dizi1,dizi2)==0){
		printf("kelime palindromiktir");
	}
	else{
		printf("Kelime palindromik deðildir");
}
	return 0;
}
