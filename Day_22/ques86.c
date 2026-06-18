//Write a program to count words in a sentence.

#include<stdio.h>

int main()
{
    char strA[100];
    int count=0, i;

    printf("ENTER A STRING :");
    fgets(strA, sizeof(strA), stdin);

    for(i=0; strA[i]!='\0'; i++)
    {
        //it will count even with more than one space
        if(strA[i]!=' ' && (i==0 || strA[i-1]==' '))
        {
            count++;
        }

    }

    printf("Number of words in a string is : %d\n", count);

    return 0;



}