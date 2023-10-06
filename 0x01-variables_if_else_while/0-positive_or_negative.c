#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * a program that returns positive and negative
 *
 */
int main(void) {
    
    srand(time(0));

    
    int n = rand() - RAND_MAX / 2;

    
    printf("The number: %d\n", n);

    
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}


