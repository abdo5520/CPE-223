#include <stdio.h>

// Function to validate input values
int isValidInput(int timeHour, char inputColon, int timeMinute, int typeOfDay, int numPeople) {
    // Validate time format (24-hour format)
    if (timeHour < 0 || timeHour > 23) {
        printf("Error: Invalid hour entered. Must be between 00 and 23.\n");
        return 0;
    }
    if (timeMinute < 0 || timeMinute > 59) {
        printf("Error: Invalid minutes entered. Must be between 00 and 59.\n");
        return 0;
    }
    if (inputColon != ':') {
        printf("Error: Invalid time format. Please use HH:MM format.\n");
        return 0;
    }

    // Validate type of day (0 for weekday, 1 for weekend/holiday)
    if (typeOfDay != 0 && typeOfDay != 1) {
        printf("Error: Invalid day type entered. Must be 0 (weekday) or 1 (weekend/holiday).\n");
        return 0;
    }

    // Validate number of people (must be positive)
    if (numPeople <= 0) {
        printf("Error: Invalid number of people. Must be 1 or more.\n");
        return 0;
    }

    return 1; // Input is valid
}

int main(void) {
    int timeHour;      // Time of travel hour (24-hour format)
    int timeMinute;    // Time of travel minute
    int typeOfDay;     // 0 - weekday, 1 - weekend/holiday
    int numPeople;     // People in vehicle
    char inputColon;   // Used to read time format
    double tollAmount;

    printf("\n Enter time of travel (HH:MM in 24-hour format): ");

    // Read an integer (hour), colon (char), and integer (minute)
    scanf("%d%c%d", &timeHour, &inputColon, &timeMinute);

    printf("\n Enter type of day (0 - weekday, 1 - weekend/holiday): ");
    scanf("%d", &typeOfDay);

    printf("\n Enter number of people in vehicle: ");
    scanf("%d", &numPeople);

    // Validate inputs before proceeding
    if (!isValidInput(timeHour, inputColon, timeMinute, typeOfDay, numPeople)) {
        printf("\n Exiting program due to invalid input.\n");
        return 1; // Exit program with error code
    }

    // Calculate toll amount
    if (typeOfDay == 0) { // Weekday time and rates
        if (timeHour < 6) {
            tollAmount = 1.55;
        }
        else if (timeHour < 10) {
            tollAmount = 4.65;
        }
        else if (timeHour < 18) {
            tollAmount = 2.35;
        }
        else {
            tollAmount = 1.55;
        }
    }
    else { // Weekend/holiday time and rates
        if (timeHour < 8) {
            tollAmount = 1.55;
        }
        else if (timeHour < 12) {
            tollAmount = 3.05;
        }
        else if (timeHour < 16) {
            tollAmount = 3.45;
        }
        else if (timeHour < 19) {
            tollAmount = 3.60;
        }
        else if (timeHour < 22) {
            tollAmount = 3.05;
        }
        else {
            tollAmount = 1.55;
        }
    }

    // Apply carpool rate if applicable
    if (numPeople >= 2) {
        if ((typeOfDay == 0) && (timeHour >= 6) && (timeHour < 10)) {
            tollAmount *= 0.5;
        }
        else {
            tollAmount = 0.0;
        }
    }

    // Output toll using am/pm format
    printf("Toll at ");

    // Output hour adjusting for am/pm format
    if (timeHour == 0) {
        printf("12:");
    }
    else if (timeHour <= 12) {
        printf("%d:", timeHour);
    }
    else {
        printf("%d:", timeHour - 12);
    }

    // Output minutes with formatting to ensure two digits
    printf("%02d", timeMinute);

    // Output am/pm
    if (timeHour < 12) {
        printf(" am");
    }
    else {
        printf(" pm");
    }

    printf(" is %.2lf\n", tollAmount);

    return 0;
}
