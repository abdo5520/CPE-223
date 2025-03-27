#include <stdio.h>

int main(void) {


   int data[] = {18,9,17,0, 9 ,30};


   for (int i =0; i < sizeof(data)/sizeof(data[0]);  i++){

     if (  (data[i] == 0) || (data[i] > 25) )

                   continue;

     for (int j = 0; j < data[i]; j++){



              printf("*");

        }


    printf("\n\n");


   }

   printf("Goodbye.\n");

   return 0;
}
