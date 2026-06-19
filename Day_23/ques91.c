//Write a program to Check anagram strings. 

#include<stdio.h>
#include<string.h>

int main()
{
    char strA[100], strB[100];
    int i, j, flag1, flag2, count=0;

    printf("Enter first string : ");
    scanf("%s",strA);

    printf("Enter second string : ");
    scanf("%s",strB);

    if(strlen(strA) != strlen(strB))
    {
        count=1; 

    }

    else
    {
        for(i=0; strA[i]!='\0'; i++)
        {
            flag1=0;
            flag2=0;

            for(j=0; strB[j]!='\0'; j++ )
            {
                if(strA[i]==strA[j])
                {
                    flag1++;
                }
                if(strA[i]==strB[j])
                {
                    flag2++;
                }
            }
            if(flag1 != flag2)
            {
                count=1;
                break;
            }
        }

    }

    if(count==0)
    {
        printf("STRINGS ARE ANAGRAM.\n");
    }
    else
    {
        printf("STRINGS ARE NOT ANAGRAM.\n");
    }

    return 0;


}