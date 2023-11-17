#include <stdio.h>

int main() {
    int num, i = 2;
    int isPrime = 1;  // Assume the number is prime initially

    // Read the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Special case: 0 and 1 are not prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for divisibility from 2 to the square root of the number
        while (i * i <= num) {
            if (num % i == 0) {
                // If divisible, the number is not prime
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
