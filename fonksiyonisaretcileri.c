#include <stdio.h>
int Topla(int n);
int fonksiyon(int(*fonk)(int),int a);
int main(){
	int(*pFonk)(int);
	pFonk=&Topla(5);
	printf("Ýslem sonucu %d",fonksiyon(pFonk,3));
	
	return 0;
}
int Topla(int n){
	int topla=0,i;
	for(i=1;i<=n;i++){
		topla+=i;
	}
	return topla;
}
int fonksiyon(int(*fonk)(int),int a){
	fonk(5)+a;
}
