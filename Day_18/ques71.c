//Write a program to Binary search. 

#include<stdio.h>

int main()
{
    int n, i, key, count=0;
    int mid , end ,beg;

    printf("Enter array size: ");
    scanf("%d", &n);
    
    int a[n];
    
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);
    
    }

    printf("ENTER SEARCHING ELEMENT : ");
    scanf("%d",&key);

    beg = 0;
    end = n-1;

    while(beg <= end)
    {
        mid = (beg + end)/2;

        if(a[mid]==key)
        {
            printf("Element %d is found at index %d.",key, mid);
            count=1;
            break;
        }

        else if(a[mid]<key)
        {
            beg = mid+1;
        }
        
        else
        {
            end = mid-1;

        }

    }

    if(count == 0)
    {
        printf("ELEMENT IS NOT FOUND\n");

    }

    return 0;
}



    
