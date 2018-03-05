//Dosyalar
/*
  dosya fonksiyonlarý stdio.h kütüphanesinde tanýmlanmýþtýr
  dosya açmak için önce FILE kelimesi ile dosya pointerý tanýmlamak gereki FILE stdio.h içerisinde
  örneðin
  FILE *dosya ;
  diyerek bir dosya deðiþkeni tanýmlýyoruz
  
  fopen(const char dosya adý,const char dosya modu);
  	dosya adý :dosyanýn adý
  	dosya modu :dosyanýn açýlýþ modu
  	R:dosyadan sadece okuma iþlemi yapar
  	W:dosyaya sadece yazma iþlemi yapar dosya olsun veya olmasýn yeniden oluþturu
  	A:Kayýtlý bir dosyanýn sonuna ekleme iþlemi yapar bu dosyadan bilgi okunamaz
  	r+ daha önce var olan bir dosyadan okuma ve yazma iþlemi yapar
  	w+ dosya olsa da olmasa da yeniden oluþturur okuma ve yazma yapar
  	a+ kayýtlý bir dosyanýn sonuna ver eklemek için kullanýlýr okurma ve yazma yapar
	  olabilr
	fclose(dosya);
    fclose dosyayý kapayan fonksiyon
    
    
     dosyalar iþletim sistemlerinde genellikle iki tipte oluyormuþl
     metin ve ikili dosyalar
     metin için modun yanýna t //muhtemelen text anlamýnda
     ikili için b ekliyoruz //muhtemelen binary anlamýnda
     w+b okuma yazma ve ikili dosya
     rt  okuma ve metin dosyasý
     ...
     belirleme yapýlmamýþsa varsayýlan açýlýþ modu metin
 Ali Orhan Aydýn  C ile Bilgisayar Programlamaya Giriþ Pusula Yayýncýlýk kitabýndan çalýþýyorum þuan
 mýþ lý miþli anlatýmlar o nedenle oluyor.Direk bilgiye ben sahip olmadýðým hatýrladýðým/öðrendiðim için
 
*/
#include <stdio.h>
#include <stdlib.h>// exit fonksiyonu burada  sanýrým bunu eklemediðimde hata veriyor
int main(){
	FILE *metin;
	metin=fopen("deneme2.txt","w");
	if(metin==NULL){
		puts("DOsya acma islemi basarisiz!");
		exit(1);	}
	
		//puts("Dosya acma islemi basarili");
		printf("Dosya acma islemi basarili!");
	
	fclose(metin);
	
	
	
	return 0;
}
