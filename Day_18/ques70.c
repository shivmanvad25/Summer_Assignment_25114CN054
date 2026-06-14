//Write a program to Selection sort. 

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

    for(i=0; i<=n-2; i++)
    {
        int mini =i;
        for(j=i; j<=n-1; j++)
        {
            if(a[j]<a[mini])
            {
                mini = j;
            }
        }
        swap = a[mini];
       a[mini] = a[i];
       a[i] = swap; 

    }
    printf("SORTED ARRAY IS : ");

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}