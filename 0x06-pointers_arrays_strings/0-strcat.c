#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @first: an input string
 * @second: an input string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *first, char *second)
{
	char *temp = first;

	while (*first)
		first++;

	while (*second)
		*first++ = *second++;

	*first = '\0';
	return (temp);
}
