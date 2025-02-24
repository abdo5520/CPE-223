/*
 * Author: Abdallah Abdallah
 * Date: 02/24/2025
 * Name: ch3_playingRandomGame.c
 *

 Description:
			This program generates a random number between 0 and 100 and compares it
	to the user’s input. The user must enter a value within the range (0-100).
	If the absolute difference between the user's input and the generated value
	is 20 or more, the user wins; otherwise, they lose.
	The program includes input validation, ensuring the user enters a valid number,
	and continues running until the user enters 999 to exit.

 * Return Value:
 * - 0: Indicates successful execution.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>     // Enables use of time()



 int main()
 {

     float userValue, generatedValue;



     srand( (int) time(0));  // Seed random number generator with current time



     while (1){


// create a goto label to repeat if the user input is invalid
userInputPoint:


                 printf("Enter a value between 0 and 100  (Enter 999 to EXIT) \n");

                 printf(">>>>>  ");

                 scanf("%f", &userValue);



                 // Check if user wants to exit
                 if ( (int) userValue == 999){


                     printf("\n Thank you for visiting us. \n  ");

                     // breaking out of the while loop
                     break;


                 }



                 // validating the user input

                 // check the user input
                 if ( (userValue < 0 ) || (userValue > 100) ){

                    printf("\n ERROE - Invalid Value \n ");

                    goto userInputPoint;

                 }

                 generatedValue = (rand() % 101); // a random value between 0 and 100

                 // only for debugging
                printf("\n The random value is %f \n ", generatedValue);

                 if   ( fabs( generatedValue - userValue) >= 20 ){


                        printf("\n You WON \n ");

                 }
                 else {

                        printf("\n You LOST \n ");


                 }


     } // end of while loop


     return(0);


 }  // end of the main function



