// Write a program to Create Inventory Management System.

#include<stdio.h>

int main()
{
    int id[100], qnty[100];
    float price[100];
    int n = 0, choice;
    int i, posi;

    do
    {
        printf("\n* * INVENTORY MANAGEMENT SYSTEM * *\n");

        printf("\n--------------------------------------\n");
        printf("1. ADD PRODUCT\n");
        printf("2. DISPLAY PRODUCTS\n");
        printf("3. SEARCH PRODUCT\n");
        printf("4. UPDATE PRODUCT\n");
        printf("5. DELETE PRODUCT\n");
        printf("6. TOTAL PRODUCTS\n");
        printf("7. EXIT\n");
        printf("----------------------------------------\n");

        printf("ENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(n >= 100)
                {
                    printf("INVENTORY IS FULL.\n");
                    break;
                }

                printf("ENTER PRODUCT ID : ");
                scanf("%d", &id[n]);

                printf("ENTER PRODUCT QUANTITY : ");
                scanf("%d", &qnty[n]);

                printf("ENTER PRODUCT PRICE : ");
                scanf("%f", &price[n]);

                n++;
                printf("PRODUCT ADDED SUCCESSFULLY.\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("NO PRODUCTS AVAILABLE.\n");
                    break;
                }

                printf("\nID\tQUANTITY\tPRICE\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%d\t\t%.2f\n", id[i], qnty[i], price[i]);
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("NO PRODUCTS AVAILABLE.\n");
                    break;
                }

                printf("ENTER PRODUCT ID TO SEARCH : ");
                scanf("%d", &posi);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == posi)
                    {
                        printf("\nPRODUCT FOUND\n");
                        printf("ID : %d\n", id[i]);
                        printf("QUANTITY : %d\n", qnty[i]);
                        printf("PRICE : %.2f\n", price[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("PRODUCT NOT FOUND.\n");

                break;

            case 4:
                if(n == 0)
                {
                    printf("NO PRODUCTS AVAILABLE.\n");
                    break;
                }

                printf("ENTER PRODUCT ID TO UPDATE : ");
                scanf("%d", &posi);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == posi)
                    {
                        printf("ENTER NEW QUANTITY : ");
                        scanf("%d", &qnty[i]);

                        printf("ENTER NEW PRICE : ");
                        scanf("%f", &price[i]);

                        printf("\nPRODUCT UPDATED SUCCESSFULLY.\n");
                        break;
                    }
                }

                if(i == n)
                    printf("\nPRODUCT NOT FOUND.\n");

                break;

            case 5:
                if(n == 0)
                {
                    printf("\nNO PRODUCTS AVAILABLE.\n");
                    break;
                }

                printf("ENTER PRODUCT ID TO DELETE : ");
                scanf("%d", &posi);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == posi)
                    {
                        int j;

                        for(j = i; j < n - 1; j++)
                        {
                            id[j] = id[j + 1];
                            qnty[j] = qnty[j + 1];
                            price[j] = price[j + 1];
                        }

                        n--;
                        printf("PRODUCT DELETED SUCCESSFULLY.\n");
                        break;
                    }
                }

                if(i == n)
                    printf("PRODUCT NOT FOUND.\n");

                break;

            case 6:
                printf("TOTAL PRODUCTS : %d\n", n);
                break;

            case 7:
                printf("THANK YOU!\n");
                break;

            default:
                printf("INVALID CHOICE.\n");
        }

    } while(choice != 7);

    return 0;
}