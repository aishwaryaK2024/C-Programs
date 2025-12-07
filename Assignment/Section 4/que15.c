#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    printf("Enter a number (n): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no prime numbers less than 2.\n");
        return 0;
    }

    for (i = 2; i <= n; i++) {
        isPrime = 1; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }
    return 0;
}
