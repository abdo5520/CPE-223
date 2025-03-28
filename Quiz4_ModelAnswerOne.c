#include <stdio.h>

int main(void) {


    int x[] = {3, 4, 9, 5, 1, 2, 6, 7, 8, 10, 11};
    int n = sizeof(x) / sizeof(x[0]);
    int target = 10;




    for (int i=0; i< n ; i++ ){

         for (int j=0; j < n; j++){

            if ( i >= j )

                continue;


            if (x[i] + x[j] == target){

               // Target found at (0, 7): values (3, 7)

               printf("Target found at (%d, %d) : values (%d, %d) \n", i, j, x[i] , x[j]);



            }

         }

    }


   return 0;
}
