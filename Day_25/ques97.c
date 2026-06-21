//Write a program to Merge two sorted arrays.

#include<stdio.h>

int main()
{
    int n, m , c[100];
    int i, j, k=0;

    printf("Enter array size for first array : ");
    scanf("%d", &n);
    
    int a[n];
    
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter array size for second array : ");
    scanf("%d", &m);
    
    
    int b[m];
    
    for(i=0; i<m; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&b[i]);
    }

    i=0;
    j=0;

    while(i<=n-1 && j<=m-1)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i++];
        }
        else
        {
            c[k]=b[j++];
        }
        k++;
    }

    while(i<n)
    {
        c[k++]= a[i++];
    }
    while(j<m)
    {
        c[k++]= b[j++];
    }

    printf("MERGE SORTED ARRAYS ARE : \n");

    
    for(i=0; i<k; i++)
    {
        printf("%d ",c[i]);

    }

    return 0;
    




}