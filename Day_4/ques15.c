//Write a program to Check Armstrong number. 

#include<stdio.h>


int main()
{
    int num, armt, sum=0, rem;

    printf ("Enter the number :");
    scanf("%d", &num);
    
    armt = num;

    while( num > 0)
    {
        rem= num % 10;
        sum= rem*rem*rem + sum;
        num = num/ 10 ;
    }

    if( sum == armt)
    {
        printf("The number %d is armstrong", armt);
    }
    else
    {
        printf("The number %d is not armstrong\n", armt);
    }

    return 0;


   
    

}

