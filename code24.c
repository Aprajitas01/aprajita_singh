#include<stdio.h>
int main()
 {
    float bill,u;
    printf("enter the units");
    scanf("%f", &u);

    if(u<=100)
    {
      bill=u*5;
      printf("total bill= %f", bill);
    }
    else if(u<=200)
    {
      bill=(100*5)+((u-100)*7);
      printf("total bill= %f", bill);
    }
    else if(u<=300)
    {
      bill=(100*5)+(100*7)+((u-200)*10);
      printf("total bill= %f", bill);
    }
    else
    {
      bill=(100*5)+(100*7)+(100*10)+((u-300)*12);
      printf("total bill= %f", bill);
    }
    return 0;

 }