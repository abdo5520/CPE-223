/*

This code is used to demo the difference between const variables vs static variables
IT is also used to compare global variables vs global #define constants
It is also comparing between global variables VS global const variables
And to explain little bit introduction on naming spaces in the C language
*/



#include <stdio.h>


#define PI 3;

//  const int PI = 3;

// int PI = 3;


int adding (int a, int b)
{

    int p1, p2, result;

    static int counter = 0;

    //const static int counter = 0;

    p1= a; p2 = b;

  //  PI = 5;

    result = p1 + p2 + PI;

    counter++;

    printf("The internal counter value = %d \n\n", counter);

    printf("The result value = %d \n\n", result);

    return(result);

}

int main (void)
{

    int x , y , z1, z2;

 // const int PI = 3;

    x = 10; y= 20;

    z1 = adding (x,y);

    z2 = adding (15 , 25);


    return;


}
