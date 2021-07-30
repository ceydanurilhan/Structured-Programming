#include <stdio.h>

int main(){
	
	int sayi;
	
	printf("sayi giriniz:") ; scanf("%d",&sayi);
	
	int kare=sayi*sayi;
	int kup=sayi*sayi*sayi;
	
	printf("Girilen sayinin karesi=%d\nGirilen sayinin kupu=%d",kare,kup);
	
	return 0;
}
