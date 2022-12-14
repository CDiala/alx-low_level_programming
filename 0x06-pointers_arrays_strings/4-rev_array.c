#include "main.h"

/**
 * reverse_array - a function that reverses an array.
 * @a: an input array
 * @n: number of elements in array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
