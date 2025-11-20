#include <stdio.h>

int main() {
    int num;

    // Input a number   
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd using ternary operator
    (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}
