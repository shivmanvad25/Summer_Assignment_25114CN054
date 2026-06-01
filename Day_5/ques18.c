//Write a program to Check strong number. 

// sum of the factorial of digits is equal to number


#include<stdio.h>
int main()
{
    int num, str, digit, fact, sum=0, i;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);
    
    str=num;

    while(num>0)
    {
      digit = num % 10;   //to get the last digit
      fact=1;
      
      for (i = digit; i>=1; i--) //loop for factorial of a number

      {
        fact = fact*i;
      }
      sum= sum + fact; 
      
      printf("digit=%d fact=%d sum=%d\n", digit, fact, sum);

      
      num = num/10;

    }


    if(sum == str)
    {
        printf("The number %d is a strong number.", str);
    }
    else
    {
        printf("The number %d is not a strong number.",str);
    }

    return 0;

    

    
}
    

    

