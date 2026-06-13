//Write a program to Find common elements

#include<stdio.h>

int main()
{
    int n1, n2 , i, j, count=0;

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

    printf("COMMON ELEMENTS ARE : ");

    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            if(a1[i] == a2[j])
            {
               count=1;
              printf("%d ",a1[i]);
              break;
            }
            
        }
    }
   
    if(count==0)
        {
            printf("NO COMMON ELEMENTS ARE FOUND.\n");
        }
    

    return 0;
}