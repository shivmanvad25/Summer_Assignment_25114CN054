//Find product of a digit

#include<stdio.h>

int main()
{
    int num, product=1;

    printf("Enter the number :");
    scanf("%d",&num);

    while(num>0)
    {
        product = product*(num%10);
        num = num / 10;

    }

    printf("Product of the digit is  = %d\n", product);

    return 0;

}

