//Write a program to Find maximum occurring character.


#include<stdio.h>

int main()
{
    int i,j, count, max=0 ;
    char str[100], storemax;

    printf("ENTER THE STRING : ");
    scanf("%s",str);

    for(i=0; str[i]!='\0'; i++)
    {
        count=0;
        for(j=0; str[j]!='\0'; j++)
        {
            if( str[i]==str[j])
            {
                count++;
            }

        }
        if(count > max)
        {
            max = count;
            storemax = str[i];
        }    

        
    }
    
      printf("MAXIMUM OCCURING CHARACTER IS : %c \n", storemax);
      printf("FREQUENCY OF %c is : %d\n",storemax, max);
    

    
    
    return 0;
}