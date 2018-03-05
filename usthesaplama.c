#include <stdio.h>
int ustHesapla(int taban,int us);
int main(){
	int i=1;
	while(i<10){
		printf("%d\n",ustHesapla(i,i));
	i++	;
}
	return 0;
}
int ustHesapla(int taban,int us){
	int i,usDegeri=1;
	for(i=01;i<=us;i++){
		usDegeri*=taban;
	}
	return usDegeri;
}
