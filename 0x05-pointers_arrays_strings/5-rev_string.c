#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @str: an input string
 * Return: Nothing
 */
void rev_string(char *str)
{
	int len = 0, x = 0;
	char aux;

	while (str[len] != '\0')
		len++;

	while (x < len--)
	{
		aux = str[x];
		str[x++] = str[len];
		str[len] = aux;
	}
}
