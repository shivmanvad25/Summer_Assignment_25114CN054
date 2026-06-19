//Write a program to Find first non-repeating character.

#include<stdio.h>

int main()
{
    int i,j, count, temp=0;
    char str[100];

    printf("ENTER THE STRING : ");
    scanf("%s",str);

    for(i=0; str[i]!='\0'; i++)
    {
        count=0;
        for(j=0; str[j]!='\0'; j++)
        {
            if(i!=j && str[i]==str[j])
            {
                count++;
            }

        }
        if(count == 0)
        {
            printf("First non repeating character is : %c\n",str[i]);
            temp=1;
            break;
        }

        
    }
    if(temp==0)
    {
        printf("No non repeating character.\n");
    }

    
    
    return 0;
}