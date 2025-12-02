#include<stdio.h>

int a , product = 1  , i ;
int main()
{
    printf("Enter your number\n");
    scanf("%d", &a);

    for (i=1; i<=a; i++) 
    {
      
        if(i%2==0)
        {
            product*= i;
        }

    }

    printf("%d %d " , a , product);
    return 0;
}