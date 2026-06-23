// Write a program to create marksheet generation system.

#include <stdio.h>

#define MAX 100

struct Student
{
    int roll;
    char name[30];
    int maths, science, english;
    int total;
    float per;
};

struct Student s[MAX];
int n = 0;


void addStudent()
{
    printf("\nENTER ROLL NO: ");
    scanf("%d", &s[n].roll);

    printf("ENTER NAME: ");
    scanf("%s", s[n].name);

    printf("ENTER MARKS OF SUBJECTS:\n");
    scanf("%d%d%d", &s[n].maths, &s[n].science, &s[n].english);

    s[n].total = s[n].maths + s[n].science + s[n].english;
    s[n].per = s[n].total / 3.0;

    n++;

    printf("RECORD ADDED SUCCESSFULLY!\n");
}


void displayAll()
{
    int i;

    if(n == 0)
    {
        printf("\nNO RECORDS FOUND!\n");
        return;
    }

    printf("\nROLL\tNAME\tMATHS\tSCIENCE\tENGLISH\tTOTAL\tPERCENTAGE\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f\n",
            s[i].roll,
            s[i].name,
            s[i].maths,
            s[i].science,
            s[i].english,
            s[i].total,
            s[i].per
        );
    }
}

void searchStudent()
{
    int roll, i;

    printf("\nENTER ROLL NO TO SEARCH: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\n--- MARKSHEET ---\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("M1      : %d\n", s[i].maths);
            printf("M2      : %d\n", s[i].science);
            printf("M3      : %d\n", s[i].english);
            printf("Total   : %d\n", s[i].total);
            printf("Percent : %.2f\n", s[i].per);

            if(s[i].per >= 75)
                printf("Grade   : A\n");
            else if(s[i].per >= 60)
                printf("Grade   : B\n");
            else if(s[i].per >= 40)
                printf("Grade   : C\n");
            else
                printf("Grade   : Fail\n");

            return;
        }
    }

    printf("Record Not Found!\n");
}

int main()
{
    int ch;

    do
    {
        printf("\n* * MARKSHEET SYSTEM * *\n");
        printf("\n1. ADD STUDENT");
        printf("\n2. DISPLAY All");
        printf("\n3. SEARCH MARKSHEET");
        printf("\n4. EXIT");
        printf("\nENTER CHOICE: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayAll();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("EXITING...\n");
                break;

            default:
                printf("INVALID CHOICE!\n");
        }

    } while(ch != 4);

    return 0;
}