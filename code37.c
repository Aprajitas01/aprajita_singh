#include <stdio.h>
int gcd(int a,int b){
    if (b==0)
        return a;
    else
        return gcd(b, a%b);
}
int main()
{
    int num1, num2,c;
    printf("enter num1 and num2\n");
    scanf("%d %d",&num1,&num2);
   
   c = (num1*num2)/(gcd(num1,num2));

   printf("LCM of these two numbers are %d",c );
    
    return 0;
}