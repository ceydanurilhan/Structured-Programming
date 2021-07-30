#include <stdio.h>

int main(){
	
	int sayi1,sayi2;
	
	printf("2 adet sayi giriniz:"); scanf("%d %d",&sayi1,&sayi2);
	
	if(sayi1>sayi2)
	{
		printf("%d,%d'den buyuktur",sayi1,sayi2);
	}
	
	else
	{
		printf("%d,%d'den kucuktur",sayi1,sayi2);
	}
	
	return 0;
}
