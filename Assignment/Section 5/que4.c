#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *A = (int *)malloc(sizeof(int)*n);
    if (A == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\nNumber of even elements = %d\n", evenCount);
    printf("Number of odd elements  = %d\n", oddCount);

    free(A);

    return 0;
}
