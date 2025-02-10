/*
 * Author: [Your Name]
 * Date: [MM/DD/YYYY]
 *
 * Description:
 * This program takes two numerical inputs from the user, processes them
 * (e.g., performs an arithmetic operation), and displays the result.
 *
 * Parameters:
 * - firstNumber: First input value (double)
 * - secondNumber: Second input value (double)
 *
 * Return Value:
 * - 0: Indicates successful execution.
 */

#include <stdio.h>

int main() {
    double firstNumber, secondNumber, sumResult;

    // Prompt user for input
    printf("Enter two numbers separated by a comma: ");
    scanf("%lf , %lf", &firstNumber, &secondNumber);

    // Perform addition
    sumResult = firstNumber + secondNumber;

    // Display result
    printf("The sum of %.2f and %.2f is %.2f\n", firstNumber, secondNumber, sumResult);

    return 0;
}
