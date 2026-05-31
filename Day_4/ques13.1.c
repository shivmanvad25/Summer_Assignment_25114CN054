//Write a program to Generate Fibonacci series. 

#include<stdio.h>

int fib(int num)
{
    if(num==0)
    return 0; //base case

    if(num==1)
    return 1; // again base case

    return fib(num - 1)+ fib(num - 2); //recursive case

}

int main()
{
     int num , i;

     printf(" Enter the number of terms : ");
     scanf("%d ",&num);

     for(i=0; i<=num ; i++)
     {
        printf("%d ", fib(i));

     }
     return 0;
}


