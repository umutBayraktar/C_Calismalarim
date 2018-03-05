#include <stdio.h>
#include <stdlib.h>
int main(int argSayisi,char* argvek[]){
	int toplam;
	if(argSayisi<3){
		printf("Eksik Parametre!");
		exit(1);}
	if(argSayisi>3){
		printf("Fazla Parametre");	
		exit(1);	
  		}
	toplam=atoi(argvek[1])+atoi(argvek[2]);
printf("toplamlari:%d\n",toplam);
return 0;
}