#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the side lengths of the triangle");
    scanf("%d %d %d", &a ,&b ,&c);
    
    if(a==b && b==c && c==a)
    {
        printf("equilateral triangle");
    }
    else if(a!=b && b!=c && c!=a)
    {
        printf("scalene triangle");
    }
    else
    {
        printf("isocelese triangle");
    }
    return 0;

}