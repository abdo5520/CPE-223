/*
--------------------------------------------------------
File Name: student_array_input.c
Author: Abdallah
Date: [Insert Date]
Description:
    This program demonstrates how to store multiple student records
    using a struct array. It receives input for 3 students, updates
    their GPA, and displays their information before and after update.
--------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

// Define Student struct using typedef
typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

// Function to get student info from the user
Student getStudentFromUser(int studentNum) {
    Student s;
    printf("\n--- Enter details for Student %d ---\n", studentNum + 1);

    printf("Enter student ID: ");
    scanf("%d", &s.id);

    getchar(); // Clear newline before fgets
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // Remove trailing newline

    printf("Enter student GPA: ");
    scanf("%f", &s.gpa);

    return s;
}

// Function to print a student's data
void printStudent(Student s) {
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("GPA: %.2f\n", s.gpa);
}

// Function to update GPA
Student updateGPA(Student s, float newGPA) {
    s.gpa = newGPA;
    return s;
}

int main() {
    const int SIZE = 3;
    Student students[SIZE];

    // Input: Get data for each student
    for (int i = 0; i < SIZE; i++) {
        students[i] = getStudentFromUser(i);
    }

    // Output: Print all student data before update
    printf("\n--- Student Data Before GPA Updates ---\n");
    for (int i = 0; i < SIZE; i++) {
        printf("\nStudent %d:\n", i + 1);
        printStudent(students[i]);
    }

    // Update GPA for each student
    float newGPA;
    for (int i = 0; i < SIZE; i++) {
        printf("\nEnter new GPA for %s: ", students[i].name);
        scanf("%f", &newGPA);
        students[i] = updateGPA(students[i], newGPA);
    }

    // Output: Print all student data after update
    printf("\n--- Student Data After GPA Updates ---\n");
    for (int i = 0; i < SIZE; i++) {
        printf("\nStudent %d:\n", i + 1);
        printStudent(students[i]);
    }

    return 0;
}
