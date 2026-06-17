//Write a program to Find string length without strlen().

#include<stdio.h>

int main()
{
    int len=0 , i=0;
    char str[100];

    printf("Enter name : ");
    scanf("%s", str);

    while(str[i]!='\0')
    {
        len++;
        i++;
    }

    printf("Length of string is : %d.\n",len);

    return 0;




}
