#include <stdio.h>

int main()
{
	int i,sayi1,sayi2,ciftsayi=0,teksayi=0;
	
	printf("2 adet sayi giriniz :") ; scanf("%d %d",&sayi1,&sayi2);
	
	if(sayi1<sayi2)
	{
	
	for(i=sayi1;i<=sayi2;i++)
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
}
    else
    {
    	for(i=sayi1;i>=sayi2;i--)
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
	}
	printf("%d adet tek sayi vardir\n",teksayi);
	printf("%d adet cift sayi vardir",ciftsayi);
	
	return 0;
}
