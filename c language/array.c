// 1D array

//#include<stdio.h>
//
//int main()
//{
//	int a [10]={10,20,30,40,50,60,70,80,90,100};
//	
//	int i;
//	
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//  return 0;	
//}

// 2D array

//#include<stdio.h>
//
//int main()
//{	
//	int ar[3][4];
//	int i,j;
//	
//	printf("enter array element:-\n");
//	
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			scanf("%d",&ar[i][j]);
//		}		
//	}
//	printf("array elements are:\n");
//	
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			printf("%d ",ar[i][j]);
//		}
//		printf(" \n");
//	}	
//return 0;	
//}

//#include<stdio.h>
//
//int main()
//{
//	int row,col,i,j;
//	int a[4][4],b[4][4];
//
//	printf("enter a row :- ");
//	scanf("%d",&row);
//	printf("enter a column :-");
//	scanf("%d",&col);
//	
//	printf("\n A matrix:\n");
//	
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		{
//		 	scanf("%d",&a[i][j]);
//		}
//	}
//	
//	printf("\n B matrix:\n");
//	
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		{
//		 	scanf("%d",& b[i][j]);
//		}
//	}
//	printf("\n");
//	return 0;
//}

#include<stdio.h>

int main()
{
    int row, col, i, j;
    int a[4][4];

    printf("Enter a row :- ");
    scanf("%d", &row);
    printf("Enter a column :- ");
    scanf("%d", &col);

    printf("\n Enter matrix elements:-\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    
    
    

//    printf("\n A Matrix:\n");
//
//    for(i=0; i<row; i++)
//    {
//        for(j=0; j<col; j++)
//        {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }

    return 0;
}
