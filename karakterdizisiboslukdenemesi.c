#include <stdio.h>
int main(){
	//char dizi[50];
	char *dizi="umut bayraktar  merhaba";
	char dizi2[50];
	int i;
	gets(dizi2);
	while(dizi[i])
		{
			printf("%c",dizi[i]);
			i++;
		}
	printf("\n\n\n\t");
	while(dizi2[i]){
		printf("%c",dizi[i]);
		i++;
	}
	return 0;
}
