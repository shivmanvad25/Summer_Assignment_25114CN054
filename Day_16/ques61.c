//Write a program to Find missing number in array.

#include<stdio.h>

int main()
{
    int num,  i, sum=0, missingnum, expectsum;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &num);
    
    
    int a[num];
    for(i=0; i<num; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);

        sum = sum + a[i];

    }

    int n = num+1;

    expectsum = n * (n+1) / 2;
    missingnum = expectsum - sum;

    printf("MISSING NUMBER IS : %d\n", missingnum);

    return 0;

}


