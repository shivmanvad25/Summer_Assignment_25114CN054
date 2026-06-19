//Write a program to Find first repeating character.


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
            if( str[i]==str[j])
            {
                count++;
            }

        }
        if(count > 1)
        {
            printf("First repeating character is : %c\n",str[i]);
            temp=1;
            break;
        }

        
    }
    if(temp==0)
    {
        printf("No repeating character.\n");
    }

    
    
    return 0;
}