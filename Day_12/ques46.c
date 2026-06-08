//Write a program to Write function for armstrong.

#include<stdio.h>
#include<math.h>

int armstrong(int x)
{
    int armt, count=0, rem, sum=0 ;
   
    armt = x;
    
    
    while(x>0)
    {
         x = x/10;
         count++;
    }
    
    x = armt;
    
     while( x > 0)
    {
        rem= x % 10;
        sum= pow(rem , count) + sum;
        x = x/ 10 ;
    }

    if(sum == armt)
    return 1;
    else
    return 0;

}
int main()
{
    int a;

    printf("ENTER THE NUMBER : ");
    scanf("%d",&a);

    if(armstrong(a))
    {
        printf("%d is an armstrong number.\n",a);
    }
    else
    {
        printf("%d is not an armstrong number.\n",a);
    }

    return 0;
}



