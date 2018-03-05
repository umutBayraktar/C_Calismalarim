#include <stdio.h>
#include <string.h>
int main(){
	char mesaj[]="Merhaba";
	char isim[10];
	printf("Adinizi giriniz:");
	scanf("%10s",isim);
//	gets(isim);
	strcat(mesaj,isim);
	printf("%s",mesaj);
	return 0;
}
