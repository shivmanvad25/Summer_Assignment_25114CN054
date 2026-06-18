//Write a program to Remove spaces from string.

#include<stdio.h>

int main()
{
    char str[100], str_nospc[100];
    int i,j=0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]!='\0'; i++)
    {

        if(str[i]!=' ')
        {
            str_nospc[j++] = str[i];
        }
    }

    str_nospc[j]='\0';

    printf("String after removing spaces : %s\n",str_nospc);


    return 0;

}