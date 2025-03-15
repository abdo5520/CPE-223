#include <stdio.h>

//#define  10

int main() {
    // Define an array with fixed values
    int weeklyPrice[] = {10, 	20,	 30,	40,	 50, 60, 70,	80,	90,	100};

  // int array2[arraySize] = {10, 	20,	 30,	40,	 50, 60, 70,	80,	90,	100};


    int arraySize = sizeof(weeklyPrice) / sizeof(weeklyPrice[0]); // Get the size of the array

    int sum = 0;
    double product = 1;

    // Compute sum and product
    int myIndex=0 ;

    while ( myIndex < arraySize ) {

        //sum = sum + weeklyPrice[myIndex];
        sum += weeklyPrice[myIndex];

       // product = product * weeklyPrice[myIndex];
        product *= weeklyPrice[myIndex];

        myIndex++;
    }   // end of the while loop



    // Print results
    printf("Sum of array elements: %d       \n", sum);
    printf("Product of array elements: %lf      \n", product);

    return 0;
}
