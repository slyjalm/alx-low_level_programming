#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the alphabet in lowercase except 'q' and 'e'
 *
 * Return: Always  (Success)
 */
int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        if (c != 'q' && c != 'e')
        {
            putchar(c);
        }
    }

    putchar('\n');
    return (0);
}

