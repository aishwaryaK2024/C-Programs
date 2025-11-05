#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows,&cols);

    if (rows <= 0 || cols <= 0) {
        printf("Invalid matrix size!\n");
        return 0;
    }
    int A[rows][cols],B[rows][cols];
    int Sum[rows][cols],Diff[rows][cols];
    printf("\nEnter elements of Matrix A (%dx%d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B (%dx%d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printf("Matrix A : \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B : \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    

    printf("\nMatrix Addition (A + B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
            printf("%d ",Sum[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix Subtraction (A - B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            Diff[i][j] = A[i][j] - B[i][j];
            printf("%d ", Diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
