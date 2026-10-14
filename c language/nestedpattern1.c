//        *
//      * *
//    * * *
//  * * * *
//* * * * *
//
//#include<stdio.h>
//
//int main()
//{
//	int i,j,s;
//	
//	for(i=1;i<=5;i++)
//	{
//		for(s=4;s>=i;s--)
//		{
//			printf("  ");
//		}
//		
//		for(j=1;j<=i;j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//* * * * *
//  * * * *
//    * * *
//      * *
//        *

//#include <stdio.h>
//
//int main()
//{
//    int i, j, s;
//
//    for(i = 1; i <= 5; i++)
//    {
//        for(s = 2; s <= i; s++)
//        {
//            printf("  ");
//        }
//
//        for(j = 5; j >= i; j--)
//        {
//            printf("* ");
//        }
//
//        printf("\n");
//
//    }
//
//    return 0;
//}


//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

//#include<stdio.h>
//
//int main()
//{
//	int i,j;
//	
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1

//#include<stdio.h>
//
//int main()
//{
//	int i,j;
//	
//	for(i=5;i>=1;i--)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//1 2 3 4 5
//2 3 4 5
//3 4 5
//4 5
//5


//#include<stdio.h>
//
//int main()
//{
//	int i,j;
//	
//	for(i=1;i<=5;i++)
//	{
//		for(j=i;j<=5;j++)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//5 
//5 4
//5 4 3 
//5 4 3 2 
//5 4 3 2 1 

//#include<stdio.h>
//
//int main()
//{
//	int i,j;
//	
//	for(i=5;i>=1;i--)
//	{
//		for(j=5;j>=i;j--)
//		{
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//5 4 3 2 1 
//5 4 3 2 
//5 4 3 
//5 4
//5

//#include<stdio.h>
//
//int main()
//{
//	int i,j;
//	
//	for(i=1;i<=5;i++)
//	{
//		for(j=5;j>=i;j--)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//5 4 3 2 1 
//4 3 2 1
//3 2 1
//2 1 
//1

//#include<stdio.h>
//
//int main()
//{
//	int i,j;
//	
//	for(i=5;i>=1;i--)
//	{
//		for(j=i;j>=1;j--)
//		{
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//5
//4 5
//3 4 5 
//2 3 4 5 
//1 2 3 4 5

//#include<stdio.h>
//
//int main()
//{
//	int i,j;
//	
//	for(i=5;i>=1;i--)
//	{
//		for(j=i;j<=5;j++)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//1
//2 3
//4 5 6
//7 8 9 10
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, n = 1;
//
//    for(i = 1; i <= 4; i++)
//    {
//        for(j = 1; j <= i; j++)
//        {
//            printf("%d ", n);
//            n++;
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
 
//#
//# @
//# @ #
//# @ # @
//# @ # @ #

//#include<stdio.h>
//
//int main()
//{
//	int i,j;
//	
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			if(j%2==1)
//			{
//			 printf("#");	
//			}
//			else
//			{
//			 printf("@");		
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#
//@ #
//# @ #
//@ # @ #
//# @ # @ #

//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//
//    for(i = 1; i <= 5; i++)
//    {
//        for(j = 1; j <= i; j++)
//        {
//            if((i+j) % 2 == 0)
//            {
//                printf("# ");
//            }
//            else
//            {
//                printf("@ ");
//            }
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}


//#include<stdio.h>
//int main(){
	
//	1 2 3 4 5 5 4 3 2 1
//	1 2 3 4     4 3 2 1
//	1 2 3         3 2 1
//	1 2             2 1
//	1                 1
//	1                 1
//	1 2             2 1
//	1 2 3         3 2 1
//	1 2 3 4     4 3 2 1
//	1 2 3 4 5 5 4 3 2 1
	
//	
//	int i,j,s;
//	
//	for(i=5;i>=1;i--){
//		for(j=1;j<=i;j++){
//			printf("%d ",j);
//		}
//		for(s=4*2-i+1;s>=i;s--){
//			printf("  ");
//		}
//		
//		for(j=i;j>=1;j--){
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//	
//	for(i=1;i<=5;i++){
//		
//		for(j=1;j<=i;j++){
//			printf("%d ",j);
//		}
//		for(s=4*2-i+1;s>=i;s--){
//			printf("  ");
//		}
//		for(j=i;j>=1;j--){
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//	
////	1
////	2 1
////	3 2 1
////	4 3 2 1
////	5 4 3 2 1
//	
//	
//	return 0;
//}
//
//                  *
//			    *       *	    
//		    *               *
//		*                       *
//	 *                             *
//		*                       *
//			*               *
//				*       *  
//					*  

//#include <stdio.h>
//
//int main()
//{
//    int i,j;
//    
//     for(i=1;i<=9;i++)
//     {
//     	for(j=1;j<=9;j++)
//     	{
//     		if((i+j==6)||(j-i==4)||(i-j==4)||(i+j==14))
//     		{
//     			printf("* ");
//		    }
//		    else
//		    {
//		    	printf("  ");
//			}
//		}
//		printf("\n");
//	 }
//    
//    
//    return 0;
//}

  // * * * * *
  // *       *
  // * * * * *
  // *       *
  // *       *
  
//#include<stdio.h>
//int main()
//{
//  
//  int i,j;
//  
//  for(i=1;i<=5;i++)
//  {
//  	for(j=1;j<=5;j++)
//  	{
//  		if((i==1)||(j==1)||(i==3)||(j==5))
//  		{
//  			printf("* ");
//		}
//		else{
//			printf("  "); 
//		}
//	}
//	printf("\n");
//	  
//  }
//  
//  return 0;
//}

//  *       *
//    *   *
//      *

//#include<stdio.h>
//int main()
//{
//  
//  int i,j;
//  
//  for(i=1;i<=3;i++)
//  {
//  	for(j=1;j<=5;j++)
//  	{
//  		if((i==j)||(i+j==6))
//  		{
//  			printf("* ");
//		}
//		else{
//			printf("  "); 
//		}
//	}
//	printf("\n");
//	  
//  }
//  
//  return 0;
//}


//    *       *
//      *   *
//        *
//      *   *
//    *       *
 
//#include<stdio.h>
//int main()
//{
//  
//  int i,j;
//  
//  for(i=1;i<=5;i++)
//  {
//  	for(j=1;j<=5;j++)
//  	{
//  		if((i==j)||(i+j==6))
//  		{
//  			printf("* ");
//		}
//		else{
//			printf("  "); 
//		}
//	}
//	printf("\n");
//	  
//  }
//  
//  return 0;
//}

//           *
//         *   *
//       * * * * *                     
//     *           *
//   *               *

//#include<stdio.h>
//int main()
//{
//  
//  int i,j;
//  
//  for(i=1;i<=5;i++)
//  {
//  	for(j=1;j<=9;j++)
//  	{
//  		if((i+j==6)||(j-i==4)||(i==3 && j>3 && j<7))
//  		{
//  			printf("* ");
//		}
//		else{
//			printf("  "); 
//		}
//	}
//	printf("\n");
//	  
//  }
//  
//  return 0;
//}


//  * * * * 
//  *     *
//  * * * * 
//  *
//  *

//#include<stdio.h>
//int main()
//{
//  
//  int i,j;
//  
//  for(i=1;i<=5;i++)
//  {
//  	for(j=1;j<=4;j++)
//  	{
////  		for R add i-j==1
//  		if((j==1)||(i==1)||(i==3)||(i<=3 && j==4))
//  		{
//  			printf("* ");
//		}
//		else{
//			printf("  "); 
//		}
//	}
//	printf("\n");
//	  
//  }
//  
//  return 0;
//}

// * * *
//   *
//   *
//   *
// * * *

//#include<stdio.h>
//int main()
//{
//  
//  int i,j;
//  
//  for(i=1;i<=5;i++)
//  {
//  	for(j=1;j<=3;j++)
//  	{
//  		if((i==1)||(i==5)||(j==2))
//  		{
//  			printf("* ");
//		}
//		else{
//			printf("  "); 
//		}
//	}
//	printf("\n");
//	}
//  
//  return 0;
//}

//   *       *
//   * *   * *
//   *   *   *
//   *       *
//   *       *

//#include<stdio.h>
//int main()
//{
//  
//  int i,j;
//  
//  for(i=1;i<=5;i++)
//  {
//  	for(j=1;j<=5;j++)
//  	{
//  		if((j==1)||(j==5)||(i == j && i <= 3)||(i+j==6 && i<=3))
//  		{
//  			printf("* ");
//		}
//		else{
//			printf("  "); 
//		}
//	}
//	printf("\n");
//	}
//  
//  return 0;
//}

//  * * * *  * * * *  * * *  *     *   * * * *   *       *  *    *   * * * *     
//  *     *  *     *    *      * *    *       *  * *     *  *  *    *       *      
//  * * * *  * * * *    *       *     * * * * *  *   *   *  * *     * * * * *   
//  *        * *        *       *     *       *  *     * *  *  *    *       *  
//  *        *   *    * * *     *     *       *  *       *  *    *  *       *

#include<stdio.h>
int main()
{
  
  int i,j;
  
  for(i=1;i<=5;i++)
  {
  	for(j=1;j<=35;j++)
  	{
  		if(
		  (j==1)||(i==1 && j<=4)||(i==3 && j<=4)||(i<=3 && j==4)||
		  (j==5)||(i==1 && j<=8)||(i==3 && j<=8)||(j==8 && i<=3)||(j==7 && i==4)||(j==8 && i==5)||
		  (j==10)||(i==1 && j>=9 && j<=11)||(i==5 && j>=9 && j<=11)||
		  (j==14 && i>=3)||(j==12 && i<=1)||(j==13 && i==2)||(j==15 && i==2)||(j==16 && i==1)||
		  (j==17 && i>1)||(i==1 && j>=18 && j<=20)||(j==21 && i>1)||(i==3 && j>=18 && j<=20)||
		  (j==22)||(j==26)||(i==2 && j==23)||(i==3 && j==24)||(i==4 && j==25)||
		  (j==27)|(i==1 && j==30)||(i==2 && j==29)||(i==3 && j==28)||(i==4 && j==29)||(i==5 && j==30)||
		  (j==31 && i>1)||(i==1 && j>=32 && j<=34)||(j==35 && i>1)||(i==3 && j>=32 && j<=34)
		  
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





