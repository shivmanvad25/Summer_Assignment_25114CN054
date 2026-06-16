//Write a program to Multiply matrices. 

#include<stdio.h>

int main()
{
    int r1, r2, c1, c2, i, j, k;
    
    printf("Enter rows and column of first matrix : ");
    scanf("%d%d",&r1 ,&c1);

    printf("Enter rows and column of second matrix : ");
    scanf("%d%d",&r2 ,&c2);

    
    int a[r1][c1], b[r2][c2], c[r1][c2];

    printf("Enter first matrix element : \n ");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("Enter element [%d][%d] = ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    }

    printf("Enter second matrix element :  \n");

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Enter element [%d][%d] = ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }

    }

    if(c1!=r2)
    {
        printf("Multiplication is not possible.\n ");
    }

    else
    {
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            c[i][j]=0;
            
            for(k=0; k<c1; k++)
            {
                c[i][j]+=a[i][k] * b[k][j];

            }
            
        }
    }

    printf("MULTIPLICATION OF MATRIX IS : \n");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");

    }
}



    return 0;
}
