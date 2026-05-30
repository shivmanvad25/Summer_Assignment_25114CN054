//  Print prime numbers in a range.

#include<stdio.h>

int main()
{
    int strt, end, prime, i, j;
    
    printf("Enter the range :");
    scanf("%d%d", &strt,&end);
    
    for(i= strt; i<=end; i++)// loop for printing range

    {
        prime = 1;
        for(j=2; j*j<=i; j++)// loop for prime numbers
        {
            if(i%j==0)
        {
            prime = 0; 
            break;
        
        }
        
    }
    if(prime== 1)
        {
            printf("%d, ", i);
        }
    
    
}
         return 0;

}