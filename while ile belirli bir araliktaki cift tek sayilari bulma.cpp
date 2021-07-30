#include <stdio.h>

int main()
{
	int i;
	while(i<=10)
	{
		if(i%2==0)
		{
			printf("Cift :");
			printf("%d\n",i);
		}
		
		else
		{
			printf("Tek :");
			printf("%d\n",i);
		}
		
		i++;
	}
	
	return 0;
}
