#include <stdio.h>

int main(){
	
	int sayi;
	printf("bir sayi giriniz:"); scanf("%d",&sayi);
	
	if(sayi>0)
	{
		printf("pozitif bir sayi girdiniz");
	}
    else
    {
    	printf("negatif bir sayi girdiniz");
	}
	
	return 0;
}
