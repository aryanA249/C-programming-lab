#include <stdio.h>

// Function to calculate and print Fibonacci sequence
void fibonacci(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);
        fibonacci(n - 1, b, a + b);
    }
}

int main() {
    int terms;

    // Input the number of terms for the Fibonacci sequence
    printf("Enter the number of terms for the Fibonacci sequence: ");
    scanf("%d", &terms);

    // Check if the number of terms is valid
    if (terms <= 0) {
        printf("Invalid input. Number of terms should be greater than 0.\n");
        return 1;  // Return an error code
    }

    // Print the Fibonacci sequence
    printf("Fibonacci sequence for %d terms: ", terms);
    fibonacci(terms, 0, 1);

    return 0;
}
