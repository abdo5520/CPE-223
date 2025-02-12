

#include <stdio.h>
#include <string.h>

int main(void) {
   char a;
   char b;
   char c;

    char message1[100] = "Abdallah S. Abdallah Abousheaissha, PhD. He is a Professor of Electronics" ;

    char message2[20];

 //  scanf("%c", &a);

  //  b =a;




// this is illegal in C (felony)
  // message2  = message1;
  // strcpy(destination, source)
strcpy(message2, message1);

  // printf("%c %c \n",a,b);

   //printf("%c %c \n",b,a);


   printf("%s \n",message2);


   return 0;
}

