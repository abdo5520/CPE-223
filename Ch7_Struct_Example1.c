/*
--------------------------------------------------------
File Name: student_typedef.c
Author: Abdallah
Description:
    This program demonstrates how to use typedef with struct
    to simplify syntax and improve readability. It uses
    pass-by-value to work with a Student data structure.
--------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

struct student {

  int id;
    char name[50];
    float gpa;

};
// Define a new type `Student` using typedef
typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

// Function to initialize and return a Student
Student initializeStudent(int id, const char name[], float gpa) {
    Student s;
    s.id = id;
    strcpy(s.name, name);
    s.gpa = gpa;
    return s;
}

// Function to print student details
void printStudent(Student s) {
    printf("Student ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("GPA: %.2f\n", s.gpa);
}

// Function to update GPA and return the updated Student
Student updateGPA(Student s, float newGPA) {
    s.gpa = newGPA;
    return s;
}

int main() {
    // Create and initialize student
    Student student1 = initializeStudent(102, "James Bond", 3.50);

    // Print before update
    printf("Before GPA update:\n");
    printStudent(student1);

    // Update GPA
    student1 = updateGPA(student1, 3.95);

    // Print after update
    printf("\nAfter GPA update:\n");
    printStudent(student1);

    return 0;
}
