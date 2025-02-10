
#include <stdio.h>

int main(void) {
   double milesTravel; // User input of miles to travel
   double hoursFly;    // Travel hours if flying those miles
   double hoursDrive;  // Travel hours if driving those miles

   printf("Enter miles to travel:\n");
   scanf("%lf", &milesTravel);

   hoursFly   = milesTravel / 500.0; // Plane flies 500 mph
   hoursDrive = milesTravel / 60.0;  // Car drives 60 mph

   printf("%lf miles would take:\n", milesTravel);
   printf("   %lf hours to fly\n", hoursFly);
   printf("   %lf hours to drive\n", hoursDrive);

   return 0;
}
