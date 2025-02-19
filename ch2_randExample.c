
#include <stdio.h>
#include <stdlib.h>   // Enables use of rand()

// Switch a student
// from a random seat on the left  (cols  1 to 15)
//   to a random seat on the right (cols 16 to 30)
// Seat rows are 1 to 20

int main(void) {
  int rowNumL;
  int colNumL;
  int rowNumR;
  int colNumR;

   rowNumL = (rand() % 20) + 1;  // 1 to 20
   colNumL = (rand() % 15) + 1;  // 1 to 15

   rowNumR = (rand() % 20) + 1;  // 1 to 20
   colNumR = (rand() % 15) + 16; // 16 to 30

   printf("Move from ");
   printf("row %d col %d", rowNumL, colNumL);
   printf(" to ");
   printf("row %d col %d\n", rowNumR, colNumR);

   return 0;
}
