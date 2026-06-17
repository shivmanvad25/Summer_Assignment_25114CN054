//Write a program to Reverse a string. 
//reverse in the same string

#include<stdio.h>

int main()
{
    int len=0 , i;
    char str[100], c;

    printf("Enter name : ");
    scanf("%s", str);

    while(str[len]!='\0')
    {
        len++;
    }
    
    for(i=0; i<len/2; i++)
    {
       c = str[i];
       str[i] = str[len-1-i];
       str[len-1-i] = c;
    }

    printf("Reversed string is : %s\n",str);


    return 0;




}

    
