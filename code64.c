#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; 
    int digit, i, maxFreq = 0, mostFrequent = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    while (num > 0) {
        digit = num % 10;      
        freq[digit]++;         
        num /= 10;             
    }
    for (i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequent = i;
        }
    }
    printf("Digit that occurs most times: %d\n", mostFrequent);

    return 0;
}