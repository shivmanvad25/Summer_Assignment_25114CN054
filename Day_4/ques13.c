//Write a program to Generate Fibonacci series. 

#include<stdio.h>

int main()

{
    int  n , first= 0, second=1, third,  i;

    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("%d  %d",first ,second);

    for(i=3; i<=n; i++) //loop strts from 3 as 1st and 2nd has already been printed
    
    {
        third= first+second;
        printf("   %d  ", third);
        
        first = second;
        second= third;
        
        
    }
    
    

    return 0;

}