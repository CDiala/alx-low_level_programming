#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @str: An input string to printing
 * Return: Nothing
 */
void _puts_recursion(char *str)
{
	if (*str)
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
	else
		_putchar('\n');
}
