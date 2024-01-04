#include <stdio.h>
#include <string.h>

int main() {
    // Declaration and initialization of strings
    char str1[] = "Hello";
    char str2[20]; // uninitialized string

    // String copy (strcpy)
    strcpy(str2, str1);
    printf("String 1: %s\n", str1);
    printf("String 2 (after strcpy): %s\n", str2);

    // String concatenation (strcat)
    strcat(str2, " World!");
    printf("String 2 (after strcat): %s\n", str2);

    // String length (strlen)
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    printf("Length of String 1: %d\n", len1);
    printf("Length of String 2: %d\n", len2);

    // String comparison (strcmp)
    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0) {
        printf("String 1 and String 2 are equal.\n");
    } else if (cmpResult < 0) {
        printf("String 1 is lexicographically smaller than String 2.\n");
    } else {
        printf("String 1 is lexicographically larger than String 2.\n");
    }

    // String substring (strstr)
    char *substring = strstr(str2, "World");
    if (substring != NULL) {
        printf("Substring 'World' found in String 2 at position: %ld\n", substring - str2);
    } else {
        printf("Substring 'World' not found in String 2.\n");
    }

    // String reverse
    printf("String 1 in reverse order: ");
    for (int i = len1 - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    printf("\n");

    return 0;
}
