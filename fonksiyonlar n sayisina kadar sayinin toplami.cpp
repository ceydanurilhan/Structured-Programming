#include <stdio.h>

int nToplam(int sayi)
{
	int toplam=0;
	for(int i=1;i<=sayi;i++)
	{
		toplam+=i;
	}
	return toplam;
}

int main()
{
	int deger;
	
	printf("deger giriniz:") ; scanf("%d",&deger);
	printf("1 ile %d arasindaki sayilarin toplami=%d",deger,nToplam(deger));
	
	return 0;
	
}
