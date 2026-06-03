// Write a program to Recursive factorial.

#include <stdio.h>

int fact(int n)

{
    if (n == 0 || n == 1)
        return 1;

    else
        return n * fact(n - 1);
}

int main()
{
    int num;

    printf("ENTER THE NUMBER FOR THE FACTORIAL : ");
    scanf("%d", &num);

    printf("THE FACTORIAL OF %d IS : %d\n ",num , fact(num));

    return 0;
}