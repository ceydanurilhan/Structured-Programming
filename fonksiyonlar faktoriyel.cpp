#include <stdio.h>

int faktoriyel(int sayi)
{
	int f=1;
	for(int i=1;i<=sayi;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int sayi;
	
	printf("sayi giriniz:"); scanf("%d",&sayi);
	printf("%d nin faktoriyeli = %d",sayi,faktoriyel(sayi));
}
