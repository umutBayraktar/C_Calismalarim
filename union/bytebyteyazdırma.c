#include <stdint.h>
#include <stdio.h>
typedef union{
	uint32_t Data;
	uint16_t Data_bolu2[2];
	uint8_t  Data_bolu4[4];
}veri_32bit;
int main(){
	uint32_t Veri=300; // ilk byte 256 yak adar alabildiði için 300 mod 256 =44 sonucunu veriyor.
	uint8_t index;
	veri_32bit OrnekVeri;
	OrnekVeri.Data=Veri;
	for(index=0;index<sizeof(uint32_t);index++){
		printf("index:%d\tokunandeger:%u\t8bitlik:%u\n",index,Veri,OrnekVeri.Data_bolu4[index]);
	}
	return 0;
}
