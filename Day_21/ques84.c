//Write a program to Convert lowercase to uppercase.

#include<stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter string in lower case : ");
    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++)
    {
        str[i] = str[i] - 32;

    }

    printf("String in uppercase is : %s\n",str);

    return 0;
}