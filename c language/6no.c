//#include<stdio.h>
//int main()
//{
//	int a,b,c,d,e,f;
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
//	printf("enter a number:- ");
//	scanf("%d",&f);
//	
//	if(a>b)
//	{
//		if(a>c)
//		{
//			if(a>d)
//			{
//				if(a>e)
//				{
//					if(a>f)
//					{
//						printf("A is max");
//					}
//				}
//			}
//		}
//	}

#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;

    printf("Enter six numbers: ");
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    if (a > f)
                        printf("Maximum = %d", a);
                    else
                        printf("Maximum = %d", f);
                }
                else
                {
                    if (e > f)
                        printf("Maximum = %d", e);
                    else
                        printf("Maximum = %d", f);
                }
            }
            else
            {
                if (d > e)
                {
                    if (d > f)
                        printf("Maximum = %d", d);
                    else
                        printf("Maximum = %d", f);
                }
                else
                {
                    if (e > f)
                        printf("Maximum = %d", e);
                    else
                        printf("Maximum = %d", f);
                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    if (c > f)
                        printf("Maximum = %d", c);
                    else
                        printf("Maximum = %d", f);
                }
                else
                {
                    if (e > f)
                        printf("Maximum = %d", e);
                    else
                        printf("Maximum = %d", f);
                }
            }
            else
            {
                if (d > e)
                {
                    if (d > f)
                        printf("Maximum = %d", d);
                    else
                        printf("Maximum = %d", f);
                }
                else
                {
                    if (e > f)
                        printf("Maximum = %d", e);
                    else
                        printf("Maximum = %d", f);
                }
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                if (b > e)
                {
                    if (b > f)
                        printf("Maximum = %d", b);
                    else
                        printf("Maximum = %d", f);
                }
                else
                {
                    if (e > f)
                        printf("Maximum = %d", e);
                    else
                        printf("Maximum = %d", f);
                }
            }
            else
            {
                if (d > e)
                {
                    if (d > f)
                        printf("Maximum = %d", d);
                    else
                        printf("Maximum = %d", f);
                }
                else
                {
                    if (e > f)
                        printf("Maximum = %d", e);
                    else
                        printf("Maximum = %d", f);
                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    if (c > f)
                        printf("Maximum = %d", c);
                    else
                        printf("Maximum = %d", f);
                }
                else
                {
                    if (e > f)
                        printf("Maximum = %d", e);
                    else
                        printf("Maximum = %d", f);
                }
            }
            else
            {
                if (d > e)
                {
                    if (d > f)
                        printf("Maximum = %d", d);
                    else
                        printf("Maximum = %d", f);
                }
                else
                {
                    if (e > f)
                        printf("Maximum = %d", e);
                    else
                        printf("Maximum = %d", f);
                }
            }
        }
    }

    return 0;
}
	
	
	
//	return 0;
//}
