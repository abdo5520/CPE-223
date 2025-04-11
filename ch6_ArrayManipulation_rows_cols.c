#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//#define rows 15
//#define cols 20


int printArray2D( int rows, int cols, int values[rows][cols])
{

        for (int i = 0; i < rows; i++){
                printf("Row %d\t", i);
                for (int j = 0; j < cols; j++) {


                    printf("%d\t", values[i][j]);

                }
                printf("\n");
        }

     return(1);

}


int generateData2D( int rows, int cols, int values[rows][cols])
{

       for (int i = 0; i < rows; i++)
       {
                for (int j = 0; j < cols; j++) {


                    values [i][j] = rand()%100 + 1;


                }

        }  // end of the generation loop

     return(1);
}

/*
The  "isIdentical_2D" function will return one only if all elements are equal, otherwise
it return zero

*/
int isIdentical_2D( int rows, int cols, int values1[rows][cols], int values2[rows][cols])
{

       for (int i = 0; i < rows; i++)
       {
                for (int j = 0; j < cols; j++) {


                      if (values1 [i][j] != values2[i][j])
                            return(0);


                }

        }  // end of the generation loop

     return(1);
}


int main()
{

    int mainRows =  15;

    int mainCols =  20;

    int  studentsGrades2D_first[mainRows][mainCols];

    int  studentsGrades2D_second[mainRows][mainCols];


    time_t seconds;


    seconds = time(0);

    srand(seconds);

    if ( generateData2D (mainRows, mainCols, studentsGrades2D_first) != 1)
    {

        //print error and exit
        printf("\n something is wrong in generation of 2D");

        return(3);

    }

     printArray2D(mainRows, mainCols, studentsGrades2D_first);

     if (isIdentical_2D(mainRows, mainCols, studentsGrades2D_first, studentsGrades2D_first))
        printf("\n\tThe two arrays are identical \n");
     else
        printf("\n\tThe two arrays are NOT identical \n");



        // second portion of the code

        srand(seconds);


   if ( generateData2D (mainRows, mainCols, studentsGrades2D_second) != 1)
    {

        //print error and exit
        printf("\n something is wrong in generation of 2D");

        return(3);

    }

       printArray2D(mainRows, mainCols, studentsGrades2D_second);

     if (isIdentical_2D(mainRows, mainCols, studentsGrades2D_first, studentsGrades2D_second))
        printf("\n\tThe two arrays are identical \n");
     else
        printf("\n\tThe two arrays are NOT identical \n");




 return (0);
}
