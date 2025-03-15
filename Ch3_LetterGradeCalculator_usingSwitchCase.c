#include <stdio.h>

#include <string.h>

//#define  10


int main()
{

    float studentsGrades[] = {10, 	20,	 30,	40,	 50, 60, 70,	80,	90,	100};


    int arraySize = sizeof(studentsGrades) / sizeof(studentsGrades[0]); // Get the size of the array

    char grade[3];

    int category[arraySize];

    // Compute sum and product
    for (int myIndex = 0; myIndex < arraySize ; myIndex++) {

        // check validity
        if ( studentsGrades[myIndex] < 0 || studentsGrades[myIndex] > 100)
              {
                  printf("\n The stored grade is invalid \n");
              }

        if (studentsGrades[myIndex] >= 95 )
             category[myIndex] = 7;
        else if (studentsGrades[myIndex] >= 90 )
             category[myIndex] = 6;
        else if (studentsGrades[myIndex] >= 85)
             category[myIndex] = 5;
        else if (studentsGrades[myIndex] >= 80)
             category[myIndex] = 4;

        else if (studentsGrades[myIndex] >= 75)
             category[myIndex] = 3;

        else if (studentsGrades[myIndex] >= 70)

             category[myIndex] = 2;


        else if (studentsGrades[myIndex] >= 60)
             category[myIndex] = 1;


        else
             category[myIndex] = 0;


    } // end of the first for loop


    for (int myIndex = 0; myIndex < arraySize; myIndex++)
        {

            switch(category[myIndex])
            {
            case 7:
                strcpy(grade,"A ");
                break;
            case 6:
                strcpy(grade,"A-");
                    break;
            case 5:
                strcpy(grade,"B+");
                    break;
            case 4:
                strcpy(grade,"B ");
                    break;
            case 3:
                strcpy(grade,"C+");
                    break;
            case 2:
                strcpy(grade,"C ");
                    break;
            case 1:
                strcpy(grade,"D");
                    break;
            default:
                strcpy(grade,"F ");
                    break;



            }  // end of the switch statement

            printf("Grade: %s\n", grade);

        }  //end of the second for loop




 return (0);
}
