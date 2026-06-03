//Write a program to Recursive sum of digits. 

#include<stdio.h>

int sum(int num)
{
    if(num==0)
    return 0;

    else
    return num%10 + sum(num / 10);

}

int main()
{
    int num;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);

    printf("THE SUM OF DIGITS OF %d IS : %d \n",num, sum(num));

    return 0;
}