#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter number of rows and cols: ");
    scanf("%d %d", &rows,&cols);
    int A[rows][cols]; 

    if (rows <= 0 || cols <= 0) {
        printf("Invalid size of array!\n");
        return 0;
    }

    printf("Enter elements of the %dx%d array:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Array : \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
            sum += A[i][j];
        }
        printf("\n");
    }

    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
