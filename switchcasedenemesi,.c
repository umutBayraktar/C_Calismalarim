#include <stdio.h>


/*

swtich case ifadelerine switch() b�l�m�ne float veya double deger girmiyor
ama i�erisinde bu de�erleir kullanabiliyoruz.
*/
int main(){
	//	float k=30.6;
	int a=25;
	switch(a)
	{
		case 1 ... 10:
			printf("%d 1-10 aras�nda",a);
		break;
		case 11 ... 20:
			printf("%d 11-20aras�nda",a);
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
