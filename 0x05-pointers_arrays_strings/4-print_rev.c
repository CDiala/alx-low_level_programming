#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @str: an input string
 * Return: Nothing
 */
void print_rev(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	while (len)
		_putchar(str[--len]);

	_putchar('\n');
}
