#include <stdio.h>
int degisken=10;
int main(){
	int degisken=25,k=5;
	printf("%d\n",degisken);// de�i�kenler �ak���p program hata vermedi 
	// ��nk� C dili daha yerel olana �ncelik verir
	if(k<10){
		int degisken=10;
		printf("%d\n",degisken);
	}
	printf("%d",degisken); // de�i�ken yine 25 ��nk� if'te olan if'te kald� :D
	return 0;
}
