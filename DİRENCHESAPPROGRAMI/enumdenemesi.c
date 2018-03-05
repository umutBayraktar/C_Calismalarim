#include <stdio.h>
enum RENKLER{
	SIYAH=0,KAHVERENGI,KIRMIZI,TURUNCU,SARI,YESIL,MAVI,MOR,GRI,BEYAZ,

};
enum RENKLER2{// enumlar integer deðer alýrlar
	GUMUS=1/10,ALTIN // 0.1 yazdýðýmda da derleme hatasý veriyo
};
int main(){
	
	printf("%d\n%d",SIYAH,GUMUS);
	return 0;
}
