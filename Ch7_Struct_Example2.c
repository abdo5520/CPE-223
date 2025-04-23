/*
--------------------------------------------------------
File Name: student_input.c
Author: Abdallah
Date: [Insert Date]
Description:
    This program uses typedef with struct to define a Student.
    It prompts the user to enter student data and displays it
    before and after updating the GPA.
--------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

// Define the Student struct using typedef
typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

// Function to initialize a Student using user input
Student getStudentFromUser() {
    Student s;
    printf("Enter student ID: ");
    scanf("%d", &s.id);

    // Clear newline before fgets
    getchar();
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);

    // Remove newline from fgets
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter student GPA: ");
    scanf("%f", &s.gpa);

    return s;
}

// Function to print student details
void printStudent(Student s) {
    printf("Student ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("GPA: %.2f\n", s.gpa);
}

// Function to update GPA
Student updateGPA(Student s, float newGPA) {
    s.gpa = newGPA;
    return s;
}

int main() {
    // Get student info from user
    Student student1 = getStudentFromUser();

    printf("\nStudent Details (Before GPA Update):\n");
    printStudent(student1);

    // Prompt to update GPA
    float newGPA;
    printf("\nEnter new GPA to update: ");
    scanf("%f", &newGPA);

    // Update and display again
    student1 = updateGPA(student1, newGPA);
    printf("\nStudent Details (After GPA Update):\n");
    printStudent(student1);

    return 0;
}
