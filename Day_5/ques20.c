//Write a program to Find largest prime factor. 

#include<stdio.h>

int main()
{
    int n, large=0, j;
    printf(" ENTER THE NUMBER :");
    scanf("%d",&n);
    
    for( j=2 ; j<= n; j++)
    {
        while( n%j==0)
        {
             large=j;
             n = n/j;
          
        }
        
    }
      printf("THE LARGEST PRIME FACTOR IS - %d\n",large);

      return 0;

}