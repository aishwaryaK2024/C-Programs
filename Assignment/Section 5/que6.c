#include <stdio.h>
#include <stdlib.h>  // For malloc() and free()

int main() {
    int n, i;                                                     
 
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int *arr1 = (int *)malloc(sizeof(int)*n);
    int *arr2 = (int *)malloc(sizeof(int)*n);

    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    printf("Enter %d elements for the first array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("\nFirst array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond array elements (after copy):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    free(arr1);
    free(arr2);

    return 0;
}
