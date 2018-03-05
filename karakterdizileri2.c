#include <stdio.h>
int main(){
	char isim[10];
	printf("isim giriniz:");
/*	gets(isim);
	puts(isim);*/  // bu kullanýmda çok girdiðimizde program bir süre sonra çalýþmayý durduruyor
	scanf("%10s",isim);// bu þekilde kullanýcýnýn maksimum 10 karakter girmesini saðlýyoruz
	puts(isim);
/*	scanf("%20s",isim);
	puts(isim);             denemek için bu kodu da yazdým 10 elemanlý bir diziye 20 eleman atabildi ve 20 elemaný ekrana yazdýrdý*/
	return 0;
}
