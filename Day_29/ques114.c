//Write a program to Create menu-driven array operations system.

#include<stdio.h>

int main()
{
    int a[100], choice;
    int i, n=0, m, temp, posi, j;

    do
    {
        printf("\n* * MENU DRIVEN ARRAY OPERATIONS * *\n");

        printf("\n-------------------------------------\n");

        printf("\n 1. CREATE DATA\n 2. DISPLAY DATA\n 3. APPEND DATA\n 4. COUNT DATA\n 5. SEARCH BY POSITION\n 6. UPDATE BY POSITION\n 7. DELETE BY POSITION\n 8. REVERSE DATA\n 9. SORT DATA ASCENDING\n 10. SORT DATA DESCENDING\n 11. EXIT THE PROGRAM\n ");
        
        printf("\n--------------------------------------\n");

        printf("ENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("ENTER ARRAY SIZE : ");
            scanf("%d",&n);

            for(i=0; i<n; i++)
            {
                printf("ENTER NUMBER %d : ", i+1);
                scanf("%d",&a[i]);
            }
            break;

        case 2:
            if(n == 0)
            {
                printf("NO DATA AVAILABLE.\n");
            }
            else
            {
               printf("\nYOUR DATA\n");
               printf("[ ");

               for(i=0; i<n; i++)
               {
                    printf("%d ",a[i]);
               }
   
                printf("]\n");
            }
            break;

        case 3:
            printf("ENTER HOW MANY MORE NUMBERS YOU WANT TO ADD : ");
            scanf("%d",&m);

            for(i = n; i < n + m; i++)
            {
                printf("ENTER NUMBER %d : ", i + 1);
                scanf("%d", &a[i]);
            }

            n= n+m;
            break;

        case 4:
            printf("TOTAL NUMBER OF COUNT IS : %d\n",n);


            break; 
            
        case 5:
        
            printf("ENTER POSITION TO SEARCH : ");
            scanf("%d",&posi);

            if(posi<1 || posi>n)
            {
                printf("Position must be less than or equal to %d",n);
            }
            else
            {
                printf("Element at %d position is : %d",posi,a[posi-1]);
            }
            break;  
            
        case 6:
        
            printf("ENTER POSITION TO UPDATE : ");
            scanf("%d",&posi);

            if(posi<1 || posi>n)
            {
                printf("Position must be less than or equal to %d",n);
            }
            else
            {
                printf("Element at %d position is : %d\n",posi,a[posi-1]);

                printf("\nENTER NEW NUMBER : ");
                scanf("%d",&a[posi-1]);

                printf("Element at %d position is : %d\n",posi,a[posi-1]);
            }
            break;    
        
        case 7:
            
            printf("ENTER POSITION TO DELETE : ");
            scanf("%d",&posi);

            if(posi<1 || posi>n)
            {
                printf("Position must be less than or equal to %d",n);
            }
            else
            {
                printf("%d is deleted sucessfully...!",a[posi-1]);

                for(i=posi-1; i<n-1; i++)
                {
                    a[i]=a[i+1];
                }
                n--;
            }
            break; 
        
        case 8:

            printf("\nREVERSED DATA : \n ");
            printf("[ ");

            for(i=n-1; i>=0; i--)
            {
                printf("%d ", a[i]);
            }
            printf("]\n");
            break;    
                
        case 9:
            for(i=0; i<n; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    if(a[i]>a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            } 
            printf("\nSORTED DATA IN ASCENDING ORDER\n");
            printf("[ ");
            for(i=0; i<n; i++)
            {
                printf("%d ",a[i]);
            }
            printf("]\n");
            break;

        case 10:
            for(i=0; i<n; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    if(a[i]<a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            } 
            printf("\nSORTED DATA IN DESCENDING ORDER\n");
            printf("[ ");
            for(i=0; i<n; i++)
            {
                printf("%d ",a[i]);
            }
            printf("]\n");
            break;    
            
        case 11:
            printf("\nTHANK YOU.!\n"); 
            break;  


        default:
            printf("\nINVALID CHOICE.\n");
            break;
        }

    }while(choice!=11);
    
    return 0;

}