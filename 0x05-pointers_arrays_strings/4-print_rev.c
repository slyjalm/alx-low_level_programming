#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @a: string
 * Return: 0
 */
void print_rev(char *a)
{
	int longi = 0;
	char o;
	
	while (*a != '\0')
	{
		longi++;
		a++;
	}
	a--;
	for (o = longi; o > 0; o--)
	{
		putchar(*a);
		a--;
	}
	putchar('\n');
}
