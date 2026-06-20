//Write a program to Check string rotation. 

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100], first, temp[100];
    int i, j, len, count=0;

    printf("ENTER FIRST STRING : ");
    scanf("%s",str1);

    printf("ENTER SECOND STRING : ");
    scanf("%s",str2);

    len = strlen(str1);

    if(len != strlen(str2))
    {
        printf("STRINGS ROTATION IS NOT THERE .\n");
        return 0;
       
    }

    strcpy(temp, str1);

    for(i=0; i<len; i++)
    {
        if(strcmp(temp, str2) == 0)
        {
            count=1;
            break;
        }

        first = temp[0];


        for(j=0; j<len-1; j++)
        {
            temp[j]= temp[j+1];

        }
        temp[len-1] = first;

    }

    if(count==1)
    {
        printf("STRINGS ROTATION IS THERE .\n");
    }
    else
    {
        printf("STRINGS ROTATION IS NOT THERE .\n");
    }

    return 0;



}