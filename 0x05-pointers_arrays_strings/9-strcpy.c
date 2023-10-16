#include "main.h"
/**
 * char _strcpy - a function that copies string pointed by src
 * terminates null byte
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] - src[x];
	}
	dest[i] = '\0';
	return (dest);
}
