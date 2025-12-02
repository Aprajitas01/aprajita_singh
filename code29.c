#include <stdio.h>

int main()
{

int a , i , fac=1 ;

printf("Enter your number: \n");
scanf( "%d" , &a ); 

for(i = 1 ; i<=a ; i++)
{
     fac *= i ; 
     
}

printf("%d" , fac);



return 0 ;


}