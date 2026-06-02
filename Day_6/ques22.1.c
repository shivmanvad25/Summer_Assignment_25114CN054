 //Write a program to Convert binary to decimal.
 
 #include<stdio.h>
 #include<math.h>

 int main()
 {
    int binary, i=0, dec=0, rem;

    printf(" ENTER THE BINARY NUMBER : ");
    scanf("%d", &binary);

    while( binary > 0)
    {
        rem = binary%10;
        dec = dec +( rem * pow(2 , i));
        binary = binary / 10 ;
        i++;

        printf("rem = %d, dec=%d, binary= %d, i=%d\n",rem, dec, binary,i);
    }

     printf("THE DECIMAL NUMBER IS : %d\n",dec);
    
    return 0;
 
}
