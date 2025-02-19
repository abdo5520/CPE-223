
#include <stdio.h>
#include <stdlib.h>
#include <time.h>     // Enables use of time()

int main(void) {


    // Without srand the program will generate the same sequence because
    // rand() will use the default seed

   //we cannot manually feed the seed, it is WRONG
   // because the seed should depend on a random event like a time stamp
   // acquired from the microprocessor during the run time

   // Also, the program will generate the same sequence every time it runs
   // Seeding a manual value is the same like using the default seed. It does not
   // solve the problem
    srand(12323 ); // NON- Unique seed
    printf("%d\n", rand());


   srand(22321); // NON- Unique seed
   printf("%d\n", rand());



    srand(6353); // NON- Unique seed

   printf("%d\n", rand());


    // passing random time to the srand((int) time( NULL)) works if
    // it is called once or multiple time with enough time period between the calls
    srand((int)time(NULL)); // Unique seed
    printf("%d\n", rand());

    //  However Running these lines back to back do not really
    //  create unique values because the seed is almost
    //  the same due to time proximity
    //  In real life application, we must take into account such time
    //  proximity, re-arrange the code sequence so that feeding the seed
    //  to the random function does not take place

   srand((int)time(NULL)); // Unique seed
    printf("%d\n", rand());


   srand((int)time(NULL)); // Unique seed
   printf("%d\n", rand());



    srand((int)time(NULL)); // Unique seed

   printf("%d\n", rand());


   return 0;
}
