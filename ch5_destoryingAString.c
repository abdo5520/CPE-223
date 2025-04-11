
#include <stdio.h>

int main(void) {



   char cityName[20] = "Forest Lake"; // Compiler appends null char

   // In each printf(), printing stops when reaching null char
   printf("%s\n", "City:");           // Compiler appends null char to "City:"
   printf("%s\n", cityName);


    cityName[6] = '\0';

   // cityName[20] = '\0';



    printf("%s\n", cityName);

   return 0;
}
