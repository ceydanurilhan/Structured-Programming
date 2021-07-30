#include <stdio.h>

int main()
{
	int i,sayi,max=0;
	
	for(i=1;i<=10;i++)
	{
		printf("sayi giriniz : ") ; scanf("%d",&sayi);
		
		if(sayi>max)
		{
			max=sayi;
		}
	}
	
	printf("En buyuk sayi %d'dir",max);
	
	return 0;
}
