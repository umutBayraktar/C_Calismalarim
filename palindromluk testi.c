#include <stdio.h>
#include <string.h>
int main(){
	//palindromlk kontrol� tersten okunu�u ayn� olan kellime tat gibi

	char dizi1[10],dizi2[10];
	printf("test i�in bir dizi giriniz:");
	scanf("%10s",dizi1);
	
	strcpy(dizi2,strrev(dizi1));
//program hatal� 	
	if(strcmp(dizi1,dizi2)==0){
		printf("kelime palindromiktir");
	}
	else{
		printf("Kelime palindromik de�ildir");
}
	return 0;
}
