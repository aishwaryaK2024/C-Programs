#include <stdio.h>

int main() {
    int n, i = 2, count = 0;

    printf("Enter how many prime numbers to print: ");
    scanf("%d", &n);

    while (count < n) {
        int isPrime = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
            count++;
        }
        i++;
    }

    return 0;
}
