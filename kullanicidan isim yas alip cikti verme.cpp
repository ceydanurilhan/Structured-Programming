#include <stdio.h>

int main(){
	
	char isim[10];
	int yas;
	
	printf("Adiniz:") ; scanf("%s",&isim);
	printf("Yasiniz:") ; scanf("%d", &yas);
	
	printf("Merhaba %s yasiniz %d",isim,yas);
	
	return 0;
	
}
