#include <stdio.h>
int Sayac();
int main(){
	int i;
	for(i=0;i<10;i++){
		printf("%d\n",Sayac()); //sttaic ile tan�mlad���m�z i�in �nceki de�eri koruyor
	}
	return 0;
}



int Sayac(){
	static int sayac=0;
	
	return sayac+=1;
}
