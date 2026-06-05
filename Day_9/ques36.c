//Write a program to Print hollow square pattern

#include<stdio.h>

int main()
{
    int row,i ,j;
     printf("ENTER THE LENGTH OF SIDE OS A SQUARE : ");
     scanf("%d", &row);

     for(i=1; i<=row; i++)
     {
        for(j=1; j<=row; j++)
        {
            if(i==1 || j==1 || i==row || j== row)
            printf("* "); 
            
            else
            printf("  ");
        }

        printf("\n");
     }

     return 0;
}