#include <stdio.h>
extern kisi umut;
int main(){
	umut.ad="Umut";
	umut.soyad="Bayraktar";
	umut.boy=171;
	umut.kilo=80;
	umut.yas=19;
	printf("%10s %10s\n",umut.ad,umut.soyad);
	printf("%10d",umut.yas);
	print("%10d %10d",umut.boy,umut.kilo);
	return 0;
}
