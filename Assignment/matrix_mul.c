#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the dimension n (for n x n matrices): ");
    scanf("%d", &n);
    int A[n][n], B[n][n], C[n][n]; 
    printf("Enter elements  matrix for A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matrix A : \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements matrix for B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printf("Matrix B : \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix (A × B):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
