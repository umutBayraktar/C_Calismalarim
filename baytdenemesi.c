#include <stdio.h>
struct a{
	 int boy:5;// boyutu 5 bitlik unsigned oldu�u icin 32e kadar al�r 
	
};
int main(){

	struct a umut;
	umut.boy=30;// 30 dde�erinde s�k�nt� ��kmad�
//	umut.boy=50;// 50 dedi�imde varning verdi
	return 0;
}
