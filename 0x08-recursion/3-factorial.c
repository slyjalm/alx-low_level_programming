#include "main.h"
/**
 * factorial - Calculate the factorial of a number
 * @n: number to be calculated
 * Return: 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
