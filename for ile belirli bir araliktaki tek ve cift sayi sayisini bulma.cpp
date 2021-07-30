#include <stdio.h>

int main()
{
	int i,ciftsayi=0,teksayi=0;
	
	for(i=0;i<=10;i++)
	{
		if(i%2==0)
		{
			ciftsayi++;
		}
		
		else
		{
			teksayi++;
		}
	}
	
	printf("%d adet tek sayi vardir\n",teksayi);
	printf("%d adet cift sayi vardir",ciftsayi);
	
	return 0;
}
