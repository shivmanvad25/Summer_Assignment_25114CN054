//Write a program to Find nth Fibonacci term. 

#include<stdio.h>

int fib(int num)
{
    
    if( num==0) //base case 1
    return 0;

    if( num==1 )// base case 2
    return 1;
    
    return fib(num - 1)+ fib(num - 2); // recursive case   
}
int main()
{
    int num , i;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);

    printf(" The %dth term is %d " ,num, fib(num));

    return 0;

}