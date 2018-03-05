#include <stdio.h>


/*

swtich case ifadelerine switch() bölümüne float veya double deger girmiyor
ama içerisinde bu deðerleir kullanabiliyoruz.
*/
int main(){
	//	float k=30.6;
	int a=25;
	switch(a)
	{
		case 1 ... 10:
			printf("%d 1-10 arasýnda",a);
		break;
		case 11 ... 20:
			printf("%d 11-20arasýnda",a);
		break;
		case 21 ... 30:
			printf("%d 21-30 arasinda",a);
		break;
		default:
			printf("%d hicbirinin arasinda degil.",a);
		break;	
	}
	return 0;
}
