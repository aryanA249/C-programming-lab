#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input a string
    printf("Enter a string: ");
    gets(str);

    // Find the length of the string
    int len = strlen(str);

    // Initialize variables for checking palindrome
    int isPalindrome = 1; // Assume the string is a palindrome

    // Check if the string is a palindrome
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0; // Set to 0 if characters don't match
            break; // No need to check further
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}
