#include<stdio.h>

int main()
{
    int a, b; 
    printf("Enter your number\n"); 
    scanf("%d" , &a);

    (b = a%2 );
    if ( b == 0 )
    {
        printf("This is not a prime number");
    
    }

    else
    {
        printf("This is a prime number");
    }
    return 0;
}