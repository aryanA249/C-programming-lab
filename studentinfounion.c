#include <stdio.h>

// Define a union to store information about a student
union StudentInfo {
    char studentName[50];
    int rollNumber;
    float marks;
};

int main() {
    // Declare a variable of type union StudentInfo
    union StudentInfo student;

    // Input information for the student
    printf("Enter student name: ");
    scanf("%s", student.studentName);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Display information about the student
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.studentName);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
