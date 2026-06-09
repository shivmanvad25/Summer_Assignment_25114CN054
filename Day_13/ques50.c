//Write a program to Find sum and average of array.

#include<stdio.h>

int main()
{
    int n,  i, sum=0;
    double avg;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter elements %d : ",i+1);
        scanf("%d",&a[i]);

        sum = sum + a[i];
    }
       
    printf("SUM OF ARRAY ELEMENTS IS : %d\n", sum);
    
    avg = (double)sum/n;
    printf("AVERAGE OF ARRAY IS : %.3lf\n", avg);
    return 0;
}