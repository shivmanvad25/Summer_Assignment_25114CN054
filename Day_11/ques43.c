// Write a program to Write function to check prime.

#include <stdio.h>

int prime(int x)
{
    if(x <= 1)
    return 0; 

     int count = 0;

    for( int i = 2; i*i <= x; i++ )
    {
        if( x % i == 0)
        {
            count ++;
            break;
        }
        
    }
    return count;

}

int main()
{
  int a;

  printf(" ENTER THE NUMBER : ");
  scanf("%d",&a);

  if( prime(a)==0)
  printf(" %d is a prime number.\n",a);

  else
  printf(" %d is not a prime number.\n",a);

  return 0;


  
}
