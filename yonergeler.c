//yönergeler
#include<stdio.h>
/*include kütüphane tanýmlamak için kullnaýlýyor
  #include<kutuphane.h>  veya #include"dosyayolu" olarak tanýmlanýyor örn
 #include"C:\Users\......\kutuphane.h" gibi .... lar yazmaya üþendiðim/yazmak istemediðim klasörler
 */ 
 
 
 #define sabit 10
 /*
 	define sabit tanýmlamak için kullanýlýr 
 	sembolik isimler için de kullanýlabilir
 	örneðin #define YAZ printf 
 	dediðimizde printf() yerine YAZ() yazabiliriz 
 	süslü parantezler,main için falan da geçerli bu.
 	Program çalýþmadan önce öteki isimlerin yerine define ile yazdýðýmýz iþismler geçiyor
 
 	define global fonksiyon tanýmlamak için de kullanýlýyormuþ
 	#define dikdortgenCevre(a,b) (2*(a+b))
 */
 #define dikdortgenCevre(a,b) (2*(a+b))
 int main(){

	printf("%d",dikdortgenCevre(2,3));

 	return 0;
 }
