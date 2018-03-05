 #include <stdio.h>
 typedef struct{
 	int seriNo;
 	char *yazar;
 }KITAP;
 
 
 int main(){
 	FILE *deneme;
 	KITAP ders;
 	/*deneme=fopen("fwrite.txt","w+");
 	if(deneme==NULL){
 		printf("Dsya Acilamadi!");
	 	exit(1);	 }
 	ders.seriNo=123;
 	ders.yazar="asfd";
 	fwrite(&ders,sizeof(ders),1,deneme);*/
 	ders.seriNo=0;
 	ders.yazar="";
//	fclose(deneme);
	deneme=fopen("fwrite.txt","r+");
	if(deneme==NULL){
		printf("Dosya Acilamadi");
		exit(1);
	}
	fread(&ders,sizeof(ders),2,deneme);
	printf("%d\n",ders.seriNo); 
	fflush(stdout);
	printf("%s",ders.yazar); 
	 return 0;
 }
