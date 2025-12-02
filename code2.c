#include<stdio.h>
int main()
{
    float a,b,sum,diff,p,q;
    printf("enter two numbers\n");
    scanf("%f %f", &a ,&b);
    sum=a+b;
    diff=a-b;
    p=a*b;
    q=a/b;
    printf("%f %f %f %f",sum,diff,p,q);
    return 0;
}