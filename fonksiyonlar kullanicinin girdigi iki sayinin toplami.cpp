#include <stdio.h>

int topla(int x, int y)
{
	int sonuc=x+y;
	return sonuc;
}

int main()
{
	int a,b;
	
	printf("2 deger giriniz:"); scanf("%d %d",&a,&b);
	printf("Toplam=%d",topla(a,b));
}
