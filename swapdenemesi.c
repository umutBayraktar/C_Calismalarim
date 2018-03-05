#include <stdio.h>
int main(){
	int a=10,b=15,temp;
	printf("a nin adresi:%d\n",&a);
	printf("b nin adresi:%d\n",&b);
	printf("a:%d\tb:%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("a nin adresi:%d\n",&a);
	printf("b nin adresi:%d\n",&b);
	printf("a:%d\tb:%d",a,b);
	return 0;
}
