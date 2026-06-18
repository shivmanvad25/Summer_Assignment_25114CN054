//Write a program to Check palindrome string. 

#include<stdio.h>

int main()
{
    char str[100];
    int i, len=0, count=0;

    printf("Enter the string : ");
    scanf("%s", str);

    while(str[len]!='\0')
    {
        len++;
    }

    for(i=0; i<len/2; i++)
    {
        if(str[i]!=str[len-1-i])
        {
            count=1;
            break;
        }
    }

    if(count==0)
    {
        printf("String is palindrome.\n");
    }
    else
    {
        printf("String is not palindrome.\n");
    }

    return 0;


}