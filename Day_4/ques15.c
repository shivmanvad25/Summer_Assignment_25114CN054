//Write a program to Check Armstrong number. 

#include<stdio.h>
#include<math.h>

int main()
{
    int num, armt, sum=0, rem, count, orig;

    printf ("Enter the number :");
    scanf("%d", &num);
    
    orig=num;
    armt = num;
    count=0;
    while(armt>0)
        {
            armt = armt/10;
            count++;
        }

    while( num > 0)
    {
        rem= num % 10;
        sum= pow(rem , count) + sum;
        num = num/ 10 ;
    }
     
    
    if( sum == orig )
    {
        printf("The number %d is armstrong", orig);
    }
    else
    {
        printf("The number %d is not armstrong\n", orig);
    }

    return 0;


   
    

}

