#include <stdio.h>

int main(){
	
	char cinsiyet;
	float boy;
	
	printf("Cinsiyetiniz [E/K]:") ; scanf("%c",&cinsiyet);
	printf("Boyunuz:") ; scanf("%f",&boy);
	
	if((cinsiyet=='E') && boy>1.80)
	{
		printf("Basket takimina alindiniz.");
	}
	else if((cinsiyet=='K') && boy>1.70)
	{
		printf("Basket takimina alindiniz.");
	}
	else
	{
		printf("Basket takimina alinmadiniz.");
	}
	
	return 0;
}
