#include <stdio.h>
int Sayac();
int main(){
	int i;
	for(i=0;i<10;i++){
		printf("%d\n",Sayac()); //sttaic ile tanýmladýðýmýz için önceki deðeri koruyor
	}
	return 0;
}



int Sayac(){
	static int sayac=0;
	
	return sayac+=1;
}
