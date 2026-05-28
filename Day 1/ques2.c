// Print multiplication table of a given number.
#include<stdio.h>

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    for(int i=1; i<=10; i++)
     {
        printf("%d x %d = %d\n", num, i, i*num);
        
     }

     return 0;
    

    
}