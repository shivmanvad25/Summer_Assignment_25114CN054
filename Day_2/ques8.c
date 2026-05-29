// Whether a given number is palindrome or not

#include<stdio.h>

int main()
{
    int num, reverse = 0, real;

    printf("Enter the number :");
    scanf("%d",&num);

    real = num;

    while(num>0)
    {
        reverse = reverse*10 + (num%10);
        num = num/10;
    
    }

    if (reverse == real )
    {
        printf(" Number is palindrome\n");
    }
    else
    {
        printf(" Number is not palindrome\n");
    }

    return 0;
    
}