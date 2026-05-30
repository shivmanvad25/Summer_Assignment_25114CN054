//Write a program to Find GCD of two numbers. 

#include<stdio.h>

int main()
{
    int n1, n2, gcd, i;

    printf(" Enter two numbers for GCD :");
    scanf("%d%d", &n1, &n2);

    for(i=1; i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    printf("GCD of the numbers is %d\n",gcd);

    return 0;
}
