#include <stdio.h>

int main(){
	
	int i=1;
	while(i<=10)
	{
		printf("1 x %d = %d\t",i,i*1);
		printf("2 x %d = %d\t",i,i*2);
		printf("3 x %d = %d\n",i,i*3);
		
		i++;
	}
	
	return 0;
}
