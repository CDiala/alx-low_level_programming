#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @str: An input string to printing
 * Return: The length of the string
 */
int _strlen_recursion(char *str)
{
	if (*str)
		return (1 + _strlen_recursion(str + 1));
	return (0);
}
