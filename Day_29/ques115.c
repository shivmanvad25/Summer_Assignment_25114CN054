// Write a program to Create menu-driven string operations system.

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    int choice, i, len;
    char temp;

    str1[0] = '\0';
    str2[0] = '\0';

    do
    {
        printf("\n* * MENU DRIVEN STRING OPERATIONS * *\n");

        printf("\n--------------------------------------\n");
        printf("1. INPUT STRINGS\n");
        printf("2. DISPLAY STRINGS\n");
        printf("3. STRING LENGTH\n");
        printf("4. COPY STRING\n");
        printf("5. CONCATENATE STRINGS\n");
        printf("6. COMPARE STRINGS\n");
        printf("7. REVERSE FIRST STRING\n");
        printf("8. EXIT\n");
        printf("--------------------------------------\n");

        printf("ENTER YOUR CHOICE : ");
        scanf("%d", &choice);
        getchar();      

        switch(choice)
        {
            case 1:
                printf("ENTER FIRST STRING : ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';//removes the newline provided by fgets..

                printf("ENTER SECOND STRING : ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                break;

            case 2:
                if(strlen(str1) == 0)
                {
                    printf("NO STRING AVAILABLE.\n");
                    break;
                }


                printf("\nFIRST STRING  : %s\n", str1);
                printf("\nSECOND STRING : %s\n", str2);
                break;

            case 3:
                printf("LENGTH OF FIRST STRING  : %lu\n", strlen(str1));
                printf("LENGTH OF SECOND STRING : %lu\n", strlen(str2));
                break;

            case 4:
                strcpy(str2, str1);
                printf("STRING COPIED SUCCESSFULLY.\n");
                printf("SECOND STRING : %s\n", str2);
                break;

            case 5:
                strcat(str1, str2);
                printf("CONCATENATED STRING : %s\n", str1);
                break;

            case 6:
                
                printf("FIRST STRING  : %s\n", str1);
                printf("SECOND STRING : %s\n", str2);
                
                if(strcmp(str1, str2) == 0)
                    printf("BOTH STRINGS ARE EQUAL.\n");
                else
                    printf("BOTH STRINGS ARE NOT EQUAL.\n");
                break;

            case 7:
                
                len = strlen(str1);

                for(i = 0; i < len / 2; i++)
                {
                    temp = str1[i];
                    str1[i] = str1[len - 1 - i];
                    str1[len - 1 - i] = temp;
                }

                printf("REVERSED STRING : %s\n", str1);
                break;

            case 8:
                printf("THANK YOU!\n");
                break;

            default:
                printf("INVALID CHOICE.\n");
        }

    } while(choice != 8);

    return 0;
}