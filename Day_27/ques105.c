//Write a program to Create student record management system.

#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int choice, n = 0;
    int i, roll, found;


do
{
    printf("\n* * STUDENT RECORD MANAGEMENT * *\n");
    printf("1. ADD STUDENT\n");
    printf("2. DISPLAY STUDENTS\n");
    printf("3. SEARCH STUDENT\n");
    printf("4. EXIT\n");

    printf("ENTER YOUR CHOICE : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:

            printf("ENTER ROLL NUMBER : ");
            scanf("%d", &s[n].roll);

            printf("ENTER NAME : ");
            scanf("%s", s[n].name);

            printf("ENTER MARKS : ");
            scanf("%f", &s[n].marks);

            n++;

            printf("STUDENT ADDED SUCCESSFULLY.\n");
            break;

        case 2:

            if(n == 0)
            {
                printf("NO RECORDS FOUND.\n");
            }
            else
            {
                printf("\nROLL\tNAME\tMARKS\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\n",
                           s[i].roll,
                           s[i].name,
                           s[i].marks);
                }
            }

            break;

        case 3:

            found = 0;

            printf("ENTER ROLL NUMBER TO SEARCH : ");
            scanf("%d", &roll);

            for(i = 0; i < n; i++)
            {
                if(s[i].roll == roll)
                {
                    printf("\nSTUDENT FOUND\n");
                    printf("ROLL NUMBER : %d\n", s[i].roll);
                    printf("NAME : %s\n", s[i].name);
                    printf("MARKS : %.2f\n", s[i].marks);

                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                printf("STUDENT NOT FOUND.\n");
            }

            break;

        case 4:

            printf("THANK YOU FOR YOUR TIME.\n");
            break;

        default:

            printf("INVALID CHOICE.\n");
    }

} while(choice != 4);

return 0;


}
