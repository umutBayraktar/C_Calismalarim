#include <stdio.h>
#include <stdlib.h>// rand fonksiyonu için
#include <time.h>
//program hatalý 
enum durum{KAZANDI,KAYBETTI,DEVAM};
int main(){
	int zar1,zar2,toplam,puan;
	enum durum OyunDurumu;
	zar1=zarAt();
	zar2=zarAt();
	toplam=zar1+zar2;
	puan=toplam;
	printf("zar1:%d\tzar2:%d\ttoplam:%d\n",zar1,zar2,toplam);
	if(toplam==7||toplam==11){
		printf("zar1:%d\tzar2:%d\t toplam:%d\n",zar1,zar2,toplam);
		OyunDurumu=KAYBETTI;
	}
	else if(toplam==2||toplam==3||toplam==12){
		printf("zar1:%d\tzar2:%d\t toplam:%d\n",zar1,zar2,toplam);
		OyunDurumu=KAZANDI;	
	}
	else {
		OyunDurumu=DEVAM;
		for( ;OyunDurumu==DEVAM;){
			zar1=zarAt();
			zar2=zarAt();
				printf("zar1:%d\tzar2:%d\tpuan:%d\n",zar1,zar2,puan);
			if(puan==zar1+zar2){
				printf("zar1:%d\tzar2:%d\tpuan:%d\n",zar1,zar2,puan);
				OyunDurumu=KAZANDI;
				break;
			}
			else if((zar1+zar2)==7){
				printf("zar1:%d\tzar2:%d\tpuan:%d\n",zar1,zar2,puan);
				OyunDurumu=KAYBETTI;
				break;	
			}
			else 
				continue;	
		}	
	}
	
	switch(OyunDurumu){
		case KAZANDI:
		printf("Oyunu Kazandiniz!\n");
		break;
		case 1:
			printf("Oyunu Kaybettiniz!");
			break;
	}
	
	return 0;
}

int zarAt(){
	srand(time(NULL));
	int zar= 1+rand()%6;
	return zar;
}
