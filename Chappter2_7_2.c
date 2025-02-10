
#include <stdio.h>

int main(void) {


   double gasVolume;
   double oilVolume;
   double mixRatio;

   printf("Enter gas volume: ");
   scanf("%lf", &gasVolume);

   printf("Enter oil volume: ");
   scanf("%lf", &oilVolume);

   mixRatio = gasVolume / oilVolume;

   printf("Gas to oil mix ratio is %.16lf\n", mixRatio);

   return 0;


}

/*

#include <stdio.h>
#include <math.h>

int main(void) {
   double sphereVolume;
   double sphereRadius;

   scanf("%lf", &sphereRadius);

   sphereVolume = (4.0 / 3.0) * M_PI *  pow(sphereRadius, 3);

   printf("%.2lf\n", sphereVolume);

   return 0;
}

*/
