#include <stdio.h>
#include <stdlib.h>
int main(int argSayisi,char *argVektoru[]){
		/*
		1 facebook
		2 twitter
		
		4 linkegin
		5 gmail
		6 outlook
		7 wordpress 
		*/
		FILE *sifre;
		if(argSayisi!=7){
			printf("Hatali arguman Sayisi!");
			exit(1);
		}
		if((sifre=fopen("sifreler.txt","w+")==NULL)){
			printf("Dosya acilamadi!");
			exit(1);
		}
		if(argVektoru[1]="f"){			
			fputs("Umut.321\n",sifre);
		}
		if(argVektoru[2]="t"){			
			fputs("Umut.321\n",sifre);
		}
		if(argVektoru[3]="l"){			
		fputs("U321456987\n",sifre);
		}
		if(argVektoru[4]="g"){			
			fputs("07111997\n",sifre);
		}
		if(argVektoru[5]="o"){			
				fputs("Umut.321456987\n",sifre);
		}
		if(argVektoru[6]="w"){			
				fputs("Umut.321##123\n",sifre);
		}
		else{
			puts("hatali girdi!");
		}
		fclose(sifre);
return 0;
}
