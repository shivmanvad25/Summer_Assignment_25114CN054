//Write a program to Find maximum frequency element.

#include<stdio.h>

int main()
{
    int n,  i, j, key, count=0;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);

    }

    int maxcount = 0;
    int element =a[0];

    for(i=0; i<n; i++)
    {
        int count=1;

        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;

            }

        }
        if(count>maxcount)
        {
            maxcount = count;
            element = a[i];
        }
    }

    printf("Maximum freq element is %d with frequency of %d\n", element, maxcount);

    return 0;
    
    
}