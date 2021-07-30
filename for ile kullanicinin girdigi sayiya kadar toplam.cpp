#include <stdio.h>

int main()
{
	int i,sayi,toplam=0;
	printf("Bir sayi giriniz:") ; scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		toplam+=i;
	}
	
	printf("Sonuc : %d",toplam);
	
	return 0;
}


