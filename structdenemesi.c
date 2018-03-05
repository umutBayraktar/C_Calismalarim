#include <stdio.h>
typedef enum {
	CAMSIZ,CAMLI
}camDurumu;

struct kapi{
	int boy;
	int en;
	char malzemeTuru[12];
	camDurumu camBilgisi;
};

int main(){
	struct kapi kapi1;
	kapi1.boy=10;
	kapi1.en=20;
	printf("Malzeme turunu giriniz:");
	scanf("%s",&kapi1.malzemeTuru);// charpointer olarak aldýðýmýzda hata veriyor
	kapi1.camBilgisi=CAMLI;
	printf("%d\n",kapi1.boy);
	printf("%d\n",kapi1.en);
	fflush(stdout);
	printf("%s\n",kapi1.malzemeTuru);
	printf("%d",kapi1.camBilgisi);
	return 0;
}
