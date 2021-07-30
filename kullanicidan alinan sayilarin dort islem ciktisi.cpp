#include <stdio.h>

int main(){
	
	int sayi1,sayi2;
	
	printf("1.sayiyi giriniz:") ; scanf("%d",&sayi1);
	printf("2.sayiyi giriniz:") ; scanf("%d",&sayi2);
	
	int toplam=sayi1+sayi2;
	int fark=sayi1-sayi2;
	int carpim=sayi1*sayi2;
	float bolum=(float)sayi1/(float)sayi2;
	
	printf("Sayilarin toplami: %d\nSayilarin farki: %d\nSayilarin carpimi: %d\nSayilarin bolumu: %.2f",toplam,fark,carpim,bolum);
	
	return 0;
	
}
