
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand( (int) time(0));  // Seed random number generator with current time

    // another syntax to call time() is below
    // srand((int) time(NULL));

    float randomFloat = (float)rand() / RAND_MAX;  // Normalize to [0, 1]

    printf("Random float between 0 and 1: %f\n", randomFloat);

    return 0;
}
