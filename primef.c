#include <stdio.h>

int main() {
    int n;
    printf("Enter a number (n): ");
    scanf("%d", &n);
    printf("Prime factorization of numbers 1 to %d:\n", n);
    for (int num = 1; num <= n; num++) {
        int temp = num;
        printf("%d = ", num);
        if (num == 1) {
            printf("1");
        } 
        else 
        {
            for (int i = 2; i <= temp; i++) {
                while (temp % i == 0) {
                    printf("%d", i);
                    temp /= i;
                    if (temp > 1)
                    {
                        printf(" * ");
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
