Sum of Even Numbers
#include<stdio.h>

int main()
{
	int sum=0;
	int i;
	
	for(i=2;i<=100;i+=2)
	{
		sum += i;
	}
	
	printf("sum: %d",sum);
	return 0;
}


