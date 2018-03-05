//Dosyalar
/*
  dosya fonksiyonlar� stdio.h k�t�phanesinde tan�mlanm��t�r
  dosya a�mak i�in �nce FILE kelimesi ile dosya pointer� tan�mlamak gereki FILE stdio.h i�erisinde
  �rne�in
  FILE *dosya ;
  diyerek bir dosya de�i�keni tan�ml�yoruz
  
  fopen(const char dosya ad�,const char dosya modu);
  	dosya ad� :dosyan�n ad�
  	dosya modu :dosyan�n a��l�� modu
  	R:dosyadan sadece okuma i�lemi yapar
  	W:dosyaya sadece yazma i�lemi yapar dosya olsun veya olmas�n yeniden olu�turu
  	A:Kay�tl� bir dosyan�n sonuna ekleme i�lemi yapar bu dosyadan bilgi okunamaz
  	r+ daha �nce var olan bir dosyadan okuma ve yazma i�lemi yapar
  	w+ dosya olsa da olmasa da yeniden olu�turur okuma ve yazma yapar
  	a+ kay�tl� bir dosyan�n sonuna ver eklemek i�in kullan�l�r okurma ve yazma yapar
	  olabilr
	fclose(dosya);
    fclose dosyay� kapayan fonksiyon
    
    
     dosyalar i�letim sistemlerinde genellikle iki tipte oluyormu�l
     metin ve ikili dosyalar
     metin i�in modun yan�na t //muhtemelen text anlam�nda
     ikili i�in b ekliyoruz //muhtemelen binary anlam�nda
     w+b okuma yazma ve ikili dosya
     rt  okuma ve metin dosyas�
     ...
     belirleme yap�lmam��sa varsay�lan a��l�� modu metin
 Ali Orhan Ayd�n  C ile Bilgisayar Programlamaya Giri� Pusula Yay�nc�l�k kitab�ndan �al���yorum �uan
 m�� l� mi�li anlat�mlar o nedenle oluyor.Direk bilgiye ben sahip olmad���m hat�rlad���m/��rendi�im i�in
 
*/
#include <stdio.h>
#include <stdlib.h>// exit fonksiyonu burada  san�r�m bunu eklemedi�imde hata veriyor
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
