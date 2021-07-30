#include <stdio.h>

int main()
{
	long int i,faktoriyel=1,sayi;
	
	printf("Bir sayi giriniz:") ; scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		faktoriyel*=i;
	}
	
	printf("%d'nin faktoriyeli %d'dir",sayi,faktoriyel);
	
	return 0;
}
