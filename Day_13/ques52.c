//Write a program to Count even and odd elements.

#include<stdio.h>

int main()
{
    int n,  i, even=0, odd=0; 
    
    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter elements %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

    }

    printf("NUMBER OF EVEN ELEMENTS : %d\n", even);
    printf("NUMBER OF ODD ELEMENTS : %d\n", odd);

    return 0;



}
