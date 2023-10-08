#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - a program that returns positive and negative
*
* Return: Always (Success)
*/

int main(void)

{
    int n;

    srand(time(0)); 

    n = rand() - RAND_MAX / 2; 

    printf("The number %d is ", n);

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    printf("\n");

    return (0);
}



