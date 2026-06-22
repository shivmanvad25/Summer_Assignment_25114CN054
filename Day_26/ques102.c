//Write a program to Create voting eligibility system.

#include<stdio.h>

int main()
{
    int age;

    printf("ENTER YOUR AGE : ");
    scanf("%d",&age);

    if(age<0)
    {
        printf("INVALID AGE.\n");
    }
    else if (age>=18)
    {
        printf("ELIGIBLE FOR VOTING.\n");
       
    }
    else
    {
        printf(" NOT ELIGIBLE FOR VOTING.\n");
    }

    return 0;
    
}