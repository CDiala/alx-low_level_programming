#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @str: An input string
 * Return: Nothing
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
