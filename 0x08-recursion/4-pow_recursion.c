#include "main.h"

/**
 * _pow_recursion - It returns the value of x raised to the power y.
 * @a: the base
 * @b: the exponent
 * Return: The result of a raised b
 */
int _pow_recursion(int a, int b)
{
	if (b == 0)
		return (1);
	else if (b < 0)
		return (-1);
	else if (b == 1)
		return (a);
	return (a *= _pow_recursion(a, b - 1));
}
