#include <stdio.h>

int main(void)
{
   char s[40], gecici;
   int  i, n;

   /* diziyi oku */
   printf("Bir seyler yazin : ");
   gets(s);

   /* sonland�r�c� karaktere kadar */
   for(n=0; s[n] != '\0'; n++)
      ;
// n dizinin eleman say�s�
   for(i=0; i<n/2; i++){// iki kere tersini almas�n yani eski haline geri d�nmesin diye for d�ng�s� eleman say��s�n�n yar�s� kadar d�nd�r�l�yor
      gecici   = s[n-i-1];//swap
      s[n-i-1] = s[i];
      s[i]     = gecici;
   }

   printf("Tersi            : %s\n",s);

 return 0;
}
