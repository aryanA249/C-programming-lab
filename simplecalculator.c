#include <stdio.h>

// Function to add two numbers
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to subtract two numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to divide two numbers
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main() {
    char operation;
    double num1, num2, result;

    // Input operation
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Input two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation based on the chosen operation
    switch (operation) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '/':
            result = divide(num1, num2);
            if (num2 != 0) {
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}
