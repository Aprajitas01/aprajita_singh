#include<stdio.h>
int main()
{
    int a , b , sum= 0;
    printf("Enter your number\n");
    scanf("%d", &a );
     
    for (;a>0 ; a=a/10 )
    {
     b = a%10 ;
     sum = sum + b ;


    }
printf("This is the sum : %d \n",sum);
    return 0;
}