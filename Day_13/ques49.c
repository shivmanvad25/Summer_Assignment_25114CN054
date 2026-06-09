//Write a program to Input and display array. 

#include<stdio.h>

int main()
{
    int n,  i ;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter elements of array : ");
        scanf("%d",&a[i]);
    }
      
    printf("The elements of array are :\n ");
    
    for(i=0; i<n; i++)
    {
        printf( "%d ",a[i]);

    }

    return 0;
}

