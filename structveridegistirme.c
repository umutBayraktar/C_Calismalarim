#include <stdio.h>
struct Kisi{
	int Yas;
};
void StructYazdir(struct Kisi a){
	a.Yas=15;
	printf("Fonksiyon icerisinde: %d\n",a.Yas); // degisiklik global olmadý.
}
int main(){
	struct Kisi Ahmet;
	Ahmet.Yas=20;
	StructYazdir(Ahmet);
	printf("Fonksiyon disarisinda: %d",Ahmet.Yas);
	
	
	
	
	return 0;
}
