#include <stdio.h>
enum RENKLER{
	SIYAH=0,KAHVERENGI,KIRMIZI,TURUNCU,SARI,YESIL,MAVI,MOR,GRI,BEYAZ,

};
enum RENKLER2{// enumlar integer de�er al�rlar
	GUMUS=1/10,ALTIN // 0.1 yazd���mda da derleme hatas� veriyo
};
int main(){
	
	printf("%d\n%d",SIYAH,GUMUS);
	return 0;
}
