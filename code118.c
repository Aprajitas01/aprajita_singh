#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int expected_sum = n * (n + 1) / 2;

    int actual_sum = 0;
    for(int i = 0; i < n; i++) {
        actual_sum += nums[i];
    }

    int missing_number = expected_sum - actual_sum;

    printf("Missing number: %d\n", missing_number);

    return 0;
}