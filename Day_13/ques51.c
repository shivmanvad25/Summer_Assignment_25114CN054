//Write a program to Find largest and smallest elements.

#include<stdio.h>

int main()
{
    int n,  i, largest, smallest; 
    
    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter elements %d : ",i+1);
        scanf("%d",&a[i]);
    }

    largest = a[0];
    smallest = a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]>largest)
        {
            largest = a[i];
        }

        else if(a[i]<smallest)
        {
            smallest = a[i];
        }
    }

    printf("LARGEST ELEMENT IS : %d\n",largest);
    printf("SMALLEST ELEMENT IS : %d\n",smallest);


    return 0;


}
