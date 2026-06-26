//Write a program to Create menu-driven calculator.

#include<stdio.h>

int main()
{
    double a, b;
    int choice=0;


    do
    {
    printf("\n* * MENU DRIVEN CALCULATOR * * \n");
    printf("------------------------\n");
    printf("\n 1. ADDITION\n 2. SUBSTRACTION\n 3. MULTIPLICATION\n 4. DIVISION\n 5. REMAINDER\n 6. END THE PROGRAM\n");
    printf("\n-----------------------\n");

    printf("\nENTER YOUR CHOICE : ");
    scanf("%d", &choice);

    if(choice>=1 && choice<=5)
    {
        printf("ENTER FIRST NUMBER : \n");
        scanf("%lf", &a);

        printf("ENTER SECOND NUMBER : \n");
        scanf("%lf", &b);
    }

    switch (choice)
    {
    case 1:
        printf("ADDITION of %.2lf + %.2lf = %.2lf\n",a ,b ,a+b);
        
        break;

    case 2:
        printf("SUBSTRACTION of %.2lf - %.2lf = %.2lf\n",a ,b ,a-b);
        break;
    
    case 3:
        printf("MULTIPLICATION of %.2lf * %.2lf = %.2lf\n",a ,b ,a*b);
        break;
        
    case 4:
        if(b!=0){
        printf("DIVISION of %.2lf / %.2lf = %.2lf\n",a ,b ,a/b);}
        else{
            printf("NUMBER CAN'T BE DIVIDED BY ZERO.\n");
        }
        break;
        
    case 5:
        if((int)b != 0)
        printf("REMAINDER = %d\n", (int)a % (int)b);
        else
        printf("ERROR: Cannot find remainder with zero\n");
        break;
        
        
    case 6:
        printf("THANK YOU.\n  ");
        break;
        
        
    default:
        printf("\nINVALID CHOICE.\n");
        break;
    }
    
 }while (choice!=6);
 
return 0;

    
}