#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, i,oddSum = 0, evenSum = 0;

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
    for(i = 0;i<n;i++){
        if(i%2==0)
            evenSum = evenSum + arr[i];
        else
            oddSum = oddSum + arr[i];
    }

    printf("difference between the sum of even-indexed and odd-indexed elements. ");
    printf("%d ",evenSum-oddSum);

    free(arr);

    return 0;
}
