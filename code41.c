#include <stdio.h>

int main() {
    int num, temp, first, last, digits = 0, power = 1, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10; 
    while (temp >= 10) {
        temp /= 10;
        digits++;
        power *= 10;   
    }
    first = temp;     

    if (power == 1 && num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    middle = (num % power) / 10;
    swapped = last * power + middle * 10 + first;

    printf("Swapped number: %d\n", swapped);

    return 0;
}