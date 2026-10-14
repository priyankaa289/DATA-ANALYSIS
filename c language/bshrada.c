#include<stdio.h>

int main()
{
	int bs,Hra,da;
	float ansHra,ansDa,total;
	
	printf("enter a Basic Salary:- ");
	scanf("%d\n",&bs);
	
	if(bs <=10000)
	{
		ansHra = bs*20/100;
		ansDa = bs*80/100;
		total = ansHra + ansDa;
		printf("total=%f\n",bs + total);
	}		
	return 0;
}
