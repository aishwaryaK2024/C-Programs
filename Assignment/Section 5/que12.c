#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=0, i=0, j=0, temp=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 0;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    int secondSmallest = -1, secondLargest = -1;

    for (i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            secondSmallest = arr[i];
            break;
        }
    }

    for (i = n - 2; i >= 0; i--) {
        if (arr[i] != arr[n - 1]) {
            secondLargest = arr[i];
            break;
        }
    }

    // Display results
    if (secondSmallest == -1)
        printf("\nNo distinct second smallest element.\n");
    else
        printf("\nSecond smallest element = %d\n", secondSmallest);

    if (secondLargest == -1)
        printf("No distinct second largest element.\n");
    else
        printf("Second largest element = %d\n", secondLargest);

    free(arr);

    return 0;
}
