//Write a program to Print Armstrong numbers in a range.
#include<stdio.h>
#include<math.h>


int main()
{
    int num1, num2, i, rem, sum, armt, count=0;

    printf(" ENTER THE RANGE :");
    scanf("%d %d", &num1, &num2);
    
    printf(" ARMSTRONG NUMBER FROM %d TO %d ARE : \n", num1, num2);
    
    for(i=num1; i<=num2; i++)
    {
        sum=0;
        count=0;
       
        armt=i;
        while(armt>0)
        {
            armt = armt/10;
            count++;
        }
        
        armt=i;    
        
        while(armt>0)
        //working on armt as it will terminate to 0
        {
        rem = armt % 10;
        sum = pow(rem , count) + sum;
        armt = armt/10;}

        if(sum==i)
        {
            printf("%d ,",i);
        }

    }
    
       
    return 0;


}
