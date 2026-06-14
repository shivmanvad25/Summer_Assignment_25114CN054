//Write a program to Sort array in descending order.

#include<stdio.h>

int main()
{
    int n, i, j,swap;

    printf("Enter array size: ");
    scanf("%d", &n);
    
    int a[n];
    
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);
    
    }

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]< a[j])
            {
                swap = a[j];
                a[j] = a[i];
                a[i] = swap;
            }
        }
    }

    printf("Sorted array in descending order is : ");

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

