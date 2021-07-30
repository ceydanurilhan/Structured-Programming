#include <stdio.h>

int main()
{
	int sayi,toplam=0;
	
	for(int i=0;i<=10;i++)
	{
		printf("sayi giriniz(bitirmek icin 0(sifir)'a basiniz) :") ; scanf("%d",&sayi);
		toplam=toplam+sayi;
		
		if(sayi==0)
		{
			break;
		}
	}
	
	printf("Toplam =%d",toplam) ;
	
	return 0;
}
