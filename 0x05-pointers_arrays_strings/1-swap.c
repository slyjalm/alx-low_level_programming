#include "main.h"

/**
 * swap_int - swaps values
 * @x: integer to swap
 * @y: integer to swap
 */
void swap_int(int *x, int *y)
{
	int n;

	n = *x;
	*x = *y;
	*y = n;
}
