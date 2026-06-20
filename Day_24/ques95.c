//Write a program to Find longest word. 

#include<stdio.h>

int main()
{
    char str[500];
    int i=0, len=0, maxlen=0;
    int strt=0, maxstrt=0;

    printf("ENTER THE STRING : ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i]!=' ' && str[i]!= '\n')
        {
            if(len==0)
            {
                strt=i;

            }
            len++;
        }
        else
        {
            if(len>maxlen)
            {
                maxlen = len;
                maxstrt = strt;
            }
            len=0;

        }
        i++;

    }

    if(len>maxlen)
    {
        maxlen = len;
        maxstrt = strt;
    }

    printf("LONGEST WORD OF STRING IS : ");

    
    for(i = maxstrt; i < maxstrt + maxlen; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nLENGTH IS : %d.\n",maxlen);

    return 0;
    
    

}