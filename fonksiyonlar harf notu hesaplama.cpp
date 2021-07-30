#include <stdio.h>

void nothesapla(int vize, int final)
{
	double ort=(double)vize*0.4+(double)final*0.6;
	if(ort>90 && ort<100 )
	printf("Ortalama : %.1lf - 'AA'",ort);
	else if(ort>70 && ort<90 )
	printf("Ortalama : %.1lf - 'BB'",ort);
	else if(ort>50 && ort<70 )
	printf("Ortalama : %.1lf - 'CC'",ort);
	else if(ort>30 && ort<50 )
	printf("Ortalama : %.1lf - 'DD'",ort);
	else 
	printf("Ortalama : %.1lf - 'FF'",ort);
}

int main()
{
	int vize,final;
	
	printf("Vize notunuzu giriniz:"); scanf("%d",&vize);
	printf("Final notunuzu giriniz:"); scanf("%d",&final);
	
	nothesapla(vize,final);
	
	
	
}
