//Write a program to Sort names alphabetically.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100][100], temp[100];
    int n, i, j;

    printf("ENTER THE NUMBER OF NAMES : ");
    scanf("%d", &n);

    printf("ENTER THE NAMES : \n");

    for(i=0; i<n; i++)
    {
        scanf("%s", str[i]);
    }

    printf("\nNames before sorting are : \n");

     for(i=0; i<n; i++)
    {
        printf("%s\n",str[i]);
    }


    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);

            }
        }

    }

    printf("\nTHE SORTED ORDER OF NAMES :\n");
    
    for(i=0; i<n; i++)
    {
        printf("%s\n",str[i]);

    }

    return 0;


}