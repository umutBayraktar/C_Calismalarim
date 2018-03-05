//bit seviyesinde çalýþmak
// struct içinde bildriim
/*
struct {
		veriTuru uyeadi: boyut;
  
  		veri türü int signed int veya unsigned int olabilir.
		boyut üyenin hafuzada kapladýðý bit
};
  kaç bitlikse mesela 2 bitlik 2üzeri 2-1 den 3e kadar deðer alabilr
  bunun örneðini kodlayalým
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
	d1.a=4; //sanýrým sen ne yapýyon kardeþim bu bunu almaz büyük veri atýyorsun uyarýsý veriyor
	printf("%u\t",d1.a);
	printf("%d\n",sizeof(d1));
	
	void /;
	return 0;
}
