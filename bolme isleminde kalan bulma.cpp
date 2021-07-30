#include <stdio.h>
#include <math.h>

int main(){
	
	int bolunen,bolum;
	
	printf("Bolunen degeri giriniz:") ; scanf("%d",&bolunen);
	printf("Bolum degerini giriniz:") ; scanf("%d",&bolum);
	
	int kalan=bolunen%bolum;
	
	printf("kalan:%d",kalan);
	
	return 0;
	
	}
