#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; // Assuming there are 5 subjects
    float totalMarks;
};

int main() {
    int numberOfStudents;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    // Declare an array of structures to store student information
    struct Student students[numberOfStudents];

    // Input information for each student
    for (int i = 0; i < numberOfStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        // Input student name
        printf("Enter student name: ");
        scanf("%s", students[i].name);

        // Input roll number
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        // Input marks for each subject
        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    // Calculate total marks for each student
    for (int i = 0; i < numberOfStudents; i++) {
        students[i].totalMarks = 0;

        for (int j = 0; j < 5; j++) {
            students[i].totalMarks += students[i].marks[j];
        }
    }

    // Display information and total marks for each student
    printf("\nStudent Information and Total Marks:\n");
    for (int i = 0; i < numberOfStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Total Marks: %.2f\n", students[i].totalMarks);
    }

    return 0;
}
