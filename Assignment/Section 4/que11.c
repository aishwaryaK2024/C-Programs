#include <stdio.h>

int main() {
    int num = 0, cnt = 0;
    float sum = 0, avg = 0;

    printf("Enter numbers (negative number to stop):\n");

    while (1) {
        scanf("%d", &num); 
        if (num < 0)
            break;  

        sum += num;
        cnt++;
    }

    if (cnt > 0) {
        avg = sum / cnt;
        printf("Average of positive numbers = %.2f\n", avg);
    } else {
        printf("No positive numbers were entered.\n");
    }

    return 0;
}
