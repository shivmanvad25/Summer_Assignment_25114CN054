//Write a program to Merge arrays. 

#include<stdio.h>

int main()
{
    int n1, n2 , i, j,c[100];

    printf("Enter array size for first array : ");
    scanf("%d", &n1);
    
    int a1[n1];
    
    for(i=0; i<n1; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a1[i]);
    }

    printf("Enter array size for second array : ");
    scanf("%d", &n2);
    
    
    int a2[n2];
    
    for(i=0; i<n2; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a2[i]);
    }

    for(i=0; i<n1; i++)
    {
        c[i] = a1[i];
    }
    for(j=0; j<n2; j++)
    {
        c[i]= a2[j];
        i++;
    }

    printf("Merged array is : ");

    for(i=0; i<n1+n2; i++)
    {
       printf("%d ",c[i]);
    }

    return 0;

}