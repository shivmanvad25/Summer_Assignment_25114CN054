//Write a program to Create Contact Management System.

#include<stdio.h>
#include<string.h>

struct Contact
{
    int contactID;
    char name[50];
    char phone[20];
    char email[50];
};

int main()
{
    struct Contact c[50];

    int n = 0;
    int choice, contactID, found;
    int i, j;
    int nextContactID = 1000;

    char searchName[50];

    do
    {
        printf("\n* * CONTACT MANAGEMENT SYSTEM * *\n");
        printf("1. ADD CONTACT\n");
        printf("2. VIEW CONTACTS\n");
        printf("3. SEARCH CONTACT BY ID\n");
        printf("4. SEARCH CONTACT BY NAME\n");
        printf("5. UPDATE CONTACT\n");
        printf("6. DELETE CONTACT\n");
        printf("7. TOTAL CONTACTS\n");
        printf("8. EXIT\n");

        printf("ENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                if(n >= 50)
                {
                    printf("CONTACT LIST IS FULL.\n");
                    break;
                }

                c[n].contactID = nextContactID++;

                printf("ENTER CONTACT NAME : ");
                scanf("%s", c[n].name);

                printf("ENTER PHONE NUMBER : ");
                scanf("%s", c[n].phone);

                printf("ENTER EMAIL : ");
                scanf("%s", c[n].email);

                printf("CONTACT ADDED SUCCESSFULLY.\n");
                printf("CONTACT ID : %d\n", c[n].contactID);

                n++;

                break;

            case 2:

                if(n == 0)
                {
                    printf("NO CONTACTS FOUND.\n");
                }
                else
                {
                    printf("\nCONTACT RECORDS ARE :\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nCONTACT ID : %d\n", c[i].contactID);
                        printf("NAME : %s\n", c[i].name);
                        printf("PHONE : %s\n", c[i].phone);
                        printf("EMAIL : %s\n", c[i].email);
                    }
                }

                break;

            case 3:

                found = 0;

                printf("ENTER CONTACT ID : ");
                scanf("%d", &contactID);

                for(i = 0; i < n; i++)
                {
                    if(c[i].contactID == contactID)
                    {
                        printf("\nCONTACT FOUND.\n");

                        printf("CONTACT ID : %d\n", c[i].contactID);
                        printf("NAME : %s\n", c[i].name);
                        printf("PHONE : %s\n", c[i].phone);
                        printf("EMAIL : %s\n", c[i].email);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("CONTACT NOT FOUND.\n");
                }

                break;

            case 4:

                found = 0;

                printf("ENTER CONTACT NAME : ");
                scanf("%s", searchName);

                for(i = 0; i < n; i++)
                {
                    if(strcmp(c[i].name, searchName) == 0)
                    {
                        printf("\nCONTACT FOUND.\n");

                        printf("CONTACT ID : %d\n", c[i].contactID);
                        printf("NAME : %s\n", c[i].name);
                        printf("PHONE : %s\n", c[i].phone);
                        printf("EMAIL : %s\n", c[i].email);

                        found = 1;
                    }
                }

                if(found == 0)
                {
                    printf("CONTACT NOT FOUND.\n");
                }

                break;

            case 5:

                found = 0;

                printf("ENTER CONTACT ID : ");
                scanf("%d", &contactID);

                for(i = 0; i < n; i++)
                {
                    if(c[i].contactID == contactID)
                    {
                        printf("ENTER NEW NAME : ");
                        scanf("%s", c[i].name);

                        printf("ENTER NEW PHONE NUMBER : ");
                        scanf("%s", c[i].phone);

                        printf("ENTER NEW EMAIL : ");
                        scanf("%s", c[i].email);

                        printf("\nCONTACT UPDATED SUCCESSFULLY.\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("CONTACT NOT FOUND.\n");
                }

                break;

            case 6:

                found = 0;

                printf("ENTER CONTACT ID : ");
                scanf("%d", &contactID);

                for(i = 0; i < n; i++)
                {
                    if(c[i].contactID == contactID)
                    {
                        for(j = i; j < n - 1; j++)
                        {
                            c[j] = c[j + 1];
                        }

                        n--;

                        printf("\nCONTACT DELETED SUCCESSFULLY.\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nCONTACT NOT FOUND.\n");
                }

                break;

            case 7:

                printf("\nTOTAL CONTACTS : %d\n", n);

                break;

            case 8:

                printf("\nTHANK YOU.\n");

                break;

            default:

                printf("\nINVALID CHOICE.\n");
        }

    } while(choice != 8);

    return 0;
}