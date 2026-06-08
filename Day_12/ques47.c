//Write a program to Write function for fibonacci.

#include<stdio.h>

void fib(int n)
{
    int i, third, a=0, b=1;

    if(n>=1)
    printf("%d ",a);

    if(n>=2)
    printf("%d ",b);


    for(i=3; i<=n; i++)
    {
      third = a + b;
      printf("%d ",third);
      
      a=b;
      b=third;

    }

    }

int main()
{
    int x;

    printf("ENTER THE NUMBER OF TERMS: ");
    scanf("%d",&x);
    printf("fibonacci series is :");
    fib(x);

    return 0;
}
