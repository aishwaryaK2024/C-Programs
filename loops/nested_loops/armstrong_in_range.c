#include <stdio.h>
#include <math.h>

int main() {
    int low, high;

    printf("Enter lower limit: ");
    scanf("%d", &low);

    printf("Enter upper limit: ");
    scanf("%d", &high);

    printf("Armstrong numbers between %d and %d are:\n", low, high);

    for (int num = low; num <= high; num++) {
        int n = 0, remainder, temp;
        double result = 0.0;
        temp = num;
        while (temp != 0) {
            temp /= 10;
            n++;
        }
        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }
        if ((int)result == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
