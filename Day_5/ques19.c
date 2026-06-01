//Write a program to Print factors of a number.

// which gave the remainder as zero. 

#include<stdio.h>

int main()
{
    int n, j;

    printf("ENTER THE NUMBER : ");
    scanf("%d" ,&n);

    printf("THE FACTORS OF %d ARE -",n);

    for(j=1; j<= n; j++)
    {
       if ( n % j == 0)
        {

            printf(" %d,",j);
    
        }
    
    }
    return 0;
}