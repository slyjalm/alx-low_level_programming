#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string to be reversed
 * Return 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
		s--;
	putchar(*s);
}
