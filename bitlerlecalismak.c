//bit seviyesinde �al��mak
// struct i�inde bildriim
/*
struct {
		veriTuru uyeadi: boyut;
  
  		veri t�r� int signed int veya unsigned int olabilir.
		boyut �yenin hafuzada kaplad��� bit
};
  ka� bitlikse mesela 2 bitlik 2�zeri 2-1 den 3e kadar de�er alabilr
  bunun �rne�ini kodlayal�m
*/

struct deneme{
	 unsigned int a:2;
};

int main(){
	struct deneme d1;
	
	d1.a=1;
	printf("%u \t",d1.a);
	printf("%d\n",sizeof(d1));
	d1.a=2;
	printf("%u\t",d1.a);
	printf("%d\n",sizeof(d1));
	d1.a=3;
	printf("%u\t",d1.a);
	printf("%d\n",sizeof(d1));
	d1.a=4; //san�r�m sen ne yap�yon karde�im bu bunu almaz b�y�k veri at�yorsun uyar�s� veriyor
	printf("%u\t",d1.a);
	printf("%d\n",sizeof(d1));
	
	void /;
	return 0;
}
