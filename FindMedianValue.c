#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 500001

// Function to perform Bubble Sort
void bubbleSort(int arr[], int size) {
    int i, j, temp;

    // Start measuring sorting time
    clock_t startSort = clock();

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap values
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // End measuring sorting time
    clock_t endSort = clock();
    double sortTime = ((double)(endSort - startSort)) / CLOCKS_PER_SEC;
    printf("Bubble Sort Execution Time: %f seconds\n", sortTime);
}

int main() {
    int arr[SIZE], i;

    // Seed the random number generator
    srand(time(0));

    // Start measuring initialization time
    clock_t startInit = clock();

    // Fill the array with random integers between 1 and 100
    printf("Generated random numbers: ");
    for (i = 0; i < SIZE; i++) {
        arr[i] = (rand() % 100) + 1; // Random number between 1 and 100
        //printf("%d ", arr[i]); // Print unsorted array
    }
    printf("\n");

    // End measuring initialization time
    clock_t endInit = clock();
    double initTime = ((double)(endInit - startInit)) / CLOCKS_PER_SEC;
    printf("Array Initialization Execution Time: %f seconds\n", initTime);

    // Sort the array
    bubbleSort(arr, SIZE);

    // Print the sorted array
//    printf("Sorted numbers: ");
//    for (i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");

    // Find the median (4th element in sorted array, index 3)
    printf("The median value is: %d\n", arr[SIZE/2 + 1]);

    return 0;
}



/*
#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap values
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[7], i;

    // Get user input
    printf("Enter 7 integers: ");
    for (i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    bubbleSort(arr, 7);

    // Find the median (4th element in sorted array, index 3)
    printf("The median value is: %d\n", arr[3]);

    return 0;
}
*/
