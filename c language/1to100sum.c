//Sum of all the numbers from 1 to 100
#include<stdio.h>

int main(){
	int sum = 0;
	int i;
	
	for(i = 1; i <= 100; i++)
	{
		sum=sum+i;
	}
	
	printf("sum: %d",sum);
	return 0;
}
