#include<stdio.h>

int main()
{
//	int i,no,fact=1;

//	printf("enter a number:-");
//	scanf("%d",&no);
//	
//	for(i=1;i<=no;i++)
//	{
//		fact=fact*i;
//		
//	}
//	printf("%d",fact);


//while loop

//	int i=1,no,fact=1;
//
//    printf("enter a number:-");
//	scanf("%d",&no);
//	
//	while(i<=no)
//	{
//		fact=fact*i;
//		i++;
//	}	
//     printf("%d",fact);


//do while loop

    int i=1,no,fact=1;
    
     printf("enter a number:-");
     scanf("%d",&no);
     
     do{
	    fact=fact*i;
		 i++;
	 }
	 while(i<=no);
      printf("%d",fact);

	return 0;
}
