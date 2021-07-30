#include <stdio.h>

int topla(int a, int b)
{
	return a+b;
}
int carp(int a, int b)
{
	return a*b;
}
int kareal(int sayi1, int sayi2)
{
	int sonuc=topla(sayi1,sayi2);
	return carp(sonuc,sonuc);
}


int main()
{
	int a,b;
	printf("2 deger giriniz:"); scanf("%d %d",&a,&b);
	printf("Toplam= %d\n",topla(a,b));
	printf("Carpim=%d\n",carp(a,b));
	printf("Toplam Kare=%d\n",kareal(a,b));
	
	return 0;
}
