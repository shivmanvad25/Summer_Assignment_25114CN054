//Write a program to Character frequency. 

//program to find freq of certain character

#include<stdio.h>

int main()
{
    char str[100], cha;
    int flag=0, i;

    printf("\nEnter the string : ");
    fgets(str, sizeof(str), stdin);

    printf("ENTER THE CHARACTER TO FIND FREQ : ");
    scanf("\n%c",&cha);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] == cha)
        {
            flag++;
        }
    }

    printf("Frequency of %c is : %d\n",cha , flag);

    return 0;
}





    
