#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2, result;
    
    printf(" CALCULATOR\n");
    
    do {
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (×)\n");
        printf("4. Division (÷)\n");
        printf("5. Modulus (%%)\n");
        printf("6. Square (x²)\n");
        printf("7. Square Root (√)\n");
        printf("8. Power (x^y)\n");
        printf("9. Exit\n");
        printf("Enter your choice (1-9): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
                
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
                
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2f × %.2f = %.2f\n", num1, num2, result);
                break;
                
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed!\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2f ÷ %.2f = %.2f\n", num1, num2, result);
                }
                break;
                
            case 5: 
                printf("Enter two integers: ");
                scanf("%f %f", &num1, &num2);
                if ((int)num2 == 0) {
                    printf("Error: Division by zero is not allowed!\n");
                } else {
                    result = (int)num1 % (int)num2;
                    printf("Result: %.0f %% %.0f = %.0f\n", num1, num2, result);
                }
                break;
                
            case 6:
                printf("Enter a number: ");
                scanf("%f", &num1);
                result = num1 * num1;
                printf("Result: %.2f² = %.2f\n", num1, result);
                break;
                
            case 7: 
                printf("Enter a number: ");
                scanf("%f", &num1);
                if (num1 < 0) {
                    printf("Error: Cannot calculate square root of negative number!\n");
                } else {
                    result = sqrt(num1);
                    printf("Result: √%.2f = %.2f\n", num1, result);
                }
                break;
                
            case 8:
                printf("Enter base and exponent: ");
                scanf("%f %f", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2f^%.2f = %.2f\n", num1, num2, result);
                break;
                
            case 9: 
                break;
                
            default:
                printf("Invalid choice! Please enter a number between 1-9.\n");
        }
        
    } while (choice != 9);
    
    return 0;
}
