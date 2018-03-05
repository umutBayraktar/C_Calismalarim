#include <stdio.h>
extern struct  umut a;
//extern int a;
int main(){
	//struct umut a;
	//printf("%d",a);
	//umut.ad="Umut";
//	umut.soyad="Bayraktar";
//	umut.boy=171;
//	umut.kilo=80;
//	umut.yas=19;
	printf("%10s %10s\n",a.ad,a.soyad);
	printf("%10d",a.yas);
	print("%10d %10d",a.boy,a.kilo);
	return 0;
}
