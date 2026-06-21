//Write a program to Sort words by length.

#include<stdio.h>
#include<string.h>

int main()
{
    char name[100][100], temp[100];
    int n, i, j;

    printf("ENTER THE NUMBER OF NAMES : ");
    scanf("%d", &n);

    printf("ENTER THE NAMES : \n");

    for(i=0; i<n; i++)
    {
        scanf("%s", name[i]);
    }

    printf("\nNames before sorting are : \n");

     for(i=0; i<n; i++)
    {
        printf("%s\n",name[i]);
    }


    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strlen(name[i]) > strlen(name[j]))
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);

            }
        }

    }

    printf("\n AFTER SORTED BY LENGTH :\n");
    
    for(i=0; i<n; i++)
    {
        printf("%s\n",name[i]);

    }

    return 0;


}