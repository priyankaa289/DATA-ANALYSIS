//prime number
#include <stdio.h>

int main()
{
    int no,i;
    int count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &no);

    for(i = 1; i <= no; i++)
    {
        if(no % i == 0)
        {
            count=count+1;
        }
    }

    if(count == 2)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}
