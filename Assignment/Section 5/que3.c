#include <stdio.h>
#include <stdlib.h>  

int main() {
    int n, i;
    int *arr = (int *)malloc(n * sizeof(int));
    int max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    free(arr);

    return 0;
}
