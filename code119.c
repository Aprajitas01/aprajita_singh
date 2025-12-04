#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  
    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int xor_all = 0;

    for (int i = 0; i < n; i++) {
        xor_all ^= nums[i];
        if (i < n - 1)
            xor_all ^= i + 1;
    }

    printf("%d\n", xor_all);
    return 0;
}