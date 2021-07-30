#include <stdio.h>
#include <math.h>

int main()
{
	int s1,i;
	
	printf("Sayi Giriniz :") ; scanf("%d",&s1);
	
	for(i=1;i<=s1;i++)
	{
		printf("%d'nin karekoku %.1f\n",i,sqrt(i));
	}
	
	return 0;
}
