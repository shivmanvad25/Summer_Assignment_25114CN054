//write the program to find second largest element.

#include<stdio.h>

int main()
{
    int n,  i, key, largest, secondlar;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);

    }
    
    if(a[0] > a[1])
    {
        largest = a[0];
        secondlar = a[1];
    }
    else
    { 
       largest = a[1];
       secondlar = a[0];
    }

    for(i=2; i<n; i++)
    {
        if(a[i] > largest)
        {
            secondlar = largest;
            largest = a[i];
        }
        else if(a[i]>secondlar && a[i]!= largest)
        {
            secondlar = a[i];
        }
        
    }

    printf("SECOND LARGEST ELEMENT IS : %d\n", secondlar);
    
    return 0;
}    
    