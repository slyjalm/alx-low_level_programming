#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int c = 0;
	char o;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	s--;
	for (o = c; o > 0; o--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
