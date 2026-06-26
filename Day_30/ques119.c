//Write a program to Create mini employee management system.

#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];


    int n=0,choice, highest;
    int i, j, id, found;
    

do
{
    printf("\n* * MINI EMPLOYEE MANAGEMENT SYSTEM * *\n");
    printf("\n-----------------------------\n");
    printf("1. ADD EMPLOYEE\n");
    printf("2. DISPLAY EMPLOYEES\n");
    printf("3. SEARCH EMPLOYEE\n");
    printf("4. UPDATE SALARY\n");
    printf("5. DELETE EMPLOYEE\n");
    printf("6. HIGHEST SALARY EMPLOYEE\n");
    printf("7. EXIT\n");
    printf("\n-----------------------------\n");

    printf("ENTER YOUR CHOICE : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:

            printf("ENTER EMPLOYEE ID : ");
            scanf("%d", &e[n].id);

            printf("ENTER EMPLOYEE NAME : ");
            getchar();
            fgets(e[n].name, sizeof(e[n].name), stdin);
            e[n].name[strcspn(e[n].name, "\n")] = '\0';

            printf("ENTER EMPLOYEE SALARY : ");
            scanf("%f", &e[n].salary);

            n++;

            printf("EMPLOYEE ADDED SUCCESSFULLY.\n");
            break;

        case 2:

            if(n == 0)
            {
                printf("NO EMPLOYEE RECORD FOUND.\n");
            }
            else
            {
                printf("\nEMPLOYEE RECORDS ARE :\n");

                printf("\nEMPLOYEE ID\tEMPLOYEE NAME\tEMPLOYEE SALARY\n ");

                for(i = 0; i < n; i++)
                {
                    
                    printf("\n%d\t%s\t%.2f\n", e[i].id,e[i].name, e[i].salary);
                    
                }
            }

            break;

        case 3:

            found = 0;

            printf("ENTER EMPLOYEE ID TO SEARCH : ");
            scanf("%d", &id);

            for(i = 0; i < n; i++)
            {
                if(e[i].id == id)
                {
                    printf("\nEMPLOYEE FOUND.\n");
                    printf("EMPLOYEE ID : %d\n", e[i].id);
                    printf("EMPLOYEE NAME : %s\n", e[i].name);
                    printf("EMPLOYEE SALARY : %.2f\n", e[i].salary);

                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                printf("EMPLOYEE NOT FOUND.\n");
            }

            break;

        case 4:

            found = 0;

            printf("ENTER EMPLOYEE ID : ");
            scanf("%d", &id);

            for(i = 0; i < n; i++)
            {
                if(e[i].id == id)
                {
                    printf("ENTER NEW SALARY : ");
                    scanf("%f", &e[i].salary);

                    printf("SALARY UPDATED SUCCESSFULLY.\n");

                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                printf("EMPLOYEE NOT FOUND.\n");
            }

            break;

        case 5:

            found = 0;

            printf("ENTER EMPLOYEE ID TO DELETE : ");
            scanf("%d", &id);

            for(i = 0; i < n; i++)
            {
                if(e[i].id == id)
                {
                    for(j = i; j < n - 1; j++)
                    {
                        e[j] = e[j + 1];
                    }

                    n--;

                    printf("EMPLOYEE DELETED SUCCESSFULLY.\n");

                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                printf("EMPLOYEE NOT FOUND.\n");
            }

            break;

        case 6:

            if(n == 0)
            {
                printf("NO EMPLOYEE RECORD FOUND.\n");
            }
            else
            {
                highest = 0;

                for(i = 1; i < n; i++)
                {
                    if(e[i].salary > e[highest].salary)
                    {
                        highest = i;
                    }
                }

                printf("\nHIGHEST SALARY EMPLOYEE\n");
                printf("EMPLOYEE ID : %d\n", e[highest].id);
                printf("EMPLOYEE NAME : %s\n", e[highest].name);
                printf("EMPLOYEE SALARY : %.2f\n", e[highest].salary);
            }

            break;

        case 7:

            printf("THANK YOU FOR YOUR TIME.\n");
            break;

        default:

            printf("INVALID CHOICE.\n");
    }

} while(choice != 7);

return 0;


}
