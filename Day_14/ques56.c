//Write a program to Find duplicates in array. 

#include<stdio.h>

int main()
{
    int n,  i, j;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);

    } 
    
    printf("the duplicate element is :");
   
    for(i=0; i<n; i++)
    {
      for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
              printf("%d ",a[i]);
              break;
            }
        } 
    }
    

    return 0;


    }

