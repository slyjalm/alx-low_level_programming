#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int c = 0;
	int i = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	
	for (i = c - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
