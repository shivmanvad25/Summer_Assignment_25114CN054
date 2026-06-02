//Write a program to Count set bits in a number.

#include<stdio.h>


int main()
{
    int num, dec, count=0;    
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);

    while(num>0)
    {
        dec = num %2;
        if( dec==1)
        { 
          count++;
        }
        num = num / 2;

        printf("dec=%d, count=%d, num= %d\n" , dec, count, num);
    }

    printf(" THE SET BITS ARE : %d", count);


    return 0;

}

