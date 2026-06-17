//Write a program to Count vowels and consonants.

#include<stdio.h>

int main()
{
    int i=0, vow=0, cons=0;
    char str[100];

    printf("Enter the name : ");
    scanf("%s", str);

    while(str[i]!='\0')
    {
        if((str[i]>='A'&& str[i]<='Z'|| str[i]>='a'&& str[i]<='z'))
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' || str[i]=='A' ||
            str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')

            vow++;

            else
            cons++;
        }

        i++;   

    }

    printf("VOWELS = %d\n",vow);
    printf("CONSONENTS = %d\n",cons);

    return 0;
}
    

    

    


        
