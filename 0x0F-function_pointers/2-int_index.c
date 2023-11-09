#include "function_pointers.h"

/**
 * int_index - returns index place if true, else -1
 * @size: size of elements in ana array
 * @cmp: pointer to a function of one of the 1 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
