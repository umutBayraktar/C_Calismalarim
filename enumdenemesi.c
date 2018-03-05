#include <stdio.h>
enum basariDurumu{
	COKKOTU=5,KOTU,ORTA,IYI,COKIYI
 //   0       1    2   3    4
};


int main(){
	enum basariDurumu ogrenci;
	ogrenci=COKKOTU;
	switch(ogrenci){
		case COKKOTU:
			printf("Calis Kardesim\n");
			break;
		case KOTU:
			printf(" Daha iyisini yapabilirsin\n");
			break;
		case ORTA:
			printf("Orta \n");
			break;
		case IYI:
			printf("Tebrik ederim ama biraz daha calisabilirsin\n");
			break;
		case COKIYI:
			printf("Helal olsun kardesim boyle devam\n");
			break;	
	}
	
	
	
	
	
	return 0;
}
