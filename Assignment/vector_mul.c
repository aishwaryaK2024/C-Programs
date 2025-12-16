#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the dimension n (for n x n matrix): ");
    scanf("%d", &n);
    int A[n][n], array[n], result[n];
    printf("Enter elements of the %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matrix : ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d",A[i][j]);
        }
    }

    printf("Enter elements of the array (size %d):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        result[i] = 0; 
        for (j = 0; j < n; j++) {
            result[i] += A[i][j] * array[j];
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

