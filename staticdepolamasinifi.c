#include <stdio.h>
void Statikdegiskenlifonksiyon();
int main(){
	printf("Static degisken iceren fonksiyonu 0 kere cagiriyorum\n");
	printf("Ilk cagirisim:\n");
	Statikdegiskenlifonksiyon();
	printf("Ikinci cagirisim:\n");
	Statikdegiskenlifonksiyon();
	printf("Ucuncu cagirisim:\n");
	Statikdegiskenlifonksiyon();
	
	return 0 ;
}
void Statikdegiskenlifonksiyon(){
	static int deger=0;// baþlangýçta 0 atar ama sen gene de 0 ata derleyiciye güvenme
	printf("%d\n",deger);
	deger++;
}
