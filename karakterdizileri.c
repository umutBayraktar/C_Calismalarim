#include <stdio.h>

int main(void)
{
   char s[40], gecici;
   int  i, n;

   /* diziyi oku */
   printf("Bir seyler yazin : ");
   gets(s);

   /* sonlandýrýcý karaktere kadar */
   for(n=0; s[n] != '\0'; n++)
      ;
// n dizinin eleman sayýsý
   for(i=0; i<n/2; i++){// iki kere tersini almasýn yani eski haline geri dönmesin diye for döngüsü eleman sayýýsýnýn yarýsý kadar döndürülüyor
      gecici   = s[n-i-1];//swap
      s[n-i-1] = s[i];
      s[i]     = gecici;
   }

   printf("Tersi            : %s\n",s);

 return 0;
}
