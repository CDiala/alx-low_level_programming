#include "main.h"

/**
 * factorial - a function that returns the factorial of a number.
 * @x: An input integer
 * Return: The factorial of x
 */
int factorial(int x)
{
	if (x < 0)
		return (-1);
	if (x <= 1)
		return (1);
	return (x * factorial(x - 1));
}
