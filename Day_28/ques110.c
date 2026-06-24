//Write a program to Create bank account system.

#include<stdio.h>

struct Account
{
int accNo;
char name[50];
unsigned long int balance;
};

int main()
{
    struct Account a[50];


    int n = 0;
    int choice, accNo, i, found;

    unsigned long int amount;

    do
    {
        printf("\n* * BANK ACCOUNT SYSTEM * *\n");
        printf("1. CREATE ACCOUNT\n");
        printf("2. DISPLAY ACCOUNTS\n");
        printf("3. SEARCH ACCOUNT\n");
        printf("4. DEPOSIT MONEY\n");
        printf("5. WITHDRAW MONEY\n");
        printf("6. DELETE ACCOUNT\n");
        printf("7. EXIT\n");

        printf("ENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("ENTER ACCOUNT NUMBER : ");
                scanf("%d", &a[n].accNo);

                printf("ENTER ACCOUNT HOLDER NAME : ");
                scanf("%s", a[n].name);

                printf("ENTER INITIAL BALANCE : ");
                scanf("%lu", &a[n].balance);

                n++;

                printf("ACCOUNT CREATED SUCCESSFULLY.\n");
                break;

            case 2:

                if(n == 0)
                {
                    printf("NO ACCOUNT FOUND.\n");
                }
                else
                {
                    printf("\nACCOUNT RECORDS ARE :\n");

                    for(i=0; i<n; i++)
                    {
                        printf("\nACCOUNT NUMBER : %d\n", a[i].accNo);
                        printf("ACCOUNT HOLDER : %s\n", a[i].name);
                        printf("BALANCE : %lu\n", a[i].balance);
                    }
                }

                break;

            case 3:

                found = 0;

                printf("ENTER ACCOUNT NUMBER : ");
                scanf("%d", &accNo);

                for(i=0; i<n; i++)
                {
                    if(a[i].accNo == accNo)
                    {
                        printf("\nACCOUNT FOUND.\n");
                        printf("ACCOUNT NUMBER : %d\n", a[i].accNo);
                        printf("ACCOUNT HOLDER : %s\n", a[i].name);
                        printf("BALANCE : %lu\n", a[i].balance);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("ACCOUNT NOT FOUND.\n");
                }

                 break;

            case 4:

                found = 0;

                printf("ENTER ACCOUNT NUMBER : ");
                scanf("%d", &accNo);

                printf("ENTER AMOUNT TO DEPOSIT : ");
                scanf("%lu", &amount);

                for(i=0; i<n; i++)
                {
                    if(a[i].accNo == accNo)
                    {
                        a[i].balance = a[i].balance + amount;

                        printf("\nAMOUNT DEPOSITED SUCCESSFULLY.\n");
                        printf("\nCURRENT BALANCE : %lu\n", a[i].balance);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("ACCOUNT NOT FOUND.\n");
                }

                break;

            case 5:

                found = 0;

                printf("ENTER ACCOUNT NUMBER : ");
                scanf("%d", &accNo);

                printf("ENTER AMOUNT TO WITHDRAW : ");
                scanf("%lu", &amount);

                for(i=0; i<n; i++)
                {
                    if(a[i].accNo == accNo)
                    {
                        if(amount <= a[i].balance)
                        {
                            a[i].balance = a[i].balance - amount;

                            printf("\nWITHDRAWAL SUCCESSFUL.\n");
                            printf("\nCURRENT BALANCE : %lu\n", a[i].balance);
                        }
                        else
                        {
                            printf("INSUFFICIENT BALANCE.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("ACCOUNT NOT FOUND.\n");
                }

                break;

            case 6:

                found = 0;

                printf("ENTER ACCOUNT NUMBER : ");
                scanf("%d", &accNo);

                for(i=0; i<n; i++)
                {
                    if(a[i].accNo == accNo)
                    {
                        int j;

                        for(j=i; j<n-1; j++)
                        {
                            a[j] = a[j+1];
                        }

                        n--;

                        printf("\nACCOUNT DELETED SUCCESSFULLY.\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                     printf("ACCOUNT NOT FOUND.\n");
                }

                break;

            case 7:

                printf("\nTHANK YOU.\n");
                break;

            default:

                printf("\nINVALID CHOICE.\n");
        }

    } while(choice != 7);

    return 0;


}

