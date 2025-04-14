#include <stdio.h>

//#define  104

float mySum_passbyReference( float * a , float b)
{

   // float z = a+b;

    *a = 9;

    printf ("\n the location is %d  while the value is %f \n", a, *a);

    return (  (*a) + b);

}



float mySum_passbyCopy( float a , float b)
{

   // float z = a+b;

    a = 9;

    return (a+b);

}

int main() {


    float x, y;


    x = 3.1;

    y  = 5.2;




    float totalSum1 = mySum_passbyCopy (x,y);


    printf("X values and Y Values are  : %f, %f       \n", x,y);

    // Print results
    printf("Sum of array elements: %f       \n", totalSum1);



    float totalSum2 = mySum_passbyReference (&x, y);
    printf("\n X values and Y Values are  : %f, %f       \n", x,y);

    // Print results
    printf("Sum of array elements: %f       \n", totalSum2);



    return 0;
}
