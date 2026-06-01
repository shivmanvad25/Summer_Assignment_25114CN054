 
//Write a program to Check perfect number. 
// sum of all divisors is equal to given number

#include<stdio.h>
 
int main()
{
    int num, j, sum=0;
    printf(" ENTER THE NUMBER : ");
    scanf("%d", &num);

    for(j=1; j<num; j++)
    {
        if(num%j == 0)
        {
        sum = sum + j;

        printf("j= %d sum= %d\n", j , sum);
        }
    }

    if(sum == num)
    {
        printf(" The given number %d is a perfect number", num);
    }
    else
    {
        printf("The given number %d is not a perfect number", num);
    }

    return 0;






}
