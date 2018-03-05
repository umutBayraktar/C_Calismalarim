#include <stdio.h>
int main(){
	float fdegisken=123456789.123456789;
	double ddegisken=123456789.123456789;
	printf("%f\n",fdegisken); // floatın . dan sonrasını 0 yazdı
	printf("%lf",ddegisken);
	return 0;
}
