
/*
#include <stdio.h>

int main(void) {
   char message1[] = "Say \"Hello\"" ;


   char message2 [] = "a\"b";



   printf("%s \n", message1);



   printf("%s", message2);

   return 0;
}

*/



#include <stdio.h>

int main(void) {
   char a;
   char b;
   char c;

   scanf("%c\n", &a);
   scanf("%c\n", &b);
   scanf("%c", &c);

   printf("%c%c%c ",a,b,c);

   printf("%c%c%c ",a,c,b);

   printf("%c%c%c ",b,a,c);

   printf("%c%c%c ",b,c,a);

   printf("%c%c%c ",c,a,b);

   printf("%c%c%c\n",c,b,a);


   return 0;
}

