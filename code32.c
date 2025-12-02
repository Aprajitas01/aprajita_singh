 #include<stdio.h> 

int main()
{
    int a  , reversed = 0 , rem , og; 

    printf("Enter your number\n"); 
    scanf("%d", &a);
    if ( a== 8 || a == 7 || a == 6 || a == 5 || a ==4 || a == 3 || a == 2 || a == 1 || a == 0 || a == 9 )
    { 
     printf ("This is a single digit number cant be reversed");

    }

(og = a);

    while (a!=0)
   
     
         {  rem = a%10 ;
          reversed = reversed * 10 + rem    ; 
          a =a /10 ;
         }
          
         
         if (og == reversed) 
         {
         printf("This is a palindrome");
         }
         else 
         {printf("This is not a palindrome");}

         
    return 0;
}