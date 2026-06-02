//Write a program to Find x^n without pow().

#include<stdio.h>

int main()
{
    int n, x, j, opt=1;

    printf("ENTER THE BASE : ");
    scanf("%d", &x);

    printf("ENTER THE POWER : ");
    scanf("%d", &n);

    for(j=1; j<=n; j++)
    {
      opt = opt * x;
    }

    printf("j=%d, opt=%d\n",j,opt);

    printf("THE OUTPUT OF %d^%d = %d\n", x,n, opt);

    return 0;


}

