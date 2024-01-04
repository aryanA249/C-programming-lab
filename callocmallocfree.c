#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamicArray;
    int size;

    // Demonstrate malloc
    printf("Enter the size of the dynamic array using malloc: ");
    scanf("%d", &size);

    dynamicArray = (int *)malloc(size * sizeof(int));
    if (dynamicArray == NULL) {
        printf("Memory allocation using malloc failed.\n");
        return 1;
    }

    printf("Memory allocated using malloc.\n");

    // Input values into the dynamic array
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &dynamicArray[i]);
    }

    // Display values in the dynamic array
    printf("Values in the dynamic array using malloc: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Demonstrate calloc
    printf("\nEnter the size of the dynamic array using calloc: ");
    scanf("%d", &size);

    dynamicArray = (int *)calloc(size, sizeof(int));
    if (dynamicArray == NULL) {
        printf("Memory allocation using calloc failed.\n");
        return 1;
    }

    printf("Memory allocated using calloc.\n");

    // Input values into the dynamic array
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &dynamicArray[i]);
    }

    // Display values in the dynamic array
    printf("Values in the dynamic array using calloc: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Demonstrate realloc
    int newSize;
    printf("\nEnter the new size for the dynamic array using realloc: ");
    scanf("%d", &newSize);

    dynamicArray = (int *)realloc(dynamicArray, newSize * sizeof(int));
    if (dynamicArray == NULL) {
        printf("Memory reallocation using realloc failed.\n");
        return 1;
    }

    printf("Memory reallocated using realloc.\n");

    // Input values into the expanded dynamic array
    printf("Enter %d integers:\n", newSize);
    for (int i = 0; i < newSize; i++) {
        scanf("%d", &dynamicArray[i]);
    }

    // Display values in the expanded dynamic array
    printf("Values in the expanded dynamic array using realloc: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Demonstrate free
    free(dynamicArray);
    printf("\nMemory freed using free.\n");

    return 0;
}
