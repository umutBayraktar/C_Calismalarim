//dosya yolu ile dosya acma
#include <stdio.h>
int main(){
	FILE *dosya2;
	dosya2=fopen("C:\\Users\\DELL\\Desktop\\C �al��malar�\\dosya islemleri\\dosya2.txt","w+");
	// \ i�areti i�in \\ koymak gerekiyordu \' \" gibi
	if(dosya2==NULL){
		printf("Dosya acma islemi basarisiz!");
		exit(1);
	}
	printf("dosya acma islemi basarili!");
	
	return 0;
}
