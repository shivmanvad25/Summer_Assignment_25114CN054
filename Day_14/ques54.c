//write the program to frequency of an element.

#include<stdio.h>

int main()
{
    int n,  i, key, count=0;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);

    }
    
    printf("Enter the element to find frequency : ");
    scanf("%d",&key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            count++;
        }
    }

    printf("Frequency of an element %d is : %d \n", key, count);
    
    return 0;
}