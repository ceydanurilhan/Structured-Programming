#include <stdio.h>

int main()
{

int secim;

printf("C icin: 1\n") ;
printf("C# icin: 2\n") ;
printf("Oracle icin: 3\n");

printf("secim yapiniz:") ;  scanf("%d",&secim);

if(secim==1)
{
	printf("C esnek bir dildir...");
}
else if(secim==2)
{
	printf("C# .Net'in gozdesidir...");
}
else if(secim==3)
{
	printf("Oracle en iyi veritabaný platformudur");
}
else
{
	printf("Hatali girdi");
}
return 0;

}
