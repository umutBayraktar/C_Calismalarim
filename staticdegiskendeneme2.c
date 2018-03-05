#include <stdio.h>
void degiskenYazdir();
void degiskenYazdir2(int staticdegisken);
void Staticdegisken();
int main(){
	// görüldüðü gibi derlemiyor  çünkü fonksiyonun içinde tanýmlý ama deðerini korur  /*
	/*degisken=20;
	degiskenYazdir();
	printf("%d",degisken);  */    // buraya kadar yoruma alalým ve þu yorumu açalým 


/*	static degisken2=10;
	printf("fonksiyon cagrisi:");    // böyle de bir deðiþim olmuyormuþ öðrenmiþ olduk
	degiskenYazdir2(degisken2);
	printf(" fonksiyondan sonra:%d",degisken2);
*/


/*
int i;
for(i=1;i<5;i++){
	Staticdegisken();
}
 */       // deðerini koruyor.
	return 0;
}
void degiskenYazdir(){
	static degisken=10;
	printf("%d\n",degisken);
}
void degiskenYazdir2(int staticdegisken){
    printf("%d\n\n",staticdegisken);
	staticdegisken=25;
}
void Staticdegisken(){
	static int a=5;
	printf("%d\n",a);
	a+=5;
}
