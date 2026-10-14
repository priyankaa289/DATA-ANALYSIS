#include<stdio.h>
int main()
{
	int phy,chem,bio,math,comp,total;
	float avg;
	
	printf("enter a physics mark:- ");
	scanf("%d",&phy);
	printf("enter a chemistry mark:- ");
	scanf("%d",&chem);
	printf("enter a biology mark:- ");
	scanf("%d",&bio);
	printf("enter a mathematics mark:- ");
	scanf("%d",&math);
	printf("enter a computer mark:- ");
	scanf("%d",&comp);
	
	total = phy + chem + bio + math + comp;
	printf("total:=%d\n",total);
	
	avg=total/5;
	printf("avg:=%.2f\n",avg);
	
	if(avg>80 && avg<=90)
	{
		printf("A Grade");
	}
	else if(avg>70 && avg<=80)
	{
		printf("B Grade");
	}
	else if(avg>60 && avg<=70)
	{
		printf("C Grade");
	}
    else if(avg>50 && avg<=60)
	{
		printf("D Grade");
	}
    else if(avg>40 && avg<=50)
	{
		printf("E Grade");
	}
	else
	{
		printf("Fail");
    }
 	return 0;
}
