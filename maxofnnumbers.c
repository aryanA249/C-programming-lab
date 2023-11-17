#include <stdio.h>

int main() {
    int n, i;
    float num, max;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read the first element
    printf("Enter element 1: ");
    scanf("%f", &max);

    // Iterate through the remaining elements
    for (i = 2; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%f", &num);

        // Update max if the current element is greater
        if (num > max) {
            max = num;
        }
    }

    // Print the maximum
    printf("Maximum value is: %.2f\n", max);

    return 0;
}
