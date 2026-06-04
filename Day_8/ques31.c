//Write a program to Print character triangle.

#include<stdio.h>

int main()
{
    int n, i, j;
    char cha;

    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        cha = 'A';   
        for(j=1; j<=i; j++)
        {
            printf("%c ", cha);
            cha++;
    
        }

        printf("\n");
    
    }

}