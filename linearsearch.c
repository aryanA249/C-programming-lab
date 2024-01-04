#include <stdio.h>

int main() {
    int n, key;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Declare an array of size n
    int arr[n];
    
    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the element to be searched
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    // Perform linear search
    int index = -1;  // Initialize index to -1 (not found)
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;  // Element found, update the index
            break;      // No need to continue searching
        }
    }
    
    // Display the result
    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }
    
    return 0;
}
