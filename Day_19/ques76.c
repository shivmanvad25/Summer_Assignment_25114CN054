//Write a program to Find diagonal sum. 

#include<stdio.h>

int main()
{
    int row, col, i, j, sum=0;

    printf("Enter number of row and column : ");
    scanf("%d%d",&row ,&col);

    int a[row][col];

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Enter element [%d][%d] = ", i+1, j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix is :\n");

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
        for(j=0; j<col; j++)
        {
            if(i == j || i+j == row-1 ) //condition for both diagonal
            {
                sum = sum + a[i][j];
            }

       }
    }

     printf("Sum of diagnal elements : %d ",sum);

    return 0;

}


    

     