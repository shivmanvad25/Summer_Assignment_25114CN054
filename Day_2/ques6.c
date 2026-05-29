// Reverse of a number

#include<stdio.h>

int main()
{
    int num, digit, reverse=0;

    printf("Enter the number for reverse :");
    scanf("%d",&num);

    while(num>0)
    {
        digit = num%10;
        reverse = reverse*10 + digit;
        num = num/10;

    }

    printf("Reverse of the given number is = %d\n", reverse);

    return 0;
}