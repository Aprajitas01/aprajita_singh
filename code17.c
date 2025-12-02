#include <stdio.h>
#include <math.h>
int main()
{ 
    float a, b ,c ,d , root1 , root2 , root3 ; 

    printf("Enter your values\n");
    scanf("%f %f %f", &a , &b , &c );

    if ( a==0 ) 
    {printf("This is not a quadratic equation\n");}

    d = (b*b) - (4 * a * c);

    if (d > 0)
    { root1 = (-b + sqrt(d)) / (2*a); 
      root2 = (-b - sqrt(d)) / (2*a); 
      printf("Roots are real and diff\n");
      printf("Roots = %.1f , %.1f" , root1 , root2);}

    else if (d == 0)
    {root3 = ((-b) / 2*a ); 
    printf("Roots are real and same\n");
    printf("Roots = %.1f" , root3 ) ;}

    else { printf("This is a complex "); }

    

    return 0;
}