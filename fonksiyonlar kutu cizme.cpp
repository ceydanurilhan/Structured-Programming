#include <stdio.h>

void kutuciz(int boy, int en)
{
	for(int i=0;i<=boy;i++)
	{
		for(int j=0;j<=en;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int boy;
	int en;
	
	printf("Boy bilgisi:"); scanf("%d",&boy);
	printf("En bilgisi:") ; scanf("%d",&en);
	
	kutuciz(boy,en);
	
	return 0;
}
