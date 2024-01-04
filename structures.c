#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; // Assuming there are 5 subjects
    float totalMarks;
};

// Function to input information for a student
void inputStudent(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->name);

    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student->marks[i]);
    }
}

// Function to calculate total marks for a student
void calculateTotalMarks(struct Student *student) {
    student->totalMarks = 0;

    for (int i = 0; i < 5; i++) {
        student->totalMarks += student->marks[i];
    }
}

// Function to display information for a student
void displayStudent(struct Student *student) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Total Marks: %.2f\n", student->totalMarks);
}

int main() {
    int numberOfStudents;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    // Declare an array of structures to store student information
    struct Student students[numberOfStudents];

    // Input and display information for each student
    for (int i = 0; i < numberOfStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        inputStudent(&students[i]);
        calculateTotalMarks(&students[i]);
    }

    // Display information for each student
    for (int i = 0; i < numberOfStudents; i++) {
        displayStudent(&students[i]);
    }

    return 0;
}
