//Write a program to Find column-wise sum.

#include<stdio.h>

int main()
{
    int row, col, i, j, columnsum;

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

    for(i=0; i<col; i++)
    {
        columnsum = 0;

        for(j=0; j<row; j++)
        {
            columnsum += a[j][i];
        }
        printf("SUM OF COLUMN %d is : %d.\n", i+1, columnsum);
    }

    return 0;
}