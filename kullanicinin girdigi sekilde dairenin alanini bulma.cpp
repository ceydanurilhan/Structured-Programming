#include <stdio.h>
#include <math.h>

int main(){
	
	float pi=3.14;
	int yaricap;
	
	printf("Yaricapi giriniz:") ; scanf("%d",&yaricap);
	
	float alan=pi*yaricap*yaricap;
	
	printf("Dairenin alani:%.2f",alan);
	
	return 0;
	
}
