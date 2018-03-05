#include <stdio.h>
int main(){
	short x=128; //char veri tipinin boyurundan olduðu iin çok birdeðiþiklik olmayacak
	x=129;//azaltýyor
	printf("%d\n",x);
	char a;
	a=x;
	printf("%d",a);
	
	return 0;
}
