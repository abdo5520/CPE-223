#include <stdio.h>

int main(void) {
   int timeHour;      // Time of travel hour (24 hour format)
   int timeMinute;    // Time of travel minute
   int typeOfDay;     // 0 - weekday, 1 - weekend/holiday
   int numPeople;    // People in vehicle
   char inputColon;   // Used to read time format
   double tollAmount;

   printf("Enter time of travel (HH:MM in 24 hour format): ");

   // Read an integer (hour), colon (char), and integer (minute)
   scanf("%d%c%d", &timeHour, &inputColon, &timeMinute);

   printf("Enter type of day (0 - weekday, 1 - weekend/holiday): ");
   scanf("%d", &typeOfDay);

   printf("Enter number of people in vehicle: ");
   scanf("%d", &numPeople);

   if (typeOfDay == 0) { // Weekday time and rates
                         // Determine toll based on hour of travel
      if (timeHour < 6) {         // Before 6:00 am
         tollAmount = 1.55;
      }
      else if (timeHour < 10) {   // 6 am to 9:59 am
         tollAmount = 4.65;
      }
      else if (timeHour < 18) {   // 10 am to 5:59 pm
         tollAmount = 2.35;
      }
      else {                      // 6 pm and after
         tollAmount = 1.55;
      }
   }
   else { // Weekend/holiday time and rates
          // Determine toll based on hour of travel
      if (timeHour < 8) {         // Before 8:00 am
         tollAmount = 1.55;
      }
      else if (timeHour < 12) {   // 8 am to 11:59 am
         tollAmount = 3.05;
      }
      else if (timeHour < 16) {   // 12 pm to 3:59 pm
         tollAmount = 3.45;
      }
      else if (timeHour < 19) {   // 4 pm to 6:59 pm
         tollAmount = 3.60;
      }
      else if (timeHour < 22) {   // 7 pm to 9:59 pm
         tollAmount = 3.05;
      }
      else {                      // 10 pm and after
         tollAmount = 1.55;
      }
   }

   // Check for carpool rate (3 or more people) and update toll
   if (numPeople >= 2) {
      // If on a weekday between 6:00 am and 9:59 am, toll is half off
      if ((typeOfDay == 0) && (timeHour >= 6) && (timeHour < 10)) {
         tollAmount = tollAmount * 0.5;
      }
      // Otherwise, the toll is free
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

   // Output minute with formatting (discussed elsewhere) to
   // print two digits for minutes.
   printf("%02d", timeMinute);

   // Output am/pm
   if (timeHour < 12) {
      printf(" am");
   }
   else {
      printf(" pm");
   }

   printf(" is %lf\n", tollAmount);

   return 0;
}
