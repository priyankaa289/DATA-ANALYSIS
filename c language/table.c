#include<stdio.h>

//int main()
//{
//	int no;
//	
//	printf("Enter a number:-");
//	scanf("%d",&no);
//	
//	int count=10;
//	
//	while(count>=1)
//	{
//		int table=no*count;
//		printf("%d*%d=%d\n",no,count,table);
//		count=count-1;
//	}
//	return 0;
//}

int main()
{
	int no1,no2;
	
	printf("Enter a number1:-");
	scanf("%d",&no1);
	
	printf("Enter a number2:-");
	scanf("%d",&no2);
	int count=10;
	
	while(count>=1)
	{
		int table1=no1*count;
		int table2=no2*count;
		
		printf("%d*%d=%d\t %d*%d=%d\n",no1,count,table1,no2,count,table2);
		count=count-1;
	}
	return 0;
}
