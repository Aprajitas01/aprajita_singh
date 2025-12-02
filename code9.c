#include<stdio.h>
int main()
{
    int p,r,t,s,c;
    printf("enter principle value rate and time\n");
    scanf("%d %d %d", &p, &r, &t);
    s=(p*r*t)/100;
    c=(p*(1+r)^(t));
    printf("interest: %d %d", s , c);
    return 0;
}