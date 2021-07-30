#include <stdio.h>

int main(){
	
	int secim,sayi1,sayi2;
	float sonuc;
	
	printf("Toplama icin : 1\n");
	printf("Cikarma icin : 2\n");
	printf("Carpma icin : 3\n");
	printf("Bolme icin : 4\n");
	printf("Secim yapiniz:"); scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
		{
			printf("2 adet sayi giriniz:") ; scanf("%d %d",&sayi1,&sayi2);
			sonuc=sayi1+sayi2;  break;
		}
		case 2:
		{
			printf("2 adet sayi giriniz:") ; scanf("%d %d",&sayi1,&sayi2);
			sonuc=sayi1-sayi2;  break;
		}
		case 3:
		{
			printf("2 adet sayi giriniz:") ; scanf("%d %d",&sayi1,&sayi2);
			sonuc=sayi1*sayi2; break;
		}
		case 4:
		{
			printf("2 adet sayi giriniz:") ; scanf("%d %d",&sayi1,&sayi2);
			sonuc=sayi1/sayi2;  break;
		}
		default : printf("Yanlis bir secim yaptiniz...") ; break;
	}
	
	printf("\nSonuc : %.1f",sonuc);
	
	return 0;
}
