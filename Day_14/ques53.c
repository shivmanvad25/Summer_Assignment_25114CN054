//Write a program to Linear search.


#include<stdio.h>

int main()
{
    int n,  i, key, count=0;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter elements %d: ", i + 1);
        scanf("%d",&a[i]);

    }

    printf("Enter the number to search : ");
    scanf("%d",&key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            count = 1;
            printf("Element %d is found at : INDEX %d and POSITION %d\n", key, i, i+1);
        }
        
    }

    if( count == 0)
    {
        printf("ELEMENT NOT FOUND\n");
    }

    return 0;
        
    
}