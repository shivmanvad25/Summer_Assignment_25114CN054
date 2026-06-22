//Write a program to Create quiz application. 

#include<stdio.h>

int main()
{
    int score=0;
    char ans;

    printf("\n* WELCOME TO THE QUIZ *\n");

    printf("\n 1. Which country has the longest coastline in the world?\n");
    printf(" A. FRANCE\n B. CANADA\n C. INDIA\n D. BRAZIL\n");

    printf("ENTER YOUR ANSWER : ");
    scanf(" %c" ,&ans);

    if(ans =='B'|| ans =='b')
    {
        score++;
        printf("CORRECT ANSWER.\n");
    }
    else
    {
        printf("WRONG ANSWER.\n");
        printf("\nCORRECT ANSWER IS = 'B'-CANADA\n");
    }

    printf("\n 2. Who wrote the book Discovery of India?\n");
    printf(" A. JAWAHARLAL NEHRU\n B. B.R AMBEDKAR\n C. MAHATMA GANDHI\n D. A.P.J ABDUL KALAM\n");

    printf("ENTER YOUR ANSWER : ");
    scanf(" %c" ,&ans);

    if(ans =='A'|| ans =='a')
    {
        score++;
        printf("CORRECT ANSWER.\n");
    }
    else
    {
        printf("WRONG ANSWER.\n");
        printf("\nCORRECT ANSWER IS = 'A'-JAWAHARLAL NEHRU\n");
    }

    printf("\n 3. Which is the smallest continent by land area?\n");
    printf(" A. AFRICA\n B. EUROPE\n C. AUSTRALIA \n D. ASIA\n");

    printf("ENTER YOUR ANSWER : ");
    scanf(" %c" ,&ans);

    if(ans =='C'|| ans =='c')
    {
        score++;
        printf("CORRECT ANSWER.\n");
    }
    else
    {
        printf("WRONG ANSWER.\n");
        printf("\nCORRECT ANSWER IS = 'C'- AUSTRALIA\n");
    }

    printf("\n 4. What is the capital of Kazakhstan?\n");
    printf(" A. TOKYO\n B. ASTANA\n C. ISTANBUL\n D.HELSINKI\n");

    printf("ENTER YOUR ANSWER : ");
    scanf(" %c" ,&ans);

    if(ans =='B'|| ans =='b')
    {
        score++;
        printf("CORRECT ANSWER.\n");
    }
    else
    {
        printf("WRONG ANSWER.\n");
        printf("\nCORRECT ANSWER IS = 'B'- ASTANA\n");
    }

    printf("\n 5. Which element has the atomic number 26?\n");
    printf(" A. ALUMINIUM\n B. NICKEL\n C. SILICON\n D.IRON\n");

    printf("ENTER YOUR ANSWER : ");
    scanf(" %c" ,&ans);

    if(ans =='D'|| ans =='d')
    {
        score++;
        printf("CORRECT ANSWER.\n");
    }
    else
    {
        printf("WRONG ANSWER.\n");
        printf("\nCORRECT ANSWER IS = 'D'- IRON\n");
    }

    printf("\n 6. Which among the following is not a greenhouse gas?\n");
    printf(" A. METHANE\n B. NITROUS OXIDE\n C. OXYGEN\n D. CARBON DIOXIDE\n");

    printf("ENTER YOUR ANSWER : ");
    scanf(" %c" ,&ans);

    if(ans =='C'|| ans =='c')
    {
        score++;
        printf("CORRECT ANSWER.\n");
    }
    else
    {
        printf("WRONG ANSWER.\n");
        printf("\nCORRECT ANSWER IS = 'c'- OXYGEN\n");
    }

    printf("\n* * QUIZ RESULT * * \n");

    printf("YOUR TOTAL SCORE = %d/6\n", score);
    
    if(score == 6)
    {
        printf("EXCELLENT!\n");
    }
    else if(score >= 4)
    {
        printf("GOOD JOB!\n");
    }
    else
    {
        printf("KEEP PRACTICING!\n");
    }

    return 0;

}