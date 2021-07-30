#include <stdio.h>
#include <math.h>

int main(){
	
	int a,b;
	
	printf("a degeri:") ; scanf("%d",&a);
	printf("b degeri:") ; scanf("%d",&b);
	
	double c=a*a+b*b;
	
	printf("Hipotenus: %.1f",sqrt(c));
	
	return 0;
}
