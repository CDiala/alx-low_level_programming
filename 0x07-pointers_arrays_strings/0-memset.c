#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 * @a: location to fill
 * @b: char to fill location with
 * @c: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *a, char b, unsigned int c)
{
	char *start = a;

	while (c--)
	{
		*a = b;
		a++;
	}
	return (start);
}

