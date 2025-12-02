#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character\n");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z')
    {
        printf("%c is lowercase character",ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("%c is uppercase character",ch);
    }
    else if(ch<='0' && ch>='9')
    {
        printf("%c is digit",ch);
    }
    else
    {
        printf("%c is special case",ch);
    }
    return 0;
}