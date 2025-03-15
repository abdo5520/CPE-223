#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define arraySize 10



int main()
{

    int studentsGrades[10];

    srand(time(0));

     for (int i = 0; i < arraySize; i++)
       {

       // int value = rand()%100 + 1;

      //  studentsGrades[i] = value;

        studentsGrades [i] = rand()%100 + 1;

        }  // end of the generation loop

    // print before sorting

    printf("\n Before Sorting:     ");
     for (int i = 0; i < arraySize; i++) {
        printf("%d ", studentsGrades[i]);
    }
    printf("\n");

    // Native (None Optimized Code) Bubble Sorting

    for (int i=0; i < (arraySize-1); i++)
    {

         for (int j=i+1; j < arraySize ; j++ )
        {
            if (studentsGrades [i] > studentsGrades [j] )
                {
                    // swapping
                    int temp = studentsGrades [i];

                    studentsGrades[i] = studentsGrades [j];

                    studentsGrades [j] = temp;
                }

        }

    }


    // Print after sorting
    printf("\n After  Sorting:     ");
     for (int i = 0; i < arraySize; i++) {
        printf("%d ", studentsGrades[i]);
    }
    printf("\n");

 return (0);
}
