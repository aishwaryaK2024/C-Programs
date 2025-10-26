#include <stdio.h>
#include <stdlib.h>  

int main() {
    int n, i, posCount = 0, negCount = 0;
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
        if (arr[i] >= 0)
            posCount++;
        else
            negCount++;
    }

    int *positive = (int *)malloc(posCount * sizeof(int));
    int *negative = (int *)malloc(negCount * sizeof(int));

    if (positive == NULL || negative == NULL) {
        printf("Memory allocation failed!\n");
        free(arr);
        return 0;
    }

    int posIndex = 0, negIndex = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] >= 0)
            positive[posIndex++] = arr[i];
        else
            negative[negIndex++] = arr[i];
    }

    printf("\nPositive numbers:\n");
    for (i = 0; i < posCount; i++)
        printf("%d ", positive[i]);

    printf("\nNegative numbers:\n");
    for (i = 0; i < negCount; i++)
        printf("%d ", negative[i]);

    free(arr);
    free(positive);
    free(negative);

    return 0;
}
