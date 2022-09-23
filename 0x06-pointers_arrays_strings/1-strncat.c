#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @first: an input string
 * @second: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *first, char *second, int n)
{
	int srclen = 0, i = 0;
	char *temp = first, *start = second;

	while (*second)
	{
		srclen++;
		second++;
	}

	while (*first)
		first++;

	if (n > srclen)
		n = srclen;

	second = start;

	for (; i < n; i++)
		*first++ = *second++;

	*first = '\0';
	return (temp);
}
