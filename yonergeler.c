//y�nergeler
#include<stdio.h>
/*include k�t�phane tan�mlamak i�in kullna�l�yor
  #include<kutuphane.h>  veya #include"dosyayolu" olarak tan�mlan�yor �rn
 #include"C:\Users\......\kutuphane.h" gibi .... lar yazmaya ��endi�im/yazmak istemedi�im klas�rler
 */ 
 
 
 #define sabit 10
 /*
 	define sabit tan�mlamak i�in kullan�l�r 
 	sembolik isimler i�in de kullan�labilir
 	�rne�in #define YAZ printf 
 	dedi�imizde printf() yerine YAZ() yazabiliriz 
 	s�sl� parantezler,main i�in falan da ge�erli bu.
 	Program �al��madan �nce �teki isimlerin yerine define ile yazd���m�z i�ismler ge�iyor
 
 	define global fonksiyon tan�mlamak i�in de kullan�l�yormu�
 	#define dikdortgenCevre(a,b) (2*(a+b))
 */
 #define dikdortgenCevre(a,b) (2*(a+b))
 int main(){

	printf("%d",dikdortgenCevre(2,3));

 	return 0;
 }
