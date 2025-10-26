#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    } 

    printf("Enter the number to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d found at position %d.\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("%d not found in the array.\n", key);

    free(arr);

    return 0;
}
