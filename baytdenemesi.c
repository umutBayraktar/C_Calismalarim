#include <stdio.h>
struct a{
	 int boy:5;// boyutu 5 bitlik unsigned olduğu icin 32e kadar alır 
	
};
int main(){

	struct a umut;
	umut.boy=30;// 30 ddeğerinde sıkıntı çıkmadı
//	umut.boy=50;// 50 dediğimde varning verdi
	return 0;
}
