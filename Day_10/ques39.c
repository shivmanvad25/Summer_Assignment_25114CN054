//Write a program to Print number pyramid.

#include<stdio.h>

int main()
{
    int n, i, j, k, q; 

    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        int a = i-1;
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("%d",k);
        }
        for(q=1; q<=i-1; q++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");

} 
 return 0;
}   