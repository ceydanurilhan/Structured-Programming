#include <stdio.h>

int main(){
	
	int deger,secenek;
	
	enbasagit : printf("1-10 arasinda bir deger giriniz :") ; scanf("%d",&deger);
	
	if(deger>=1 && deger<=3)
	{
		printf("yay icin :1\n");
		printf("koc icin :2\n");
		printf("oglak icin :3\n");
		
		tekrar1 : printf("Secim yapiniz :") ; scanf("%d",&secenek) ;
		
		switch(secenek)
		{
			case 1: printf("yay burcu dost canlisidir") ; break;
			case 2: printf("koc burcu sadiktir") ; break;
			case 3: printf("oglak burcu sevimlidir") ; break;
			default : printf("1-3 arasinda bir deger giriniz\n") ; goto tekrar1;
		}
	}
	
	else if(deger>=4 && deger<=7)
	{
		printf("akrep icin :1\n");
		printf("ikizler icin :2\n");
		printf("balik icin :3\n");
		
		tekrar2 : printf("Secim yapiniz :") ; scanf("%d",&secenek) ;
		
		switch(secenek)
		{
			case 1: printf("akrep burcu dost canlisidir") ; break;
			case 2: printf("ikizler burcu sadiktir") ; break;
			case 3: printf("balik burcu sevimlidir") ; break;
			default : printf("1-3 arasinda bir deger giriniz\n") ; goto tekrar2;
		}
	}
	
	else if(deger>=8 && deger<=10)
	{
		printf("yengec icin :1\n");
		printf("terazi icin :2\n");
		printf("kova icin :3\n");
		
		tekrar3 : printf("Secim yapiniz :") ; scanf("%d",&secenek) ;
		
		switch(secenek)
		{
			case 1: printf("yengec burcu dost canlisidir") ; break;
			case 2: printf("terazi burcu sadiktir") ; break;
			case 3: printf("kova burcu sevimlidir") ; break;
			default : printf("1-3 arasinda bir deger giriniz\n") ; goto tekrar3;
		}
	}
	
	else
	{
		printf("1-10 arasinda bir deger giriniz\n") ;  goto enbasagit ;
	}
	
	return 0;
}


