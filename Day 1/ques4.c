//count digit in a number
#include<stdio.h>

int main()
{
    int num, count=0;
    printf(" Enter the number for digit counting :");
    scanf("%d",&num);

    while(num>0)
    {
        num=num/10;
        count++;
    }
      
    printf("digit in the number is %d\n", count);

    return 0;
    


}