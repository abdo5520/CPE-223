
#include <stdio.h>

int main(void) {


   char arrowBody;
   char arrowHead;

   arrowBody = '-';
   arrowHead = '>';

   printf("%c%c%c%c\n", arrowBody, arrowBody, arrowBody, arrowHead);

   arrowBody = 'o';

   printf("%c%c%c%c\n", arrowBody, arrowBody, arrowBody, arrowHead);


   char message[] = "hello world";



    printf("%s\n", message);




      char message2[] = "\"hello world\"";
       printf("%s\n", message2);




   return 0;
}

