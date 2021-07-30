#include <stdio.h>
#include <math.h>

int main(){
	
	int secim,secim2,s1,s2,taban,us;
	
	printf("Dort islem icin :1\n");
	printf("Ozel matematik fonksiyonlari icin :2\n");
	
	printf("Secim yapiniz:") ; scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			{
				printf("toplama icin :1\n");
			    printf("cikarma icin :2\n");
			    printf("carpma icin :3\n");
			    printf("bolme icin :4\n");
			    
			    secimyap : printf("Secim yapiniz:") ; scanf("%d",&secim2);
			    
			    if(secim2==1)
			    {
			    	printf("2 adet sayi giriniz:") ; scanf("%d %d",&s1,&s2);
			    	printf("Toplam : %d",s1+s2);
				}
				else if(secim2==2)
			    {
			    	printf("2 adet sayi giriniz:") ; scanf("%d %d",&s1,&s2);
			    	printf("Fark : %d",s1-s2);
				}
				else if(secim2==3)
			    {
			    	printf("2 adet sayi giriniz:") ; scanf("%d %d",&s1,&s2);
			    	printf("Carpim : %d",s1*s2);
				}
				else if(secim2==4)
			    {
			    	printf("2 adet sayi giriniz:") ; scanf("%d %d",&s1,&s2);
			    	printf("Bolum : %.2f",(float)s1/(float)s2);
				}
				else
				{
					printf("1-4 arasinda bir sayi giriniz") ; goto secimyap ;
				}
			}
			
		case 2:
			{
				printf("Karekok icin :1\n") ;
				printf("Us almak icin :2\n");
				
				printf("Secim yapiniz:") ; scanf("%d",&secim2);
				
				if(secim2==1)
				{
					printf("Bir sayi giriniz:") ; scanf("%d",&s1);
					printf("%d'nin karekoku= %.1f",s1,sqrt(s1));
				}
				else if(secim2==2)
				{
					printf("Taban degeri giriniz:") ; scanf("%d",&taban);
					printf("Ussu giriniz:") ; scanf("%d",&us);
					printf("%d ussu %d = %.1f",taban,us,pow(taban,us));
				}
			}
	}
	
	return 0;
}
