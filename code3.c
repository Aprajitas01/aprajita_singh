#include<stdio.h>
int main()
{
    int l,b,a,p;
    printf("enter length and breadth of the rectangle\n");
    scanf("%d %d", &l ,&b);
    a=l*b;
    p=2*(l+b);
    printf("%d %d", a, p);
    return 0;
}