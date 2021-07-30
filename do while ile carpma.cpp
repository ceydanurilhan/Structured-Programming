#include <stdio.h>

int main()
{
	int sayi;
	
	do
	{
		printf("sayi giriniz :") ; scanf("%d",&sayi);
		printf("%d'nin 2 kati : %d\n",sayi,sayi*2);
	}while(sayi>0);
	
	printf("Program Sonlandi...");
	
	return 0;

}
