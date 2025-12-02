#include<stdio.h> 

int main()
{
    int a, b, c = 1;   

    printf("Enter your number\n");
    scanf("%d", &a);
    
    while (a > 0)
    {
        b = a % 10;      
        if (b % 2 != 0)   
        {
            c = c * b;    
        }
        a = a / 10;       
    }

    if (c == 1)
        printf("No odd digits found\n");
    else
        printf("This is your product: %d\n", c);

    return 0;
}