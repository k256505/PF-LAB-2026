#include<stdio.h>
#include<math.h>
int main() {
    int choice;
    float num1, num2, result;
    do{
    printf("\n===== Math Menu =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square\n");
    printf("6. Cube\n");
    printf("7. Power (x^2 only)\n");
    printf("8. Absolute Value\n");
    printf("9. Modulus\n");
    printf("10. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if (num2 == 0) {
                printf("Cannot divide by zero!\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%f", &num1);
            result = pow(num1, 2);
            printf("Result: %.2f\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%f", &num1);
            result = pow(num1, 3);
            printf("Result: %.2f\n", result);
            break;

        case 7:
            printf("Enter base of the exponent 2: ");
            scanf("%f", &num1);
            result = pow(num1,2); 
            printf("Result: %.2f\n", result);
            break;

        case 8:
            printf("Enter a number: ");
            scanf("%f", &num1);
            if (num1 < 0) {
                result = -num1;
            } else {
                result = num1;
            }
            printf("Result: %.2f\n", result);
            break;

        case 9:
            printf("Enter two whole numbers: ");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("Remainder: %d\n", a % b);
            break;

        case 10:
            printf("Thank you for using our operation console!");
            break;

        default:
            printf("Invalid choice!\n");
    }
    }
    while(choice != 10);
    return 0;
}
