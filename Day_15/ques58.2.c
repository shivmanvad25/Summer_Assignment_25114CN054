//write a program to rotate array left by d places.

#include<stdio.h>

int main()
{
    int n,  i, j, d;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter how many places to rotate : ");
    scanf("%d",&d);

    d = d % n;  //as rotation repeats after n places

    int temp[d];

    for(i=0; i<d; i++)
    {
        temp[i] = a[i];
    }

    for(i=d; i<n; i++)
    {
        a[i-d] = a[i];
    }
    for(i= n-d; i<n; i++)
    {
        a[i] = temp[ i - (n-d)];
    }

    printf("ARRAY AFTER %d LEFT ROTATION :\n",d);

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}