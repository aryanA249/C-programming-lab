#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input the number for which factorial is to be calculated
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the input is valid
    if (num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;  // Return an error code
    }

    // Calculate and print the factorial
    printf("Factorial of %d is %llu\n", num, factorial(num));

    return 0;
}
