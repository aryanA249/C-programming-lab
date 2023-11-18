#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Read the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Process each digit using a while loop
    while (num > 0) {
        // Extract the last digit
        digit = num % 10;

        // Add the digit to the sum
        sum += digit;

        // Remove the last digit from the number
        num /= 10;
    }

    // Output the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
