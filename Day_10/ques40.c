//write a program to print chatacter pyramid

#include<stdio.h>

int main()
{
    int n, i, j, q, k; 

    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        char c = 'A'+ i - 2 ;

        for(q=1; q<=n-i; q++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c", 64+j);
        }
        for(k=1; k<=i-1; k++)
       {
           printf("%c",c);
           c--;
        }

        printf("\n");
    }

    return 0;
}
