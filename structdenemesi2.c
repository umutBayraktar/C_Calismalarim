#include <stdio.h>
#include <string.h>
struct Kisi{
	char Ad[10];
	char Soyad[10];
	int Yas;
};



int main(){
	char Ad[10]="Umut";
	struct Kisi Yusuf;
	strcpy(Yusuf.Ad,"Yusuf");
	printf("%s",Yusuf.Ad);
	printf("\n%s",Ad);
	return 0;
}
