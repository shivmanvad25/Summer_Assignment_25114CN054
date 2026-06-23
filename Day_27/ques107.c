#include<stdio.h>

#define MAX 100

struct Employee
{
    int id;
    char name[50];
    float salary;
};

struct Employee e[MAX];

int n = 0;

void addEmployee()
{

    if(n >= MAX)
    {
        printf("MAXIMUM EMPLOYEES REACHED.\n");
        return;
    }


    e[n].id = n + 1;

    printf("ENTER EMPLOYEE NAME : ");
    scanf("%s", e[n].name);

    printf("ENTER EMPLOYEE SALARY : ");
    scanf("%f", &e[n].salary);

    n++;

    printf("EMPLOYEE ADDED SUCCESSFULLY.\n");


}

void displayEmployee()
{

    int i;

    if(n == 0)
    {
       printf("NO EMPLOYEE RECORD FOUND.\n");
        return;
    }

    printf("\nEMPLOYEE RECORDS ARE :\n");

    for(i=0; i<n; i++)
    {
        printf("\nEMPLOYEE ID : %d\n", e[i].id);
        printf("EMPLOYEE NAME : %s\n", e[i].name);
        printf("EMPLOYEE SALARY : %.2f\n", e[i].salary);
    }


}

void searchEmployee(int id)
{
    int i;

    for(i=0; i<n; i++)
    {
        if(e[i].id == id)
        {
            printf("\nEMPLOYEE FOUND.\n");
            printf("EMPLOYEE ID : %d\n", e[i].id);
            printf("EMPLOYEE NAME : %s\n", e[i].name);
            printf("EMPLOYEE SALARY : %.2f\n", e[i].salary);

            return;
        }
    }

 printf("EMPLOYEE NOT FOUND.\n");


}

 void updateSalary(int id, float salary)
 {
    int i;


    for(i=0; i<n; i++)
    {
        if(e[i].id == id)
        {
            e[i].salary = salary;

            printf("SALARY UPDATED SUCCESSFULLY.\n");

            return;
        }
    }

    printf("EMPLOYEE NOT FOUND.\n");


}

void deleteEmployee(int id)
{

    int i, j;


    for(i=0; i<n; i++)
    {
        if(e[i].id == id)
        {
            for(j=i; j<n-1; j++)
            {
                e[j] = e[j+1];
            }

            n--;

            printf("EMPLOYEE DELETED SUCCESSFULLY.\n");

            return;
         }
     }

    printf("EMPLOYEE NOT FOUND.\n");

}

    int main()
    {
        int choice;
        int id;
        float salary;


do
{
    printf("\n* * EMPLOYEE MANAGEMENT SYSTEM * *\n");
    printf("1. ADD EMPLOYEE\n");
    printf("2. DISPLAY EMPLOYEES\n");
    printf("3. SEARCH EMPLOYEE\n");
    printf("4. UPDATE SALARY\n");
    printf("5. DELETE EMPLOYEE\n");
    printf("6. EXIT\n");

    printf("ENTER YOUR CHOICE : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:

            addEmployee();
            break;

        case 2:

            displayEmployee();
            break;

        case 3:

            printf("ENTER EMPLOYEE ID : ");
            scanf("%d", &id);

            searchEmployee(id);
            break;

        case 4:

            printf("ENTER EMPLOYEE ID : ");
            scanf("%d", &id);

            printf("ENTER NEW SALARY : ");
            scanf("%f", &salary);

            updateSalary(id, salary);
            break;

        case 5:

            printf("ENTER EMPLOYEE ID : ");
            scanf("%d", &id);

            deleteEmployee(id);
            break;

        case 6:

            printf("THANK YOU.\n");
            break;

        default:

            printf("INVALID CHOICE.\n");
    }

} while(choice != 6);

return 0;


}
