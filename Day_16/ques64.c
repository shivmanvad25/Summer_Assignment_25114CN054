//Write a program to Remove duplicates from aaray.

#include<stdio.h>

int main()
{
    int num,  i, j;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &num);
    
    
    int a[num];
    for(i=0; i<num; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);
    }

    printf("ARRAY WITHOUIT DUPLICATES ARE :");

    for(i=0; i<num; i++)
    {
        int count=0;

        for(j=0; j<i; j++)
        {
            if(a[i]==a[j])
            {
              count=1; 
               break ;
            }       
        }
    
        if(count==0)
        {
           printf("%d ", a[i]);

        }
    }

    return 0;
}

