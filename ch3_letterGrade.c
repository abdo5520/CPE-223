/*
 * Author: Abdallah Abdallah
 * Date: 02/20/2025
 * Name: letterGrade.c
 *

 Description:
    This program takes a student's grade as a float input (0-100) and
    displays the corresponding letter grade. It validates the input
    and ensures it falls within the correct range.

 * Return Value:
 * - 0: Indicates successful execution.
 */


#include <stdio.h>
#include <stdbool.h>


 int main()
 {

     float grade;

     bool checkGrade;



    // while (1){



 startpoint:             printf("Enter your grade value out of 100, it should be between 0 and 100 \n");
             printf(">>>>>  ");

             scanf("%f", &grade);

             if   ( (grade < 0) || (grade > 100) ){

                 printf(" \n Invalid input  ");
                 goto startpoint;


             }





             checkGrade = (grade >= 70) ;

             if (checkGrade) {

                printf("\n PASSED \n");

             }
             else{

                printf("\n NOT PASSED \n");

             }

//  check equality
//  if (x == 1 )
//
//  check inequality
// if (x != 1)
                 if (grade >= 90.0) {
                    printf("Letter Grade: A\n");
                }

                 if ( (grade >= 80.0) && (grade < 90.0) ) {
                    printf("Letter Grade: B\n");
                }


                 if ( (grade >= 75.0) && (grade < 80.0) ) {
                    printf("Letter Grade: C \n");
                }

                 if ( (grade >= 70.0) && (grade < 75.0) ) {
                    printf("Letter Grade: D \n");
                }

                 if ( grade < 70 ) {
                    printf("Letter Grade: F \n");
                }




  //   }




    printf("\n Thank you");


    goto startpoint;


     return(0);


 }


//
//int main() {
//    float grade;
//
//    // Prompt user for input
//    printf("Enter your grade (0-100): ");
//    scanf("%f", &grade);
//
//    // Validate input range
//    if (grade < 0.0 || grade > 100.0) {
//        printf("Invalid grade! Please enter a number between 0 and 100.\n");
//    }
//    else {
//        // Determine the letter grade
//        if (grade >= 90.0) {
//            printf("Letter Grade: A\n");
//        }
//        else if (grade >= 80.0) {
//            printf("Letter Grade: B\n");
//        }
//        else if (grade >= 70.0) {
//            printf("Letter Grade: C\n");
//        }
//        else if (grade >= 60.0) {
//            printf("Letter Grade: D\n");
//        }
//        else {
//            printf("Letter Grade: F\n");
//        }
//    }
//
//    return 0;
//}
