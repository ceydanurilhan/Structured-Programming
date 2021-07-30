#include <stdio.h>

void kontrolet(int sayi)
{
	if(sayi%2==0)
	printf("%d sayisi cifttir",sayi);
	else
	printf("%d sayisi cifttir",sayi);
}

int main()
{
	int sayi;
	
	printf("Bir sayi giriniz:"); scanf("%d",&sayi);
	
	kontrolet(sayi);
	
	return 0;
}
