//Write a program to Find LCM of two numbers.

#include<stdio.h>

int main()
{
    int n1,n2, i;

    printf("Enter two numbers : ");
    scanf("%d%d",&n1, &n2);

    for( i=1 ; i<=n1 * n2; i++)
    {
        if(i%n1 == 0 && i%n2 == 0)
        {
            printf("Lcm of the number is = %d\n",i);
            break;
        }
    }
     

     return 0;
}