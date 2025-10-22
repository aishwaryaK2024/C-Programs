#include <stdio.h>
#include <stdlib.h>  
int main() {
    int n, i;
    float sum = 0, avg = 0;
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
        sum += arr[i];
    }
    avg = sum / n;
    printf("\nSum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    free(arr);

    return 0;
}
