//Write a program to Create ticket booking system.

#include<stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
};

int main()
{
    struct Ticket t[50];


    int n = 0;
    int choice, ticketNo, found, i , j;
    int nextTicketNo = 1000;


    do
    {
        printf("\n* * TICKET BOOKING SYSTEM * *\n");
        printf("1. BOOK TICKET\n");
        printf("2. VIEW BOOKED TICKETS\n");
        printf("3. SEARCH TICKET\n");
        printf("4. CANCEL TICKET\n");
        printf("5. AVAILABLE TICKETS\n");
        printf("6. EXIT\n");

        printf("ENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                if(n >= 50)
                {
                    printf("ALL TICKETS ARE BOOKED.\n");
                    break;
                }

                    t[n].ticketNo = nextTicketNo++;

                printf("ENTER PASSENGER NAME : ");
                scanf("%s", t[n].name);

                printf("TICKET BOOKED SUCCESSFULLY.\n");
                printf("YOUR TICKET NUMBER IS : %d\n", t[n].ticketNo);

                n++;

                break;

            case 2:

                if(n == 0)
                {
                    printf("NO TICKETS BOOKED.\n");
                }
                else
                {
                    printf("\nBOOKED TICKETS ARE :\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nTICKET NUMBER : %d\n", t[i].ticketNo);
                        printf("PASSENGER NAME : %s\n", t[i].name);
                    }
                }

                break;

            case 3:

                found = 0;

                printf("ENTER TICKET NUMBER : ");
                scanf("%d", &ticketNo);

                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == ticketNo)
                    {
                        printf("\nTICKET FOUND.\n");
                        printf("\nTICKET NUMBER : %d\n", t[i].ticketNo);
                        printf("PASSENGER NAME : %s\n", t[i].name);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nTICKET NOT FOUND.\n");
                }

                break;

            case 4:

                found = 0;

                printf("ENTER TICKET NUMBER : ");
                scanf("%d", &ticketNo);

                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == ticketNo)
                    {
                        for(j = i; j < n - 1; j++)
                        {
                            t[j] = t[j + 1];
                        }

                        n--;

                        printf("\nTICKET CANCELLED SUCCESSFULLY.\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nTICKET NOT FOUND.\n");
                }

                break;

            case 5:
                 
                printf("BOOKED TICKETS ARE : %d\n", n);
                printf("AVAILABLE TICKETS : %d\n", 50 - n);

                break;

            case 6:

                printf("\nTHANK YOU.\n");

                break;

            default:

                printf("\nINVALID CHOICE.\n");
        }

    } while(choice != 6);

    return 0;



}
