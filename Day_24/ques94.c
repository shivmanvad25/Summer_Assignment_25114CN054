//Write a program to Compress a string. 

#include<stdio.h>

int main()
{
    char str[100], current;
    int i, flag=1;

    printf("ENTER THE STRING : ");
    scanf("%s",str);

    current=str[0];

    for(i=1; str[i]!='\0'; i++)
    {
        if(str[i] == current)
        {
            flag++;
        }
        else
        {
            printf("%c%d",current, flag);
            current = str[i];
            flag=1;
        }

    }
    printf("%c%d\n",current, flag);
    return 0;

    
    
}