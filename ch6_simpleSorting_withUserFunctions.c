#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define arraySize 10

//// the function name
//// input arguments
//// the return value
//// func1 uses passing by value (means a copy of the variable)
//void func1 (int a, int b)
//{
//
////changing the value of the variable received from
//// the caller function will fail because we used pass by value (a copy)
//    a = 5;
//
//    b = 9;
//
//}
//// func2 uses passing by reference (means I am sending the memory location of the original variable)
//void func2 (int* a, int* b)
//{
//
////changing the value of the variables received from the caller function will work because
//// they were passed by reference and we modified the values inside that referenced memory location
//printf("\n %d    , %d", a,b);
//        //a = &x
//        //*a = *&x
//        // *a = x;
//        *a = 5;
//        *b = 9;
//        int z = *a + *b;
//  printf("\n %d ", z);
//
//}

int printArray(int values[], int n)
{

    for (int i = 0; i < n; i++) {

         printf("%d ", values[i]);
    }
    printf("\n");


    return(1);

}


int generateData(int values[], int n)
{

       for (int i = 0; i < n; i++)
       {

        values [i] = rand()%100 + 1;

        }  // end of the generation loop

     return(1);
}

int sortArray (int values[], int n)
{

   // Native (None Optimized Code) Bubble Sorting
    for (int i=0; i < (n-1); i++)
    {

         for (int j=i+1; j < n ; j++ )
        {
            if (values [i] > values [j] )
                {
                    // swapping
                    int temp = values [i];

                    values[i] = values [j];

                    values [j] = temp;
                }

        }

    }

    return(1);

}



int main()
{

//    int x =100; int y =200;
//
//    printf ("\n -------------Func 1------------- ");
//
//    printf ("\n Before Calling :  %d  ,  %d  " , x,y);
//
//    func1(x,y);
//
//    printf ("\n After Calling:   %d  ,  %d  " , x,y);
//
//
//    printf ("\n --------------------------------- ");
//
//
//    printf ("\n -------------Func 2------------- ");
//
//    printf ("\n Before Calling :  %d  ,  %d  " , x,y);
//
//    func2(&x,&y);
//
//    printf ("\n After Calling:   %d  ,  %d  " , x,y);
//
//
//    printf ("\n --------------------------------- ");


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
