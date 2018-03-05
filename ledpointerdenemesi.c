#include <stdio.h>
int degerCevir(int *led1, int* led2);
int main(){
	int l1=1,l2=1,donusdegeri;
	donusdegeri=degerCevir(&l1,&l2);
	printf("%d",donusdegeri);

	return 0;
}

int degerCevir(int *led1, int* led2){
	if(*led1==1&& *led2==1)
		return 3;
	if(*led1==1 && *led2==0)
		return 1;
	if(*led1==0 && *led2==1)
		return 2;
	if(*led1==0&&*led2==0)
		return 0;
}
