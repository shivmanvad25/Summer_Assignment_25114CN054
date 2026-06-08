//Write a program to Write function for perfect number.

#include<stdio.h>

int perfect(int n)
{
    int i, sum=0;

    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum += i;
        }
    }

    return(sum==n);
}

int main()
{
    int a;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &a);

    if(perfect(a))
    {
        printf("%d is a perfect number.\n",a);
    }
    else
    {
        printf("%d is not a perfect number.",a);
    }
     
    return 0;

}
