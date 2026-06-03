//Write a program to Recursive reverse number. 

#include<stdio.h>


int reverse(int num , int rev)
{
    if(num==0)
    return rev;

    else
    {
     rev = rev * 10 + num%10;
      return reverse(num/10 , rev);
    }

}
int main()
{
    int num, rev=0;

    printf("ENTER THE NUMBER FOR REVERSE : ");
    scanf("%d", &num);

    printf("THE REVERSE OF %d IS : %d \n",num, reverse(num,rev));

    return 0;

}