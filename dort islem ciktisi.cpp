#include <stdio.h>

int main(){
	
	int sayi1=5,sayi2=7,toplam,fark,carpim;
	
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carpim=sayi1*sayi2;
	float bolum= (float)sayi1/(float)sayi2;
	
	printf("Toplam= %d\n",toplam);
	printf("Fark=%d\n",fark);
	printf("Carpim=%d\n",carpim);
	printf("Bolum=%.2f",bolum);
	
	return 0;
}
