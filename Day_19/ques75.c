//Write a program to Transpose matrix. 

#include<stdio.h>

int main()
{
    int row, col, i, j;

    printf("Enter number of row and column : ");
    scanf("%d%d",&row ,&col);

    int a[row][col];

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
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

    printf("Transpose of matrix is :");

    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

        
    
    return 0;
   
}