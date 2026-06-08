// Write a program to Write function for palindrome.

#include <stdio.h>

int pallindrome(int x)
{
    int temp, rev=0;

    while (x > 0)
    { 
        temp=x;

        rev = rev * 10 + (x%10);
        x = x / 10;

    }
    return rev;
}

int main()
{
    int a;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&a);

    if(pallindrome(a)==a)
    {
        printf("%d is a palindrome number.\n",a);
    }
    else
    {
        printf("%d is not a palindrome number.\n",a);
    }


    return 0;

}
