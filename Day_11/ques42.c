//Write a program to Write function to find maximum.

#include<stdio.h>

int max(int x , int y)
{
    return((x > y) ? x : y);
}

int main()
{
    int a, b;

    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d", &a, &b);

    printf("MAXIMUM OF TWO NUMBERS IS %d\n", max(a,b));

    return 0;
}