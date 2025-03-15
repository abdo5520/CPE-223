#include <stdio.h>

#include <string.h>

#include <time.h>

#include <stdlib.h>

#define arraySize 10


int main()
{

    float studentsGrades[10];

    srand(time(0));

     for (int i = 0; i < arraySize; i++)
       {

       // int value = rand()%100 + 1;

      //  studentsGrades[i] = value;
           // generate an integer value between 1 and 100
       // studentsGrades [i] = rand()%100 + 1;
       // generate float value between 1 and 100
       studentsGrades[i ] =  1+ ((float) rand()/RAND_MAX) ;

        }  // end of the generation loop

        // print before sorting

        printf("\n Before Sorting:     ");
         for (int i = 0; i < arraySize; i++) {
            printf("%f ", studentsGrades[i]);
        }
        printf("\n");

    // Native (None Optimized Code) Bubble Sorting

    for (int i=0; i < (arraySize-1); i++)
    {

         for (int j=i+1; j < arraySize ; j++ )
        {

                // it is ok to compare float values using > or <
                // But it is not ok to check exact equality between two float values
                // Review Chapter 3
            if (studentsGrades [i] > studentsGrades [j] )
                {
                    // swapping
                    float temp = studentsGrades [i];

                    studentsGrades[i] = studentsGrades [j];

                    studentsGrades [j] = temp;
                }


        }


    }


        // Print after sorting
        printf("\n After  Sorting:     ");
         for (int i = 0; i < arraySize; i++) {
            printf("%f ", studentsGrades[i]);
        }
        printf("\n");

 return (0);
}
