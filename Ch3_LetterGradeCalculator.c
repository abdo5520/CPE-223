#include <stdio.h>

#include <string.h>

//#define  10


int main()
{

    float studentsGrades[] = {10, 	20,	 30,	40,	 50, 60, 70,	80,	90,	100};

    int arraySize = sizeof(studentsGrades) / sizeof(studentsGrades[0]); // Get the size of the array

    char grade[3];

    // Compute sum and product
    for (int myIndex = 0; myIndex < arraySize ; myIndex++) {

        // check validity
        if ( studentsGrades[myIndex] < 0 || studentsGrades[myIndex] > 100)
              {
                  printf("\n The stored grade is invalid \n");
              }

        if (studentsGrades[myIndex] >= 95 )
            {
            strcpy(grade,"A ");
            }
        else if (studentsGrades[myIndex] >= 90 )
           strcpy(grade,"A-");
        else if (studentsGrades[myIndex] >= 85)

            strcpy(grade,"B+");
        else if (studentsGrades[myIndex] >= 80)
            strcpy(grade,"B ");
        else if (studentsGrades[myIndex] >= 75)
            strcpy(grade,"C+");
        else if (studentsGrades[myIndex] >= 70)
            strcpy(grade,"C ");

        else if (studentsGrades[myIndex] >= 60)
            strcpy(grade,"D ");

        else
            strcpy(grade,"F ");


            // Print results
        printf("The Student Letter grade is : %s       \n", grade);


    }









}
