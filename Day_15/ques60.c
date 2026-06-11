//Write a program to Move zeroes to end. 

#include<stdio.h>

int main()
{
    int n,  i, temp, j=0;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);
    }

    printf("AFTER SHIFTING ZEROES TO END : ");

    for(i=0; i<n; i++)
    {
        if(a[i] != 0)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            j++;

        }
        
    }

    for(i=0; i<n; i++){

     printf("%d ",a[i]);}

     return 0;
}