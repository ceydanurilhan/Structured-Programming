#include <stdio.h>

int main()
{
	int maas,adet,prim;
	
	printf("Maasiniz:") ; scanf("%d",&maas);
	printf("1 ayda ne kadar urun urettiniz:") ; scanf("%d",&adet);
	
	if(adet>=1 && adet<=10)
	{
		prim=adet*5;
		printf("Aldiginiz prim %d TL \nToplam maasiniz %d",prim,prim+maas);
	}
	else if(adet>=11 && adet<=20)
	{
		prim=adet*10;
		printf("Aldiginiz prim %d TL \nToplam maasiniz %d",prim,prim+maas);
	}
	
	else if(adet>=21 && adet<=30)
	{
		prim=adet*10;
		printf("Aldiginiz prim %d TL \nToplam maasiniz %d",prim,prim+maas);
	}
	else
	{
		printf("Lutfen 1-30 arasi bir deger giriniz...");
	}
	
	return 0;
	
}
