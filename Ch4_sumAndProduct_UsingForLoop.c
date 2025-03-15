#include <stdio.h>

int main() {
    // Define an array with fixed values
    int weeklyPrice[] = {10, 	20,	 30,	40,	 50, 60, 70, 80,	90,	100};


    int size = sizeof(weeklyPrice) / sizeof(weeklyPrice[0]); // Get the size of the array

    int sum = 0;
    double product = 1;

    // Compute sum and product
    for (int i = 0; i < size ; i++) {
        sum += weeklyPrice[i];
        product *= weeklyPrice[i];
    }

    // Print results
    printf("Sum of array elements: %d       \n", sum);
    printf("Product of array elements: %lf      \n", product);

    return 0;
}
