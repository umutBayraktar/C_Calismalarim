#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
int DiziElemanSayisiBul(int *dizi);
int main(){
	
	int dizi[10]={1,3,5,7,9,11,12,13,15,25};
	int baslangicIndisi=0,bitisIndisi=9,aranacakdeger,i;
	printf("Aramak  istediginiz degeri giriniz:");
	scanf("%d",&aranacakdeger);
	for(;;)
		{
		i=(baslangicIndisi+bitisIndisi)/2;
		if(dizi[i]==aranacakdeger){
			printf("Aradiginiz deger %d. indiste",i);
			break;
		}
		else if(dizi[i]>aranacakdeger){
			bitisIndisi=i;
		}
		else{
			baslangicIndisi=i;
		}	
		if(i<0)
			break;
		}

	
	

	
	
	
	
	
	return 0;
}

