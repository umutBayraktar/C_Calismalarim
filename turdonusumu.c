#include <stdio.h>
int main(){
	short x=128; //char veri tipinin boyurundan oldu�u iin �ok birde�i�iklik olmayacak
	x=129;//azalt�yor
	printf("%d\n",x);
	char a;
	a=x;
	printf("%d",a);
	
	return 0;
}
