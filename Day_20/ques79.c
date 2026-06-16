//Write a program to Find row-wise sum.

#include<stdio.h>

int main()
{
    int row, col, i, j, rowsum;

    printf("Enter number of row and column : ");
    scanf("%d%d",&row ,&col);

    int a[row][col];

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Enter element [%d][%d] :",i+1, j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Original matrix is :");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
       int rowsum = 0;

        for(j=0; j<col; j++)
        {
            rowsum += a[i][j];
        }
        printf("SUM OF ROW %d is : %d.\n", i+1, rowsum);
    }

    return 0;
}