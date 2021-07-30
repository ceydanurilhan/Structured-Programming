#include <stdio.h>

int main()
{
	int secim;
	surayagit : printf("\n1-5 arasi bir sayi giriniz:") ; scanf("%d",&secim);
	
	switch(secim)
	{
		case 1: printf("1'e bastiniz"); break;
		case 2: printf("2'ye bastiniz"); break;
		case 3: printf("3'e bastiniz"); break;
		case 4: printf("4'e bastiniz"); break;
		case 5: printf("5'e bastiniz"); break;
		default : printf("Lutfen 1-5 arasi bir sayi giriniz") ; break;
	}
	
	goto surayagit;
	
	return 0;
	
}
