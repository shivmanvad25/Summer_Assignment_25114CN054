//Write a program to Create student record system using arrays and strings.


#include<stdio.h>
#include<string.h>

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
    int i, roll, found, pos;


do
{
    printf("\n* * STUDENT RECORD MANAGEMENT * *\n");
    printf("\n---------------------------------\n");

    printf("\n1. ADD STUDENT\n");
    printf("2. DISPLAY STUDENTS\n");
    printf("3. SEARCH STUDENT\n");
    printf("4. UPDATE STUDENT\n");
    printf("5. DELETE STUDENT\n");
    printf("6. EXIT\n");
    
    printf("\n---------------------------------\n");

    printf("ENTER YOUR CHOICE : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: 
            if(n >= 100)
                {
                    printf("STUDENT DATABASE FULL!\n");
                    break;
                }

            printf("ENTER ROLL NUMBER : ");
            scanf("%d", &s[n].roll);

            printf("ENTER NAME : ");
            getchar();
            fgets(s[n].name, sizeof(s[n].name), stdin);
            s[n].name[strcspn(s[n].name, "\n")] = '\0';

            printf("ENTER MARKS : ");
            scanf("%f", &s[n].marks);

            n++;

            printf("\nSTUDENT ADDED SUCCESSFULLY.\n");
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
                found = 0;

                printf("\nENTER ROLL TO UPDATE : ");
                scanf("%d", &roll);

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("ENTER NEW NAME : ");
                        getchar();
                        fgets(s[i].name, sizeof(s[i].name), stdin);
                        s[i].name[strcspn(s[i].name, "\n")] = '\0';

                        printf("ENTER NEW MARKS : ");
                        scanf("%f", &s[i].marks);

                        printf("UPDATED SUCCESSFULLY.\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("NOT FOUND.\n");

                break; 
                
        case 5:
                found = 0;

                printf("ENTER ROLL TO DELETE : ");
                scanf("%d", &roll);

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        for(pos = i; pos < n - 1; pos++)
                        {
                            s[pos] = s[pos + 1];
                        }

                        n--;

                        printf("STUDENT ID DELETED SUCCESSFULLY.\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("STUDENT ROLL NO NOT FOUND.\n");

                break;
        

        case 6:

            printf("THANK YOU FOR USING SYSTEM...EXITING\n");
            break;

        default:

            printf("INVALID CHOICE.\n");
    }

} while(choice != 6);

return 0;


}
