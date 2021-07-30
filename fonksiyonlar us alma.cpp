#include <stdio.h>

int us_al(int taban,int us)
{
	int sonuc=1;
	for(int i=1;i<=us;i++)
	{
		sonuc*=taban;
	}
	return sonuc;
}

int main()
{
	int t,u;
	printf("Taban degerini giriniz:"); scanf("%d",&t);
	printf("Us degerini giriniz:"); scanf("%d",&u);
	printf("%d ussu %d = %d",t,u,us_al(t,u));
	
}
