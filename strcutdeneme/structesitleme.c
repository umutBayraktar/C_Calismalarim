
#include <stdio.h>
typedef struct{
	int Yas;
	int Kilo;
	int Boy;
}Kisi;
int main(){

	Kisi a={.Yas=20,.Kilo=80,.Boy=180},b={.Yas=30,.Kilo=65,.Boy=165};
	printf("a nin yasi:%d\na nin Kilosu %d \na nin Boyu:%d\n",a.Yas,a.Kilo,a.Boy);
	printf("b nin yasi:%d\nb nin Kilosu %d \nb nin Boyu:%d\n",b.Yas,b.Kilo,b.Boy);
	printf("a nin adresi:%d\n",&a);
	printf("b nin adresi:%d",&b);
	printf("\n\na=b\n\n");
	a=b;
	printf("\na nin adresi:%d\n",&a);
	printf("\nb nin adresi:%d\n",&b);
	printf("a nin yasi:%d\na nin Kilosu %d \na nin Boyu:%d\n",a.Yas,a.Kilo,a.Boy);
	printf("b nin yasi:%d\nb nin Kilosu %d \nb nin Boyu:%d\n",b.Yas,b.Kilo,b.Boy);
	printf("b.Boy=190 atamasý yaptýk\n ");
	b.Boy=190;
	printf("a nin boyu:%d",a.Boy);
	return 0;
}
