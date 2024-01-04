#include <stdio.h>

// Function to swap two numbers using pass by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two numbers using pass by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display original values
    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    // Swap using pass by value (no change in main variables)
    swapByValue(num1, num2);
    printf("After swap by value: num1 = %d, num2 = %d\n", num1, num2);

    // Swap using pass by reference (changes reflected in main variables)
    swapByReference(&num1, &num2);
    printf("After swap by reference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
