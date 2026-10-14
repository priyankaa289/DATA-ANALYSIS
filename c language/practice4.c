#include<stdio.h>
int main()
{
//	5 number (nested if)
//	int a,b,c,d,e;
//	
//	printf("enter a number:- ");
//	scanf("%d",&a);
//	printf("enter a number:- ");
//	scanf("%d",&b);
//	printf("enter a number:- ");
//	scanf("%d",&c);
//	printf("enter a number:- ");
//	scanf("%d",&d);
//	printf("enter a number:- ");
//	scanf("%d",&e);
//	
//	if(a>b)
//	{
//		if(a>c)
//		{
//			if(a>d)
//			{
//				if(a>e)
//				{
//					printf("A is max");
//				}
//				else
//				{
//					printf("E is max");
//				}
//			}
//			else
//			{
//				if(d>e)
//				{
//					printf("D is max");
//				}
//				else
//				{
//					printf("E is max");
//				}
//			}
//		}
//		else
//		{
//			if(c>d)
//			{
//				if(c>e)
//				{
//					printf("C is max");
//				}
//				else
//				{
//					printf("E is max");
//				}
//			}
//			else
//			{
//				if(d>e)
//				{
//					printf("D is max");
//				}
//				else
//				{
//					printf("E is max");
//				}
//			}
//		}
//	}
//	else
//	{
//		if(b>c)
//		{
//			if(b>d)
//			{
//				if(b>e)
//				{
//					printf("B is max");
//				}
//				else
//				{
//					printf("E is max");
//				}
//			}
//			else
//			{
//				if(d>e)
//				{
//					printf("D is max");
//				}
//				else
//				{
//					printf("E is max");
//				}
//			}
//		}
//		else
//		{
//			if(c>d)
//			{
//				if(c>e)
//				{
//					printf("C is max");
//				}
//				else
//				{
//					printf("E is max");
//				}
//			}
//			else
//			{
//				if(d>e)
//				{
//					printf("D is max");
//				}
//				else
//				{
//					printf("E is max");
//				}
//				
//			}
//		}
//	}
	
//	check alphabet ,digit or special character

//	char ch;
//	
//	printf("enter a character:-");
//	scanf("%c",&ch);
//	
//	if((ch >='A' && ch <='Z') || (ch >='a' && ch <='z'))
//	{
//		printf("Alphabet");
//	}
//	else
//	{
//		if(ch >='0' && ch <='9')
//		{
//			printf("digit");
//		}
//		else
//		{
//			printf("special character");
//		}
//	}


//positive, negative or zero 



int num;

   printf("enter a number:-");
   scanf("%d",&num);
   
   
   if(num>=0)
   {
   	if(num==0)
   	{
   		printf("number is zero");
	   }
	   else
	   {
	   	printf("number is poitive");
	   }
   }
   else
   {
   	printf("number is negative");
   }
	
	
	return 0;
}
