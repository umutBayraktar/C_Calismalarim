#include <stdio.h>
int main(){
	int x=10;
	if(x<100){
		int a=150;
		printf("ifin içince %d",a);
	}
	//bir alt satýrý yoruma alýp derleyebiliriz.
	printf("if icerisinde tanimlanan a degiskeninin degeri :%d",a);//derleme hatasý verecektir
	// cünkü if in içinde tanýmladýk dýþarý çýkamaz
	return 0;
}
