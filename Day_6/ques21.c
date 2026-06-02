// Write a program to Convert decimal to binary. 

#include<stdio.h>

int main()

{
    int num, binary, a[50],i=0, j;
    
    printf(" ENTER THE DECIMAL NUMBER : ");
    scanf("%d",&num);

    

    while(num >0)
    {
    binary = num % 2;
    num = num / 2;
    a[i]= binary; // store all rem in array 
    i++;        // 


    printf(" binary = %d , num = %d\n", binary, num);

    }
     
    printf(" Binary conversion is : ");

    // loop for printing in reverse order
    for(j = i-1; j>=0; j--) 
    {
        printf(" %d ", a[j]);
    }

    return 0;



    
     

     
}