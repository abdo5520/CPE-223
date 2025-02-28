
#include <stdio.h>

float main(void)
{

  unsigned int x = 533;

   unsigned int y = 3;

   unsigned int z;



   // bitwise
   z = (x >> 1) & (y <<1);

   printf ("\n %d \n", z);



      // logical
   z = (x >> 1) && (y <<1);

   printf ("\n %d \n", z);




return(0);
}
