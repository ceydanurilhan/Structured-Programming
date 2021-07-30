#include <stdio.h>

int main(){
	
	int vize,final;
	float ort;
	
	printf("Vize notunuzu giriniz:") ; scanf("%d",&vize);
	printf("Final notunuzu giriniz:") ; scanf("%d",&final);
	
	ort=vize*0.4+final*0.6;
	
	if(ort>90 && ort<=100)
	{
		printf("Not ortalamaniz: %.2f Notunuz 'AA'",ort);
	}
	else if(ort>70 && ort<90)
	{
		printf("Not ortalamaniz: %.2f Notunuz 'BB'",ort);
	}
	else if(ort>50 && ort<70)
	{
		printf("Not ortalamaniz: %.2f Notunuz 'CC'",ort);
	}
	else if(ort>30 && ort<50)
	{
		printf("Not ortalamaniz: %.2f Notunuz 'DD'",ort);
	}
	else 
	{
		printf("Not ortalamaniz: %.2f Notunuz 'FF'",ort);
	}
	
	return 0;
}
