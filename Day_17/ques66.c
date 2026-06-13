//Write a program to Union of arrays. 

#include<stdio.h>

int main()
{
    int n1, n2, c[100];
    int count, i, j;

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
       printf("%d ", a1[i]);
    }

    for(i=0; i<n2; i++)
    {
        count=0;
        
        for(j=0; j<n1; j++)
        {
            if(a2[i]==a1[j])
            {
             count=1;
             break;
            }
        
        }
        
        if(count == 0)
        {
            printf("%d ", a2[i]);
        }
    
}
   
    return 0;
}
        
        
