#include <stdio.h>
int main(){
	int degisken,*ptrDegisken;
	ptrDegisken=&degisken;
	printf("Degisken icin bir deger giriniz:");
	printf("\nPointer kullanarak atamaya calisacagiz:\n\n");
	scanf("%d",ptrDegisken);// pointer zaten adresini tutuyor
	printf("%d x 2= %d\n",degisken,degisken*2); // de�iskene yazd�rd�
	printf("%d x 5= %d",degisken,*ptrDegisken*5);
	// evet iki tane y�ld�z kulland�k pointer�n �n�ndeki y�ld�z y�nlendirme operat�r�
	// 5 in �n�ndeki ise �arpma
	//bunlar birbirine kar��mad�lar ��nk� y�nlendirme operat�r� tek i�lenen al�yor
	// �arpma ise 2 i�lenen al�yor ama b�yle kar���kl�k olu�turmaya gerek yok bence
	// parantezle falan yapsayd�k kodun daha �ok okunur olabilece�ini d���n�yorum
	//printf("%d x 5= %d",degisken,*ptrDegisken*5);
	//printf("%d x 5= %d",degisken,(*ptrDegisken)*5);
	return 0;
}
