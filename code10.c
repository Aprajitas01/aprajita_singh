#include<stdio.h>
int main()
{
    int s,m,h;
    printf("enter time in seconds");
    scanf("%d",&s);
    m=(s%3600)/60;
    h=s/3600;
    s=(s%60);
    printf("%d:%d:%d ", h,m,s);
    return 0;

}