#include <stdio.h>
int main() {
    int n, m, i, j;
    int A[50][50];
     int isDistinct = 1;
    printf ("Enter row and column of matrix:\n");
    scanf("%d %d", &n, &m);
    printf ("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            printf ("a[%d][%d] ",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    if (n != m) {
        printf("False\n");
        return 0;
    }
for (int i = 0; i < n; i++) 
{
        for (int j = i + 1; j < n; j++) 
        {
            if (A[i][i] == A[j][j]) 
            {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) 
        break;
    }

    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}