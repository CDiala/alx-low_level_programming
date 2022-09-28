#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - It returns the value of square root of x.
 * @x: an input integer
 * Return: The square root of x
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);

	return (_sqrt(1, x));
}

/**
 * _sqrt - find square root
 * @prev: previous value
 * @sqroot: square root value
 * Return: the square root
 */
int _sqrt(int prev, int sqroot)
{
	if (prev > sqroot)
		return (-1);
	else if (prev * prev == sqroot)
		return (prev);
	return (_sqrt(prev + 1, sqroot));
}
