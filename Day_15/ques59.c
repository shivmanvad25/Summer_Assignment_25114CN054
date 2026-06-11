//Write a program to Rotate array right by d places. 

#include<stdio.h>

int main()
{
    int n,  i, d;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);
    
    
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter how many places to rotate : ");
    scanf("%d",&d);

    d = d % n;  //as rotation repeats after n places

    int temp[d];
    
    //store last in temp
    for(i=n-d; i<n; i++)
    {
        temp[i-(n-d)]=a[i];
    }

    //rotate towards right 
    for(i=n-d-1; i>=0; i--)
    {
        a[i+d] = a[i];
    }

    //copy to the start
    for(i=0; i<d; i++)
    {
        a[i] = temp[i];
    }

    printf("ARRAY AFTER %d RIGHT ROTATION :\n",d);

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;

    

}