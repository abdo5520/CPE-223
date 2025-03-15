#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//include user defined header
#include "mysort.h"

#define arraySize 10


int main()
{


    int studentsGrades[10];

    srand(time(0));

    // call a function to fill the array with random data
    if ( generateData (studentsGrades, arraySize) != 1)
    {
        //print error and exit
        printf("\n something is wrong in generation");
        return(3);
    }

    // print before sorting
    printf("\n Before Sorting:     ");
    // In C language, any passing of an array type is already a pass by reference
    // Which means we have to be careful (very careful) because the called function can
    // change the original date if something goes wrong in our logic
    printArray( studentsGrades, arraySize);

    // calling the sorting function
    sortArray ( studentsGrades, arraySize);

    // Print after sorting
    printf("\n After  Sorting:     ");
    printArray( studentsGrades, arraySize);


 return (0);
}
