#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 *
 */

void puts_half(char *str)

{
	int x = 0;
	int k;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 1)
	{
	k = (x - 1) / 2;
	k += 1;
	}
	else
	{
	k = x / 2;
	}
	for (; k < x; k++)
	{
	putchat(str[k]);
	}
	putchar('\n');
}
