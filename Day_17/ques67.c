//Write a program to Intersection of arrays. 

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
    
    printf("INTERSECTION OF ARRARYS IS : \n");

    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            if(a1[i] == a2[j])
            {
              printf("%d ",a1[i]);
              break;
            }
            
        }
    }

    return 0;
}