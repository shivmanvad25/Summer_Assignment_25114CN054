//Write a program to Write function to find factorial.

#include<stdio.h>

int fact(int x)
{
    int fact=1, i;
    
    for(i= x; i>=1; i--)
       {
         fact = fact * i;
       }

        return fact;
     
}

int main()
{
    int num;

    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);

    printf("FACTORIAL OF %d! = %d\n",num, fact(num));

    return 0;
}