#include <stdio.h>
#include <math.h>

int main() {
    int num, n1, r, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    n1 = num;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp != 0) {
        r = temp % 10;
        result += pow(r, n);
        temp /= 10;
    }
    if ((int)result == n1)
        printf("%d is an Armstrong number.\n", n1);
    else
        printf("%d is NOT an Armstrong number.\n", n1);

    return 0;
}
