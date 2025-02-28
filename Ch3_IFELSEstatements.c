#include <stdio.h>


int main() {
    float grade;

    // Prompt user for input
    printf("Enter your grade (0-100): ");
    scanf("%f", &grade);

    // Validate input range
    if (grade < 0.0 || grade > 100.0) {
            // only print if the data is invalid
        printf("Invalid grade! Please enter a number between 0 and 100.\n");

    }

    else { // Only runs if the input data is valid


            // Determine the letter grade


			if (grade >= 90.0) {
				printf("Letter Grade: A\n");
			}
			else if (grade >= 80.0) {
				printf("Letter Grade: B\n");
			}
			else if (grade >= 70.0) {
				printf("Letter Grade: C\n");
			}
			else if (grade >= 60.0) {
				printf("Letter Grade: D\n");
			}
			else {
				printf("Letter Grade: F\n");
			}


    }


//    }

    return 0;
}
