//Write a program to Create library management system.

#include<stdio.h>
#include<string.h>

struct Book
{
    int id;
    char title[100];
    int year;
};

int main()
{
    struct Book b[50];


    int n = 0;
    int choice, i, id, found, j;
    

 do
 {

    printf("\n* * LIBRARY MANAGEMENT SYSTEM * *\n");
    printf("1. ADD BOOK\n");
    printf("2. DISPLAY BOOKS\n");
    printf("3. SEARCH BOOK\n");
    printf("4. DELETE BOOK\n");
    printf("5. EXIT\n");

    printf("ENTER YOUR CHOICE : ");
    scanf("%d", &choice);
    getchar();

    switch(choice)
    {
    
        case 1:

            printf("ENTER BOOK ID : ");
            scanf("%d", &b[n].id);
            getchar();

            printf("ENTER BOOK TITLE : ");
            fgets(b[n].title, sizeof(b[n].title), stdin);

            b[n].title[strcspn(b[n].title, "\n")] = '\0';

            printf("ENTER YEAR : ");
            scanf("%d", &b[n].year);

            n++;

            printf("BOOK ADDED SUCCESSFULLY.\n");
            break;

        case 2:

            if(n == 0)
            {
                printf("NO BOOK RECORD FOUND.\n");
            }
            else
            {
                printf("\nBOOK RECORDS ARE :\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nBOOK ID : %d\n", b[i].id);
                    printf("BOOK TITLE : %s\n", b[i].title);
                    printf("YEAR : %d\n", b[i].year);
                }
            }

            break;

        case 3:

            found = 0;

            printf("ENTER BOOK ID : ");
            scanf("%d", &id);

            for(i = 0; i < n; i++)
            {
                if(b[i].id == id)
                {
                    printf("\nBOOK FOUND.\n");
                    printf("BOOK ID : %d\n", b[i].id);
                    printf("BOOK TITLE : %s\n", b[i].title);
                    printf("YEAR : %d\n", b[i].year);

                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                printf("BOOK NOT FOUND.\n");
            }

            break;

        case 4:

            found = 0;

            printf("ENTER BOOK ID : ");
            scanf("%d", &id);

            for(i = 0; i < n; i++)
            {
                if(b[i].id == id)
                {
                    for(j = i; j < n - 1; j++)
                    {
                        b[j] = b[j + 1];
                    }

                    n--;

                    printf("BOOK DELETED SUCCESSFULLY.\n");

                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                printf("BOOK NOT FOUND.\n");
            }

            break;

        case 5:

            printf("THANK YOU.\n");
            break;

        default:

            printf("INVALID CHOICE.\n");
    }

} while(choice != 5);

return 0;


}
