#include <stdio.h>

int main() {
    int rows=0, cols=0, i=0, j=0,largest=0,smallest=0;

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
    largest = smallest = A[0][0];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
            if (A[i][j] > largest)
                largest = A[i][j];
            if (A[i][j] < smallest)
                smallest = A[i][j];
        }
        printf("\n");
    }

    printf("\nLargest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
   
    return 0;
}
