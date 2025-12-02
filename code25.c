#include <stdio.h>
int main()
 {
    int num1, num2;
    char o;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &o); 
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(o)
     {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;

        case '-':
            printf("Result: %d\n", num1 - num2);
            break;

        case '*':
            printf("Result: %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result: %d\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Result: %d\n", num1 % num2);
            else
                printf("Error: Modulo by zero is not allowed.\n");
            break;
            
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
