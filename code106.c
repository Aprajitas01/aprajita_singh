#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int nge[n]; 
    
    for (int i = 0; i < n; i++) {
        nge[i] = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge[i] = arr[j];
                break; 
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (i != n - 1)
            printf("%d, ", nge[i]);
        else
            printf("%d", nge[i]);
    }
    printf("\n");

    return 0;
}