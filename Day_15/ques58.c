//write a program to rotate array left by 1 place.

#include<stdio.h>

int main()
{
    int n,  i, temp;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);
    }

    temp = a[0];

    for(i=0; i<n; i++)
    {
        a[i] = a[i+1];
    }
    
    a[n-1]=temp;

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);

    }

    return 0;
}
