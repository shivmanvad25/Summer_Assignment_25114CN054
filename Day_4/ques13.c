//Write a program to Generate Fibonacci series. 

#include<stdio.h>

int main()

{
    int  n , first= 0, second=1, third,  i;

    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("%d  %d",first ,second);

    for(i=3; i<=n; i++)
    {
        third= first+second;
        printf("   %d  ", third);
        
        first = second;
        second= third;
        
        
    }
    
    

    return 0;

}