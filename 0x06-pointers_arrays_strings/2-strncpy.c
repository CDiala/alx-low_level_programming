#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @first: an input string
 * @second: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *first, char *second, int n)
{
	int srclen = 0, i = 0;
	char *temp = first, *start = second;

	while (*second)
	{
		srclen++;
		second++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	second = start;

	for (; i < n; i++)
		*first++ = *second++;

	return (temp);
}
