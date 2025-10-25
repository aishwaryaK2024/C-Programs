#include <stdio.h>
#include <stdlib.h>  
int main() {
    int n, i, j, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
    }

    printf("\nNumber of good pairs = %d\n", count);
    free(arr);

    return 0;
}
