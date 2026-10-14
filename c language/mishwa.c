#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
          {
          	for(j=1;j<=31;j++)
          	{
          		if((j==1)||(j==5)||(i==j && i<=3)||(i+j==6 && i<=3)||
				  (j==7)||(i==1 && j>=6 && j<=8)
				  )
          		{
          			printf("* ");
				}
				else{
				  	printf("  ");
				  }
			}
			 printf("\n");
} 
	
	return 0;
}
