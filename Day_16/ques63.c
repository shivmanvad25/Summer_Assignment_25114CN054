//Write a program to Find pair with given sum.

#include<stdio.h>

int main()
{
    int num,  i, sum, j;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &num);
    
    
    int a[num];
    for(i=0; i<num; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter the target summ : ");
    scanf("%d",&sum);

    for(i=0; i<num; i++)
    {
        for(j=i+1; j<num; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf(" The pair of numbers for target sum : %d and %d\n",a[i], a[j]);
            }
        }
    }

    return 0;





}