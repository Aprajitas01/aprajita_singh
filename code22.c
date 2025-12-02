#include<stdio.h>
int main()
{
    float c,s,p,l,percentage;
    printf("enter cost price and selling price\n");
    scanf("%f %f", &c ,&s);

    if(s<c)
    {
        p= s-c;
        percentage=(p/c)*100;
        printf("%f %f is profit and profit percentage\n", p, percentage);
    }
    else if(c<s)
    {
        l=c-s;
        percentage=(l/c)*100;
        printf("%f %f is loss and loss percentage\n", l, percentage);
    }
    else
    {
        printf("no loss no profit\n");
    }
    return 0;
}