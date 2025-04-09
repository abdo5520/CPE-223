#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define arraySize 15


int printArray2D( int values[arraySize][arraySize], int n)
{

        for (int i = 0; i < n; i++){
                printf("Row %d\t", i);
                for (int j = 0; j < n; j++) {


                    printf("%d\t", values[i][j]);

                }
                printf("\n");
        }

     return(1);

}


int generateData2D( int values[arraySize][arraySize], int n)
{

       for (int i = 0; i < n; i++)
       {
                for (int j = 0; j < n; j++) {


                    values [i][j] = rand()%100 + 1;


                }

        }  // end of the generation loop

     return(1);
}

/*
The  "isIdentical_2D" function will return one only if all elements are equal, otherwise
it return zero

*/
int isIdentical_2D( int values1[arraySize][arraySize], int values2[arraySize][arraySize],int n)
{

       for (int i = 0; i < n; i++)
       {
                for (int j = 0; j < n; j++) {


                      if (values1 [i][j] != values2[i][j])
                            return(0);


                }

        }  // end of the generation loop

     return(1);
}


int main()
{
    int  studentsGrades2D_first[arraySize][arraySize];

    int  studentsGrades2D_second[arraySize][arraySize];


    srand(time(0));

    if ( generateData2D (studentsGrades2D_first, arraySize) != 1)
    {

        //print error and exit
        printf("\n something is wrong in generation of 2D");

        return(3);

    }

     printArray2D(studentsGrades2D_first, arraySize);

     if (isIdentical_2D(studentsGrades2D_first, studentsGrades2D_first , arraySize))
        printf("\n\tThe two arrays are identical \n");
     else
        printf("\n\tThe two arrays are NOT identical \n");



     if ( generateData2D (studentsGrades2D_second, arraySize) != 1)
    {

        //print error and exit
        printf("\n something is wrong in generation of 2D");

        return(3);

    }

     printArray2D(studentsGrades2D_second, arraySize);


     if (isIdentical_2D(studentsGrades2D_first, studentsGrades2D_second, arraySize))
        printf("\n\tThe two arrays are identical \n");
     else
        printf("\n\tThe two arrays are NOT identical \n");







 return (0);
}
