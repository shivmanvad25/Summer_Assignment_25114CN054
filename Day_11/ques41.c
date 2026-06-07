//Write a program to Write function to find sum of two numbers

#include<stdio.h>

//function definition
int sum(int x , int y)
{
    return x + y;
}

int main()
{
    int a , b;

    printf("ENTER TWO NUMBERS :");
    scanf("%d %d", &a,&b);

    printf("THE SUM OF %d + %d = %d\n", a, b, sum(a,b));  //function calling

    return 0;
}



