#include <stdio.h>
#include <math.h>

int main()
{
	int i,sayi;
	while(i<=10)
	{
		printf("\nSayi giriniz :") ; scanf("%d",&sayi);
		printf("%d'nin karekoku = %.1f",sayi,sqrt(sayi));
		i++;
	}
	
	return 0;
}
