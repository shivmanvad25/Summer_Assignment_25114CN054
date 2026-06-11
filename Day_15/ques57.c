//Write a program to Reverse array. 

#include<stdio.h>

int main()
{
    int n,  i;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);

    }
    printf("Reverse array is : ");

    for(i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);

    }

    return 0;
}