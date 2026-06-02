//Write a program to Convert binary to decimal. 

#include<stdio.h>

int main()
{
    int binary, rem, dec=0, base=1 ;

    printf(" ENTER THE BINARY NUMBER : ");
    scanf("%d", &binary);

    while(binary > 0)
    {
        rem = binary%10; // get the last digit
        dec = dec + (rem * base); //
        base = base * 2;
        binary = binary / 10;


    }

    printf("THE DECIMAL NUMBER IS : %d\n",dec);


    return 0;
    


}


