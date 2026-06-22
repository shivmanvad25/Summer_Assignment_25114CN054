//Write a program to Create ATM Simulation.

#include<stdio.h>

int main()
{
    int pin=0, choice;
    unsigned long int balance = 7000, amount, withdraw;

    printf("ENTER ATM PIN : ");
    scanf("%d", &pin);

    while(pin != 3456)
    {
        printf("Invalid pin.\n");

        printf("ENTER ATM PIN : ");
        scanf("%d", &pin);
        

    }

    do
    {
        printf("\n* * WELCOME TO ATM SERVICE * *\n");
        printf("1. CHECK BALANCE\n");
        printf("2. DEPOSIT MONEY\n");
        printf("3. WITHDRAW MONEY\n");
        printf("4. EXIT\n");

        printf("ENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf(" YOUR CURRENT BALANCE IS : %lu\n", balance);
                break;

            case 2:
                printf("ENTER AMOUNT TO DEPOSIT : ");
                scanf("%lu", &amount);

                balance = balance + amount;

                printf("AMOUNT DEPOSITED SUCCESSFULLY.\n");
                printf("YOUR CURRENT BALANCE IS : %lu.\n",balance);

                break;

            case 3:
                printf("ENTER AMOUNT TO WITHDRAW : ");
                scanf("%lu", &withdraw);

                if(withdraw <= balance)
                {
                    balance = balance - withdraw;
                    printf("\nWITHDRAWAL SUCCESSFUL.\n");
                    printf("YOUR CURRENT BALANCE IS : %lu.\n",balance);
                }
                else
                {
                    printf("INSUFFICIENT BALANCE.\n");
                }
                break;

            case 4:
                printf("THANK YOU FOR USING ATM.\n");
                break;

            default:
                printf("INVALID CHOICE.\n");
        }

    } while(choice != 4);



    return 0;
}