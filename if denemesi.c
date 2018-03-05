#include <stdio.h>
int main(){
	
	int a;
	printf("A sayisini giriniz:");
	scanf("%d",&a);
	//if(a==5)printf("Sayi 5");printf("Sayi 5 degil");
	// sayýyý beþ girersek Sayi 5 Sayi 5 degil yazýyor
	if(a==5)printf("Sayi 5");else printf("Sayi 5 Degil");
	// bu kodta 5 girdiðimizde sadece 5 yazýyor 
	/*
		Buradaki temel mantýk if ve else deyimleri kendilerinden sonra gelen 1 satýrý süslü parantez olmasa da
		iþleme alýrlar.Bir tek satýr yazdýrdýk.Ýlk kodda ilk satýrý a==5 koþuluyla konrtol ediyordu
		fakat alt satýrý her türü iþliyordu.
	*/
	return 0;
}
