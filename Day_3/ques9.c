// Check whether a number is prime or not

#include<stdio.h>

int main()
{
    int n, i, prime=1;

    printf("Enter the number : ");
    scanf("%d", &n);  //take input here

    for( int i = 2; i*i <= n; i++ )
    {
        if( n % i == 0)
        {
            prime = 0;
        }
    }
    if(prime == 1)
    {
        printf("THE GIVEN NUMBER %d IS PRIME\n", n);
    
    }
    else
    {
        printf("THE GIVEN NUMBER %d IS NOT PRIME", n);
    }

    return 0;

}

