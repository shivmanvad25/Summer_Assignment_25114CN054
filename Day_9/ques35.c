//Write a program to Print repeated character pattern.

#include<stdio.h>

int main ()
{
  int n, i, j;

  printf("ENTER THE NUMBER OF ROWS : ");
  scanf("%d", &n);

  for(i=1; i<=n; i++)
  {
     for(j=1; j<=i; j++)
    {
        printf("%c ", 64+i);
    }

    printf("\n");
  }

   return 0;
}