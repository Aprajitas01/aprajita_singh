#include<stdio.h>
int main()
{
    int p;
    printf("enter percentage");
    scanf("%d", &p);

    if(p>=90 && p<=100)
    {
        printf("%d grade is A", p);
    }
    else if(p>=80 && p<=89)
    {
        printf("%d grade is B", p);
    }
    else if(p>=70 && p<=79)
    {
        printf("%d grade is C", p);
    }
    else if(p>=60 && p<=69)
    {
        printf("%d grade is D", p);
    }
    else
    {
        printf("%d grade is E", p);
    }
    return 0;
}