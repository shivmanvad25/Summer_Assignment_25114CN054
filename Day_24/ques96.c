//Write a program to Remove duplicate characters.

#include<stdio.h>

int main()
{
    char str[200];
    int i, j, count;

    printf("ENTER THE STRING : ");
    fgets(str, sizeof(str), stdin);

    printf("STRING WITHOUT DUPLICATE CHARACTERS ARE :\n");

    for(i=0; str[i]!='\0'; i++)
    {
        count=0;
        
        for(j=0; j<i; j++)
        {
            if(str[i] == str[j])
            {
                count=1;
            }
                
        }
        if(count==0)
       {
            printf("%c",str[i]);
       }
    }


    return 0;
    
}