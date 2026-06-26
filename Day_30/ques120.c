//Write a program to Develop complete mini project using arrays, strings and functions.

// CONTACT BOOK MANAGEMENT SYSTEM 
// functions are used here.

#include<stdio.h>
#include<string.h>

struct contact
{
    char name[100];
    long long phone;
};

struct contact c[100];
int n = 0;

// function to add contact..

void addcontact()
{
    if(n >= 100)
    {
        printf("CONTACT LIST IS FULL!\n");
        return;
    }

    getchar();

    printf("ENTER NAME : ");
    fgets(c[n].name, sizeof(c[n].name), stdin);
    c[n].name[strcspn(c[n].name, "\n")] = '\0';

    printf("ENTER PHONE NUMBER : ");
    scanf("%lld", &c[n].phone);

    n++;

    printf("CONTACT ADDED SUCCESSFULLY.\n");
}

// function to display contact..

void displaycontacts()
{
    int i;

    if(n == 0)
    {
        printf("NO CONTACTS AVAILABLE.\n");
        return;
    }

    printf("\nNAME\t\tPHONE NUMBER\n");
    printf("--------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\t\t%lld\n", c[i].name, c[i].phone);
    }
}

// function to search contact..

void searchcontact()
{
    char name[50];
    int i, found = 0;

    getchar();

    printf("ENTER NAME TO SEARCH : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for(i = 0; i < n; i++)
    {
        if(strcmp(c[i].name, name) == 0)
        {
            printf("\nCONTACT FOUND\n");
            printf("NAME : %s\n", c[i].name);
            printf("PHONE : %lld\n", c[i].phone);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("CONTACT NOT FOUND.\n");
}

// function to delete contact..

void deletecontact()
{
    char name[50];
    int i, j, found = 0;

    getchar();

    printf("ENTER NAME TO DELETE : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for(i = 0; i < n; i++)
    {
        if(strcmp(c[i].name, name) == 0)
        {
            for(j = i; j < n - 1; j++)
            {
                c[j] = c[j + 1];
            }

            n--;
            printf("CONTACT DELETED SUCCESSFULLY.\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("CONTACT NOT FOUND.\n");
}

// function to update contact..

void updatecontact()
{
    char name[50];
    int i, found = 0;

    getchar();

    printf("ENTER NAME TO UPDATE : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for(i = 0; i < n; i++)
    {
        if(strcmp(c[i].name, name) == 0)
        {
            printf("ENTER NEW PHONE NUMBER : ");
            scanf("%lld", &c[i].phone);

            printf("CONTACT UPDATED SUCCESSFULLY.\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("CONTACT NOT FOUND.\n");
}

// MAIN FUNCTION

int main()
{
    int choice;

    do
    {
        printf("\n* * CONTACT BOOK SYSTEM * *\n");
        printf("\n-----------------------------------\n");
        printf("\n1. ADD CONTACT\n");
        printf("2. DISPLAY CONTACTS\n");
        printf("3. SEARCH CONTACT\n");
        printf("4. UPDATE CONTACT\n");
        printf("5. DELETE CONTACT\n");
        printf("6. EXIT\n");
        printf("\n-----------------------------------\n");

        printf("\nENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: addcontact(); break;
            case 2: displaycontacts(); break;
            case 3: searchcontact(); break;
            case 4: updatecontact(); break;
            case 5: deletecontact(); break;
            case 6: printf("THANK YOU....EXITING!\n"); break;
            default: printf("INVALID CHOICE.\n");
        }

    } while(choice != 6);

    return 0;
}