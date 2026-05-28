//factorial of a number

#include<stdio.h>
int main()
{
    int num, factorial=1;

    printf("enter the number of the factorial: ");
    scanf("%d",&num);

    for(int i=num; i>=1; i--)
     {
        factorial = factorial*i;
     }
     printf("factorial of the number is = %d\n",factorial);


     return 0;

}