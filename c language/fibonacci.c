#include <stdio.h>

int main()
{
    int num, a = 0, b = 1, c;
    int i=1;

//    printf("Enter number:- ");
//    scanf("%d", &num);
//
//    for(i = 1; i <= num; i++)
//    {
//        printf("%d ", a);
//
//        c = a + b;
//        a = b;
//        b = c;
//    }

   do
   {
   	 printf("%d ", a);

        c = a + b;
        a = b;
        b = c; 	
   }
   while(i<=num);
   
    return 0;
}
