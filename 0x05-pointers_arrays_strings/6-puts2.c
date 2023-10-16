#include "main.h"
/**
 * puts2 - print only one character
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int c = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		c++;
	}
	t = c - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
	{
		putchar(str[0]);
	}
	}
	putchar('\n');
}
