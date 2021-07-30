#include <stdio.h>

int main()
{
	int s1,s2,i,toplam=0;
	
	printf("2 adet sayi giriniz :") ; scanf("%d %d",&s1,&s2);
	
	if(s1<s2)
	{
		for(i=s1;i<=s2;i++)
		{
			toplam+=i;
		}
	}
	else
	{
		for(i=s1;i>=s2;i--)
		{
			toplam+=i;
		}
		
	}    

    printf("Toplam : %d",toplam);
    
    return 0;
}
